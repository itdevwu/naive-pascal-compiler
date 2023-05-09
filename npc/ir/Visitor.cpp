#include "Visitor.hpp"

//#include "exceptions/DebugException.h"
//#include "exceptions/NotImplementedException.h"
//#include "exceptions/VariableNotFoundException.h"
//#include "exceptions/ProcedureNotFoundException.h"
#include "llvm/Support/raw_os_ostream.h"
#include "StandardProcedure.hpp"

using namespace antlr4;
using namespace Pascal;

llvm::Value *Visitor::getVariable(const std::string &name)
{
    for (auto it = scopes.rbegin(); it != scopes.rend(); it++) // 从最内层到最外层作用域依次查找
    {
        auto variable = it->getVariable(name);
        if (variable)
            return variable;
    }
    return nullptr;
}

void Visitor::fromFile(const std::string &path)
{
    std::ifstream stream(path);

    auto input = new ANTLRInputStream(stream);
    auto lexer = new pascalLexer(input);
    auto tokens = new CommonTokenStream(lexer);
    auto parser = new pascalParser(tokens);

    auto program = parser->program();

    visitProgram(program);
}

void Visitor::visitProgram(pascalParser::ProgramContext *context)
{

    if(context->INTERFACE()){
        auto functionType = llvm::FunctionType::get(builder.getInt32Ty(), {}, false);
        auto programName = visitProgramHeading(context->programHeading());
        auto function = llvm::Function::Create(functionType, llvm::GlobalValue::LinkageTypes::ExternalLinkage, "main", module.get());
        visitBlock(context->block(), function, true);
    }
    else{
        auto functionType = llvm::FunctionType::get(builder.getInt32Ty(), {}, false);
        //auto functionType = llvm::FunctionType::get(builder.getVoidTy(), {}, false);
        auto programName = visitProgramHeading(context->programHeading());
        auto function = llvm::Function::Create(functionType, llvm::GlobalValue::LinkageTypes::ExternalLinkage, "main", module.get());

        scopes.push_back(Scope());
        scopes.back().setVariable(programName, function);
        visitBlock(context->block(), function, true);
        llvm::Value* returnValue = builder.getInt32(0);
        builder.CreateRet(returnValue);
        //builder.CreateRetVoid();
    }
}

std::string Visitor::visitProgramHeading(pascalParser::ProgramHeadingContext *context)
{
    //llvm::outs() << "Hello World! (version "  << ")\n";
    if(context->PROGRAM()){
        return visitIdentifier(context->identifier());
    }
    else if(context->UNIT()){
        return visitIdentifier(context->identifier());
    }
}


std::string Visitor::visitIdentifier(pascalParser::IdentifierContext *context)
{
    //llvm::outs() << "Hello World! (version "  << ")\n";
    return context->IDENT()->getText();
}


void Visitor::visitBlock(pascalParser::BlockContext *context, llvm::Function *function, bool isGlobal)
{
    int i=0;
    auto block = llvm::BasicBlock::Create(*llvm_context, "entry", function);


    if(context->IMPLEMENTATION(0)){
        for (const auto &constantDefinitionPartContext : context->constantDefinitionPart())
        {
            visitConstantDefinitionPart(constantDefinitionPartContext);
        }
        for (i=0;i<context->variableDeclarationPart().size();i++)
        {
            visitVariableDeclarationPart(context->variableDeclarationPart(i), isGlobal);
        }
        for (i=0;i<context->typeDefinitionPart().size();i++)
        {
            visitTypeDefinitionPart(context->typeDefinitionPart(i));
        }
        for (i=0;i<context->procedureAndFunctionDeclarationPart().size();i++)
        {
            visitProcedureAndFunctionDeclarationPart(context->procedureAndFunctionDeclarationPart(i));
            
        }
    }
    else{
        int i = 0;
        if (builder.GetInsertBlock() && builder.GetInsertBlock()->getName().str() == "Para_Ret")
        {
            builder.CreateBr(block);
        }
        builder.SetInsertPoint(block);
        //for(i=0;i<context->usesUnitsPart().size();i++){
            //visitUsesUnitsPart(context->usesUnitsPart(i));
        //} 
        for (const auto &constantDefinitionPartContext : context->constantDefinitionPart())
        {
            visitConstantDefinitionPart(constantDefinitionPartContext);
        }
        for (const auto &variableDeclarePartContext : context->variableDeclarationPart())
        {
            visitVariableDeclarationPart(variableDeclarePartContext, isGlobal);
        }
        for (const auto &typeDefinitionPartContext : context->typeDefinitionPart())
        {
            visitTypeDefinitionPart(typeDefinitionPartContext);
        }
        for (const auto &procedureAndFunctionDeclarationPart : context->procedureAndFunctionDeclarationPart())
        {
            visitProcedureAndFunctionDeclarationPart(context->procedureAndFunctionDeclarationPart(i++));
             
            
        }
        builder.SetInsertPoint(block);
        visitCompoundStatement(context->compoundStatement(), function);
    }
    
}

void Visitor::visitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *context)
{
    
    // 对于每个常量定义分别分析
    for (const auto &constDefinitionContext : context->constantDefinition())
    {
        visitConstantDefinition(constDefinitionContext);
    }
}

void Visitor::visitConstantDefinition(pascalParser::ConstantDefinitionContext *context)
{
    // identifier = const
    auto id = visitIdentifier(context->identifier());
    visitConstant(context->constant(), id);
    
}

void Visitor::visitConstant(pascalParser::ConstantContext *context, auto id)
{
    // 常量不同类型，每一种类型的操作都类似
    if ((context->identifier())&&!(context->sign()))
    {
        auto s = visitIdentifier(context->identifier());
        if (getVariable(s))
        {
            // 查变量表得到其地址，然后从地址中加载值，转化为llvm::Constant表示，作为返回值
            auto addr = getVariable(s);
            auto value = builder.CreateLoad(addr);
            if (llvm::ConstantInt *CI = llvm::dyn_cast<llvm::ConstantInt>(value))
            {
                auto val = CI;
                module->getOrInsertGlobal(id, val->getType());           // 创建常量
                auto global = module->getNamedGlobal(id);
                global->setInitializer(val); // 初始化常量
                global->setConstant(true);     // 设定为常量，不可更改
            }
            else
            {
                //throw DebugException("Invalid type of const identifier");
            }
        }
        else if (module->getNamedGlobal(s))
        {
            auto global1 = module->getNamedGlobal(s);
            llvm::ConstantInt *va = (llvm::ConstantInt *)(global1->getInitializer());
            auto val = va;
            module->getOrInsertGlobal(id, val->getType());           // 创建常量
            auto global = module->getNamedGlobal(id);
            global->setInitializer(val); // 初始化常量
            global->setConstant(true);     // 设定为常量，不可更改
        }
        else
        {
            // throw VariableNotFoundException(s);
        }
    }
    
    else if (context->string())
    {
        //llvm::outs() << "Hello World! (version "  << ")\n";
        auto v = visitString(context->string());
        auto value = llvm::ConstantDataArray::getString(*llvm_context, v);
        module->getOrInsertGlobal(id, value->getType());
        auto global = module->getNamedGlobal(id);
        global->setInitializer(value);
        global->setConstant(true);
    }
    
    else if ((context->unsignedNumber())&&!(context->sign()))
    {
        
        auto value = visitUnsignedNumber(context->unsignedNumber());
        module->getOrInsertGlobal(id, value->getType());
        auto global = module->getNamedGlobal(id);
        global->setInitializer(value);
        global->setConstant(true);

    }
/*
    else if (auto ConstunumberCtx = dynamic_cast<pascalParser::UnsignedNumberContext *>(context->unsignedNumber()))
    {
        
        auto value = visitUnsignedNumber(ConstunumberCtx);
        module->getOrInsertGlobal(id, value->getType());
        auto global = module->getNamedGlobal(id);
        global->setInitializer(value);
        global->setConstant(true);
    }
*/
    else if (context->sign())
    {
        int flag = visitSign(context->sign());
        if(context->unsignedNumber()){
            if (context->unsignedNumber()->unsignedInteger())
            {
                auto v = visitUnsignedInteger(context->unsignedNumber()->unsignedInteger()) * flag;
                auto value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), v);
                module->getOrInsertGlobal(id, value->getType());
                auto global = module->getNamedGlobal(id);
                global->setInitializer(value);
                global->setConstant(true);
            }
            else if (context->unsignedNumber()->unsignedReal())
            {
                auto v = visitUnsignedReal(context->unsignedNumber()->unsignedReal()) * flag;
                auto value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), v);
                module->getOrInsertGlobal(id, value->getType());
                auto global = module->getNamedGlobal(id);
                global->setInitializer(value);
                global->setConstant(true);
            }
            else
            {
                //throw DebugException("Invalid const number type");
            }
        }
        if(context->identifier()){
            auto s = visitIdentifier(context->identifier());
            if (getVariable(s))
            {
                auto addr = getVariable(s);
                auto value1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
                auto value2 = builder.CreateLoad(addr);
                auto dest = builder.CreateMul(value1, value2);
                auto value = (llvm::Constant *)dest;
                module->getOrInsertGlobal(id, value->getType());
                auto global = module->getNamedGlobal(id);
                global->setInitializer(value);
                global->setConstant(true);
            }
            else if (module->getNamedGlobal(s))
            {
                auto global1 = module->getNamedGlobal(s);
                llvm::ConstantInt *value2 = (llvm::ConstantInt *)(global1->getInitializer());
                auto value1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
                auto dest = builder.CreateMul(value1, value2);
                auto value = (llvm::Constant *)dest;
                module->getOrInsertGlobal(id, value->getType());
                auto global = module->getNamedGlobal(id);
                global->setInitializer(value);
                global->setConstant(true);
            }
            else
            {
                //throw VariableNotFoundException(s);
            }
        }
    }
    
   
    else if (auto ConstsChrCtx = dynamic_cast<pascalParser::ConstantChrContext *>(context))
    {
        
    }
    else
    {
        //throw DebugException("Undefined const type");
    }
}


int Visitor::visitSign(pascalParser::SignContext *context)
{
    int flag = 1;
    if(context->PLUS()){
        flag = 1;
        return flag;
    }
    else if(context->MINUS()){
        flag = -1;
        return flag;
    }
     else
    {
        //throw DebugException("Invalid sign");
    }
}

std::string Visitor::visitString(pascalParser::StringContext *context)
{
    return context->STRING_LITERAL()->getText();
}

llvm::Constant *Visitor::visitUnsignedNumber(pascalParser::UnsignedNumberContext *context) {
    //llvm::outs() << "Hello World! (version "  << ")\n";
    if(context->unsignedInteger()) {
        auto v = visitUnsignedInteger(context->unsignedInteger());
        auto value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), v);
        return value;
    } else if(context->unsignedReal()) {
        auto v = visitUnsignedReal(context->unsignedReal());
        auto value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), v);
        return value;
    } else {
        //throw DebugException("Invalid const number type");
    }
}

int Visitor::visitUnsignedInteger(pascalParser::UnsignedIntegerContext *context) {
    if(context -> NUM_INT()) {
        auto s = context -> NUM_INT() -> getText();
        return atoi(s.c_str());
    }
}

float Visitor::visitUnsignedReal(pascalParser::UnsignedRealContext *context) {
    if(context -> NUM_REAL()) {
        auto s = context -> NUM_REAL() -> getText();
        return atof(s.c_str());
    }
}


void Visitor::visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *context, bool isGlobal)
{
    for (const auto &vDeclarationContext : context->variableDeclaration())
    {
        //std::cout << isGlobal;
        visitVariableDeclaration(vDeclarationContext, isGlobal);
    }
}

llvm::Type *Visitor::visitVariableDeclaration(pascalParser::VariableDeclarationContext *context, bool isGlobal)
{
    auto idList = visitIdentifierList(context->identifierList()); // 取得变量的标识符
    // 判断变量是简单类型，还是复杂类型
    if (context->type_()->simpleType())
    {
        // 得到变量类型
        auto type = visitSimpleType(context->type_()->simpleType());
        // 对于这一类型的变量，为其分配空间，并在符号表中插入其对应的标识符和地址
        for (const auto &id : idList)
        {
            if (isGlobal)
            {
                module->getOrInsertGlobal(id, type);
                auto addr = module->getNamedGlobal(id);
                addr->setInitializer(llvm::UndefValue::get(type));
                scopes.back().setVariable(id, addr);
            }
            else
            {
                //std::cout << isGlobal;
                auto addr = builder.CreateAlloca(type, nullptr);
                builder.CreateStore(llvm::UndefValue::get(type), addr);
                scopes.back().setVariable(id, addr);
            }
        }
        return type;
    }
    else if (context->type_()->structuredType())
    {
        auto type = visitStructuredType(context->type_()->structuredType(), idList);
        for (const auto &id : idList)
        {
            if (isGlobal)
            {
                //std::cout << isGlobal;
                module->getOrInsertGlobal(id, type);
                auto addr = module->getNamedGlobal(id);
                addr->setInitializer(llvm::UndefValue::get(type));
                // 对于数组，声明时要在arrayRanges表中写入其id和其下标范围，方便之后的使用
                if (auto arrayType = llvm::dyn_cast_or_null<llvm::ArrayType>(type))
                    arrayRanges[id] = arrayRangeTemp;
            }
            else
            {
                auto addr = builder.CreateAlloca(type, nullptr);
                scopes.back().setVariable(id, addr);
                // 对于数组，声明时要在arrayRanges表中写入其id和其下标范围，方便之后的使用
                if (auto arrayType = llvm::dyn_cast_or_null<llvm::ArrayType>(type))
                    arrayRanges[id] = arrayRangeTemp;
            }
        }
        return type;
    }
    else
    {
        //throw DebugException("Invalid Variable type");
    }
}

llvm::Type *Visitor::visitStructuredType(pascalParser::StructuredTypeContext *context, std::vector<std::string> idList)
{
    if(!(context->PACKED())){
        return visitUnpackedStructuredType(context->unpackedStructuredType(), idList);
    }
}

llvm::Type *Visitor::visitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *context, std::vector<std::string> idList){
    if(context->arrayType()){
        return visitArrayType(context->arrayType(), idList);
    }
    else if(context->recordType()){
        //return visitRecordType(context->recordType(), idList);
    }
}

//typedefinition
void Visitor::visitTypeDefinitionPart(pascalParser::TypeDefinitionPartContext *context)
{
    for (const auto &typeDefinitionContext : context->typeDefinition())
    {
        visitTypeDefinition(typeDefinitionContext);
    }
    //llvm::outs() << "Hello World! (version " << ")\n";
}

void Visitor::visitTypeDefinition(pascalParser::TypeDefinitionContext *context)
{ 

    auto identifier = visitIdentifier(context->identifier());

    if (auto typeContext = context->type_())
    {
        //llvm::outs() << "Hello World! (version " << ")\n";
        auto type = visitSimpleType(typeContext->simpleType());
        llvm::StructType *testStruct = llvm::StructType::create(*llvm_context, identifier);
        testStruct->setBody(type);
        auto addr = builder.CreateAlloca(testStruct, nullptr);
        builder.CreateStore(llvm::UndefValue::get(testStruct), addr);
        scopes.back().setVariable(identifier, addr);
    }
    else if (auto functionTypeContext = context->functionType())
    {
        // visitFunctionType(functionTypeContext);
    }
    else if (auto procedureTypeContext = context->procedureType())
    {
        // visitProcedureType(procedureTypeContext);
    }
    else
    {
       // throw DebugException("Undefined type");
    }
}

llvm::Type *Visitor::visitType_(pascalParser::Type_Context *context, std::vector<std::string> idList)
{
    if(auto simpleType = context->simpleType()){
        return visitSimpleType(simpleType);
    }
    else if(auto structuredType = context->structuredType()){
        return visitStructuredType(structuredType, idList);
    }
    else if(auto pointerType = context->pointerType()){

    }
}
llvm::Type *Visitor::visitSimpleType(pascalParser::SimpleTypeContext *context)
{
    if(auto typeIdentifier = context->typeIdentifier()){
        return visitTypeIdentifier(typeIdentifier, false);
    }
}
llvm::Type *Visitor::visitTypeIdentifier(pascalParser::TypeIdentifierContext *context, bool isVar)
{
    if(context->identifier()){

    }
    
    else{
        if (context->CHAR())
        {
            //llvm::outs() << "Hello World! (version " << ")\n";
            if (isVar)
                return builder.getInt8PtrTy();
            else{
                //llvm::outs() << "Hello World! (version " << ")\n";
                return  builder.getInt8Ty();
            }
        }
        else if (context->INTEGER())
        {
            if (isVar){
                return  llvm::Type::getInt32PtrTy(*llvm_context);
            }
                
            else{
                return  builder.getInt32Ty();
            }
                
        }
        else if (context->BOOLEAN())
        {
            if (isVar)
                return  llvm::Type::getInt1PtrTy(*llvm_context);
            else
                return  builder.getInt1Ty();
        }
        else if (context->REAL())
        {
            //llvm::outs() << "Hello World! (version " << ")\n";
            if (isVar)
                return llvm::Type::getFloatPtrTy(*llvm_context);
            else
                return  builder.getFloatTy();
        }
        else if (context->STRING())
        {
            if (isVar)
                return llvm::Type::getInt8PtrTy(*llvm_context);
            else
                return builder.getInt8PtrTy();
        }
    }
}
std::vector<std::string> Visitor::visitIdentifierList(pascalParser::IdentifierListContext *context)
{
    std::vector<std::string> idents;
    for (const auto &identfierContext : context->identifier())
    {
        idents.push_back(visitIdentifier(identfierContext));
    }
    return idents;
}

//array
llvm::Type *Visitor::visitArrayType(pascalParser::ArrayTypeContext *context, std::vector<std::string> idList) {
    auto ranges = visitTypeList(context->typeList(), idList);
    int eleNum = 1;
    for (auto iter = ranges.begin(); iter != ranges.end(); iter++)
    {
        auto v1 = *iter;
        auto v2 = *(++iter);
        std::cout << v1 << " and " << v2 << std::endl;
        eleNum *= (v2 - v1 + 1);
        // eleNum *= (v2 + v1 + 1);
    }
    if(context -> LBRACK() || context -> LBRACK2()) {

        // 得到数组的类型，并作为返回值
        auto type = visitComponentType(context->componentType(), idList);
        return llvm::ArrayType::get(type, eleNum);
    }
    else
    {
        //throw DebugException("Invalid array type");
    }
}
llvm::Type *Visitor::visitComponentType(pascalParser::ComponentTypeContext *context, std::vector<std::string> idList) {
    return visitType_(context->type_(), idList);
}
std::vector<int> Visitor::visitTypeList(pascalParser::TypeListContext *context, std::vector<std::string> idList) {
    std::vector<int> ranges;
    this->arrayRangeTemp.clear();
    for (const auto &typeListContext : context->indexType())
    {
        auto range = visitIndexType(typeListContext); // 得到数组每一维的范围
        for (int a : range)
        {
            ranges.push_back(a);
            this->arrayRangeTemp.push_back(a);
        }
    }
    return ranges;
}
std::vector<int> Visitor::visitIndexType(pascalParser::IndexTypeContext *context) {
    return visitSubrangeType(context->simpleType()->subrangeType());
}
std::vector<int> Visitor::visitSubrangeType(pascalParser::SubrangeTypeContext *context) {
    auto vec = context->constant();
    if (vec.size() != 2)
    {
        //throw DebugException("Invalid number of elements in period of array");
    }
    auto constContext = vec[0];
    llvm::Value *value1, *value2;
    // 将LLVM::const转换为int，作为返回值
    // 根据常量的不同类型，进入不同的分支进行分析
    int constIntValue1, constIntValue2; // 将value转换为constInt，再转换为int
    if (auto constIdentifierContext = constContext->identifier())
    {
        llvm::Constant *value;
        auto s = visitIdentifier(constIdentifierContext);
        // 判断是全局变量还是局部变量
        if (getVariable(s))
        {
            // 查变量表得到其地址，然后从地址中加载值，转化为llvm::Constant表示，作为返回值
            auto addr = getVariable(s);
            auto val = builder.CreateLoad(addr);
            if (llvm::ConstantInt *CI = llvm::dyn_cast<llvm::ConstantInt>(val))
            {
                value = CI;
            }
            else
            {
                //throw DebugException("Invalid type of const identifier");
            }
        }
        else if (module->getNamedGlobal(s))
        {
            auto global = module->getNamedGlobal(s);
            value = (llvm::ConstantInt *)(global->getInitializer());
            
        }
        else
        {
            //throw VariableNotFoundException(s);
        }

        if (!value->getType()->isIntegerTy())
        {
            //throw DebugException("Invalid type(not integer)");
        }
        else
        {
            value1 = value;
        }
    }
    else if (auto ConstunumberCtx = constContext->unsignedNumber())
    {
        value1 = visitUnsignedNumber(ConstunumberCtx);
    }
    else if (auto ConstnumberCtx = constContext->sign())
    {
        int flag = visitSign(ConstnumberCtx);
        auto numberCtx = constContext->unsignedNumber();
        if(numberCtx){
            if (numberCtx->unsignedInteger())
            {
                auto v = visitUnsignedInteger(numberCtx->unsignedInteger()) * flag;
                auto val = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), v);
                
                value1 = val;
            }
            else if (numberCtx->unsignedReal())
            {
                auto v = visitUnsignedReal(numberCtx->unsignedReal()) * flag;
                auto val = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), v);

                value1 = val;
            }
            else
            {
                //throw DebugException("Invalid const number type");
            }
        }
        else if(constContext->identifier()){
            auto s = visitIdentifier(constContext->identifier());
            if (getVariable(s))
            {
                auto addr = getVariable(s);
                auto val1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
                auto val2 = builder.CreateLoad(addr);
                auto dest = builder.CreateMul(val1, val2);
                auto value = (llvm::Constant *)dest;

                value1 = value;
            }
            else if (module->getNamedGlobal(s))
            {
                auto global1 = module->getNamedGlobal(s);
                llvm::ConstantInt *val2 = (llvm::ConstantInt *)(global1->getInitializer());
                auto val1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
                auto dest = builder.CreateMul(val1, val2);
                auto value = (llvm::Constant *)dest;

                value1 = value;
            }
            else
            {
                //throw VariableNotFoundException(s);
            }
        }
    }
    

    constContext = vec[1]; // 分别得到两个下标的value表示
    if (auto constIdentifierContext = constContext->identifier())
    {
        llvm::Constant * value;
        auto s = visitIdentifier(constIdentifierContext);
        // 判断是全局变量还是局部变量
        if (getVariable(s))
        {
            // 查变量表得到其地址，然后从地址中加载值，转化为llvm::Constant表示，作为返回值
            auto addr = getVariable(s);
            auto val = builder.CreateLoad(addr);
            if (llvm::ConstantInt *CI = llvm::dyn_cast<llvm::ConstantInt>(val))
            {
                value = CI;
            }
            else
            {
                //throw DebugException("Invalid type of const identifier");
            }
        }
        else if (module->getNamedGlobal(s))
        {
            auto global = module->getNamedGlobal(s);
            value = (llvm::ConstantInt *)(global->getInitializer());
            
        }
        else
        {
            //throw VariableNotFoundException(s);
        }

        if (!value->getType()->isIntegerTy())
        {
            //throw DebugException("Invalid type(not integer)");
        }
        else
        {
            value2 = value;
        }
    }
    else if (auto ConstunumberCtx = constContext->unsignedNumber())
    {
        value2 = visitUnsignedNumber(ConstunumberCtx);
    }
    else if (auto ConstnumberCtx = constContext->sign())
    {
        int flag = visitSign(ConstnumberCtx);
        auto numberCtx = constContext->unsignedNumber();
        if(numberCtx){
            if (numberCtx->unsignedInteger())
            {
                auto v = visitUnsignedInteger(numberCtx->unsignedInteger()) * flag;
                auto val = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), v);
                
                value2 = val;
            }
            else if (numberCtx->unsignedReal())
            {
                auto v = visitUnsignedReal(numberCtx->unsignedReal()) * flag;
                auto val = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), v);

                value2 = val;
            }
            else
            {
                //throw DebugException("Invalid const number type");
            }
        }
        else if(constContext->identifier()){
            auto s = visitIdentifier(constContext->identifier());
            if (getVariable(s))
            {
                auto addr = getVariable(s);
                auto val1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
                auto val2 = builder.CreateLoad(addr);
                auto dest = builder.CreateMul(val1, val2);
                auto value = (llvm::Constant *)dest;

                value2 = value;
            }
            else if (module->getNamedGlobal(s))
            {
                auto global1 = module->getNamedGlobal(s);
                llvm::ConstantInt *val2 = (llvm::ConstantInt *)(global1->getInitializer());
                auto val1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
                auto dest = builder.CreateMul(val1, val2);
                auto value = (llvm::Constant *)dest;

                value2 = value;
            }
            else
            {
                //throw VariableNotFoundException(s);
            }
        }
    }
   
    
    if (llvm::ConstantInt *CI = llvm::dyn_cast<llvm::ConstantInt>(value1))
    {
        constIntValue1 = CI->getSExtValue();
    }
    else
    {
        //throw DebugException("Invalid type of elements in period of array");
    }
    if (llvm::ConstantInt *CI = llvm::dyn_cast<llvm::ConstantInt>(value2))
    {
        constIntValue2 = CI->getSExtValue();
    }
    else
    {
        //throw DebugException("Invalid type of elements in period of array");
    }
    std::vector<int> range;
    range.push_back(constIntValue1);
    range.push_back(constIntValue2);
    return range;
}

//procedure
void Visitor::visitProcedureAndFunctionDeclarationPart(pascalParser::ProcedureAndFunctionDeclarationPartContext *context)
{
    visitProcedureOrFunctionDeclaration(context->procedureOrFunctionDeclaration());
}
void Visitor::visitProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext *context){
    // 判断走是哪一个声明
    if (auto procedureDeclarationContext = context->procedureDeclaration()){
        visitProcedureDeclaration(procedureDeclarationContext);
    }
    else if (auto functionDeclarationContext = context->functionDeclaration())
    {
        visitFunctionDeclaration(functionDeclarationContext);
    }
    else{
        //throw DebugException("Undefined parts outside functions and procedures");
    }
}
void Visitor::visitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *context)
{
    auto identifier = visitIdentifier(context->identifier());

    llvm::SmallVector<llvm::Type *> ParaTypes;
    if (context->formalParameterList())
    {
        visitFormalParameterList(context->formalParameterList(), ParaTypes);
    }
    auto functionType = llvm::FunctionType::get(builder.getVoidTy(), ParaTypes, false);
    auto function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, identifier.c_str(), module.get());
    //auto function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, llvm::Twine(identifier), module.get());
    //llvm::outs() << identifier << "\n";
    //llvm::outs() << "Hello World! (version " << ")\n";
    //llvm::outs() << "Hello World! (version " << ")\n";
    // 创建一个基本块用于为参数创建CreateAlloca，CreateLoad语句
    auto block = llvm::BasicBlock::Create(*llvm_context, "Para_Ret", function);
    builder.SetInsertPoint(block);
    
    scopes.back().setVariable(identifier, function);

    int n = 0;
    
    for (auto argsItr = function->arg_begin(); argsItr != function->arg_end(); argsItr++)
    {
        //llvm::Value *
        auto arg = argsItr;
        // 因为变量表中存的都是value的地址，所以也必须给参数申请地址才能将其存入变量表中
        auto addrArg = builder.CreateAlloca(arg->getType(), nullptr);
        arg->setName(FormalParaIdList[n].c_str());

        builder.CreateStore(arg, addrArg);
        scopes.back().setVariable(FormalParaIdList[n++], addrArg);
    }
    
    scopes.push_back(Scope());
    visitBlock(context->block(), function);
    scopes.pop_back();
    
    // 因为Procedure没有返回值，所以创建空返回语句。
    builder.CreateRetVoid();
    
    
}


void Visitor::visitFunctionDeclaration(pascalParser::FunctionDeclarationContext *context)
{
    // 获取identifier，即函数名
    auto identifier = visitIdentifier(context->identifier());
    // 获取函数返回值类型
    auto simpleType = visitTypeIdentifier(context->resultType()->typeIdentifier(), false);

    // 获取函数参数的类型，默认为空，即没有参数传出。
    llvm::SmallVector<llvm::Type *> ParaTypes;
    if (context->formalParameterList()) // 当函数有参数的时候才获取。
    {
        // 获取形参的信息：参数类型和参数的identifier
        visitFormalParameterList(context->formalParameterList(), ParaTypes);
    }
    // 根据函数的返回值和参数类型构造functionType
    auto functionType = llvm::FunctionType::get(simpleType, ParaTypes, false);
    // 根据functionType构造function
    //auto llvmStr = llvm::Twine(identifier);
    auto s = identifier;
    auto function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, identifier.c_str(), module.get());
    //llvm::outs() << identifier << "\n";
    //llvm::outs() << "Hello World! (version " << ")\n";

    // 创建一个基本块用于为返回值和参数创建CreateAlloca，CreateLoad语句
    auto block = llvm::BasicBlock::Create(*llvm_context, "Para_Ret", function);
    builder.SetInsertPoint(block);

    // 为返回值申请内存
    auto addr = builder.CreateAlloca(simpleType, nullptr);
    // 分别将返回值的地址，和函数的地址存入变量表中
    scopes.back().setVariable(identifier, function);
    scopes.back().setVariable(identifier + "ret", addr);
    // 为形参申请地址并将其存入变量表
    int n = 0;
    for (auto argsItr = function->arg_begin(); argsItr != function->arg_end(); argsItr++)
    {
        llvm::Value *arg = argsItr;
        // 因为变量表中存的都是value的地址，所以也必须给参数申请地址才能将其存入变量表中。
        auto addrArg = builder.CreateAlloca(arg->getType(), nullptr);
        arg->setName(FormalParaIdList[n].c_str());
        builder.CreateStore(arg, addrArg);
        scopes.back().setVariable(FormalParaIdList[n++], addrArg);
    }
    // 创建函数的变量作用域并通过visitBlock构建函数体
    scopes.push_back(Scope());
    visitBlock(context->block(), function);
    scopes.pop_back();

    // 最后去除返回值创建返回语句即可
    auto ret = builder.CreateLoad(addr);
    builder.CreateRet(ret);
}

void Visitor::visitFormalParameterList(pascalParser::FormalParameterListContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes)
{
    // 一个全局变量用来存储形参的identifier，所以每次使用前都需要先清空。
    FormalParaIdList.clear();

    for (const auto &formalParameterSectionContext : context->formalParameterSection())
    {
        visitFormalParameterSection(formalParameterSectionContext, ParaTypes);
        // 传值传参调用visitFormalParaSecGroup，引用传参调用visitFormalParaSecVarGroup
    }
}
void Visitor::visitFormalParameterSection(pascalParser::FormalParameterSectionContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes)
{
    if (auto parameterGroupContext = context->parameterGroup())
    {
        //llvm::outs() << "Hello World!222 (version "  << ")\n";
        visitParameterGroup(parameterGroupContext, ParaTypes, false);
    }
    else if (context->VAR())
    {
        //llvm::outs() << "Hello World!111 (version "  << ")\n";
        visitParameterGroup(context->parameterGroup(), ParaTypes, true);
    }
    else{
       // throw DebugException("Undefined parts of ParameterList");
    }
}
void Visitor::visitParameterGroup(pascalParser::ParameterGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar)
{
    // 此处将引用传参视为指针类型的参数，通过isVar表明是否为引用传参，如果是引用传参就构建对应的指针类型
    // 获取参数类型
    auto simpleType = visitTypeIdentifier(context->typeIdentifier(), isVar);
    // 获取参数identifier
    auto IdList = visitIdentifierList(context->identifierList());
    for (int i = 0; i < IdList.size(); i++)
    {
        ParaTypes.push_back(simpleType);       // 形参类型
        FormalParaIdList.push_back(IdList[i]); // 形参identifier列表
    }
}



//begin...end
void Visitor::visitCompoundStatement(pascalParser::CompoundStatementContext *context, llvm::Function *function)
{
    visitStatements(context->statements(), function);
    //llvm::outs() << "Hello World! (version " << ")\n";

}

void Visitor::visitStatement(pascalParser::StatementContext *context, llvm::Function *function)
{
    if(context->COLON()){

    }
    else{
        visitUnlabelledStatement(context->unlabelledStatement(), function);
    }
}

void Visitor::visitUnlabelledStatement(pascalParser::UnlabelledStatementContext *context, llvm::Function *function) {
    if(auto simpleStatementContext = context -> simpleStatement()) {
        visitSimpleStatement(simpleStatementContext, function);
    }
    else if(auto structuredStatementContext = context -> structuredStatement()) {
        visitStructuredStatement(structuredStatementContext, function);
    }
}

void Visitor::visitSimpleStatement(pascalParser::SimpleStatementContext *context, llvm::Function *function)
{
    if (auto assignmentStatementContext = context->assignmentStatement()){
        visitAssignmentStatement(assignmentStatementContext);
    }
    else if (auto procedureStatementContext = context->procedureStatement())
        visitProcedureStatement(procedureStatementContext);
    else if (auto emptyStatementContext = context->emptyStatement_())
        visitEmptyStatement_(emptyStatementContext);
    else if (auto gotoStatementContext = context->gotoStatement())
        visitGotoStatement(gotoStatementContext);
    else{
        //throw DebugException(NOW_FUNC_NAME + "Undefined parts of SimpleState");
    }
}
void Visitor::visitGotoStatement(pascalParser::GotoStatementContext *context)
{

}

void Visitor::visitProcedureStatement(pascalParser::ProcedureStatementContext *context)
{
    auto identifier = visitIdentifier(context->identifier());
    if (auto procedure = llvm::dyn_cast_or_null<llvm::Function>(getVariable(identifier)))
    {
        auto paraList = visitParameterList(context->parameterList());
        llvm::ArrayRef<llvm::Value *> argsRef(paraList);
        builder.CreateCall(procedure, argsRef);
    }
    else if (StandardProcedure::hasProcedure(identifier))
    {
        auto stdProcedure = StandardProcedure::prototypeMap[identifier](module.get());
        auto paraList = visitParameterList(context->parameterList(), true);

        /*
        llvm::raw_os_ostream out(std::cout);
        for (auto para : paraList) {
            para->print(out);
        }
        */

        StandardProcedure::argsConstructorMap[identifier](&builder, paraList);
        if ("readln" == identifier)
        {
            readlnArgFlag = true;
            auto paraList2 = visitParameterList(context->parameterList(), true);
            readlnArgFlag = false;
            paraList2.insert(paraList2.begin(), paraList.front());
            paraList = paraList2;
        }
        llvm::ArrayRef<llvm::Value *> argsRef(paraList);
        builder.CreateCall(stdProcedure, argsRef);
    }
    else{
        //throw ProcedureNotFoundException(identifier);
    }
}

void Visitor::visitEmptyStatement_(pascalParser::EmptyStatement_Context *context)
{

}

void Visitor::visitEmpty_(pascalParser::Empty_Context *context)
{
}

std::vector<llvm::Value *> Visitor::visitParameterList(pascalParser::ParameterListContext *context, bool changeFP)
{
    std::vector<llvm::Value *> params;
    if (context)
    {
        for (auto actualPara : context->actualParameter())
        {
            auto param = visitActualParameter(actualPara);
            if (param->getType()->isFloatingPointTy() && changeFP) // 在输入输出浮点数时，必须转换为double类型
                param = builder.CreateFPExt(param, llvm::Type::getDoubleTy(*llvm_context));
            params.push_back(param);
        }
    }
    return params;
}
void Visitor::visitAssignmentStatement(pascalParser::AssignmentStatementContext *context) {
    auto value = visitExpression(context -> expression());
    auto varAddr = visitVariable(context -> variable());
    builder.CreateStore(value, varAddr);
}
llvm::Value *Visitor::visitVariable(pascalParser::VariableContext *context){
    llvm::Value *addr = nullptr;
    std::string varName = visitIdentifier(context -> identifier(0));
    addr = getVariable(varName);

    //如果scopes找不到，去global找
    if(!addr) {
        addr = module -> getGlobalVariable(varName);
    }
    //global找不到，抛出异常
    if(!addr) {
        //throw VariableNotFoundException(varName);// TODO
    }

    //存在LBRACK
    if (context -> LBRACK(0)){

        auto ranges = arrayRanges[varName];
        //获取数组索引
        std::vector<llvm::Value *> indices;
        for (auto indexExpression : context -> expression()) {
            arrayIndexFlag = true;
            auto index = visitExpression(indexExpression);
            arrayIndexFlag = false;
            indices.push_back(index);
        }

        //计算偏移量
        llvm::Value *offset;
        llvm::Value *offsetUnit;
        auto con_0 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), 0);
        auto con_1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), 1);
        offset = con_0;
        offsetUnit = con_1;

        // offset += ((indexes[j]- ranges[2*j]) * offsetUnit);
        // offsetUnit *= (ranges[2*j + 1] - ranges[2*j] + 1);

        for(int j = indices.size() - 1; j >= 0; j--) {
            //取当前数组索引下限
            auto ranges_2j = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), ranges[2 * j]);
            auto temp_sub = builder.CreateSub(indices[j], ranges_2j);
            auto temp_mul = builder.CreateMul(temp_sub, offsetUnit);
            offset = builder.CreateAdd(offset, temp_mul);

            auto ranges_2j_1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), ranges[2 * j + 1]);
            auto range_sub = builder.CreateSub(ranges_2j_1, ranges_2j);
            auto temp_add = builder.CreateAdd(range_sub, con_1);
            offsetUnit = builder.CreateMul(offsetUnit, temp_add);
            
        }

        // readlnArgFlag = true;
        addr = builder.CreateGEP(addr, {con_0, offset});
    }

    //function
    if(auto func = llvm::dyn_cast_or_null<llvm::Function>(addr)) {
        addr = getVariable(varName + "ret");
    }

    //pointer Todo
    //if(context -> POINTER(0)) {
      //  readlnArgFlag = true;
      //  addr = getVariable(varName);
    //}
    return addr;
}

llvm::Value *Visitor::visitExpression(pascalParser::ExpressionContext *context) {
    // 只有simpleExpression
    if (!context -> relationaloperator()) {
        return visitSimpleExpression(context -> simpleExpression());
    }

    auto L = visitSimpleExpression(context -> simpleExpression());
    auto R = visitExpression(context -> expression());

    if (auto relationalOperatorContent = context->relationaloperator()) {
        return visitRelationaloperator(relationalOperatorContent, L, R);
    }
    else{
        //throw DebugException(NOW_FUNC_NAME + "Undefined Operator!"); //Todo
    }
}

llvm::Value *Visitor::visitRelationaloperator(pascalParser::RelationaloperatorContext *context, llvm::Value *L, llvm::Value *R) {
    if(context -> EQUAL()) {
        //float vs float
        if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isFloatingPointTy()) {
            return builder.CreateFCmpUEQ(L, R);
        }
        //float vs int
        else if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()) {
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpUEQ(L, R_FP);
        }
        //int vs float
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isFloatingPointTy()) {
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpUEQ(L_FP, R);
        }
        //int vs int
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()) {
            return builder.CreateICmpEQ(L, R);
        }
        else {
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Comparing Type for Operator '='");// Todo
        }
    }

    else if(context -> NOT_EQUAL()) {
        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isFloatingPointTy())
            return builder.CreateFCmpUNE(L, R);
        else if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isIntegerTy()) {
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpUNE(L_FP, R);
        }
        else if (L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()) {
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpUNE(L, R_FP);
        }
        else if (L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()) {
            return builder.CreateICmpNE(L, R);
        }
        else {
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Comparing Type for Operator '<>'");// Todo
        }
    }

    else if(context -> LT()) {
        //float vs float
        if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isFloatingPointTy()) {
            return builder.CreateFCmpULT(L, R);
        }
        //float vs int
        else if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()) {
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpULT(L, R_FP);
        }
        //int vs float
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isFloatingPointTy()) {
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpULT(L_FP, R);
        }
        //int vs int
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()) {
            return builder.CreateICmpSLT(L, R);
        }
        else {
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Comparing Type for Operator '<'");//Todo
        }
    }

    else if(context -> LE()) {
        //float vs float
        if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isFloatingPointTy()) {
            return builder.CreateFCmpULE(L, R);
        }
        //float vs int
        else if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()) {
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpULE(L, R_FP);
        }
        //int vs float
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isFloatingPointTy()) {
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpULE(L_FP, R);
        }
        //int vs int
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()) {
            return builder.CreateICmpSLE(L, R);
        }
        else {
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Comparing Type for Operator '>'");//Todo
        }
    }

    else if(context -> GT()) {
        //float vs float
        if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isFloatingPointTy()) {
            return builder.CreateFCmpUGT(L, R);
        }
        //float vs int
        else if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()) {
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpUGT(L, R_FP);
        }
        //int vs float
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isFloatingPointTy()) {
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpUGT(L_FP, R);
        }
        //int vs int
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()) {
            return builder.CreateICmpSGT(L, R);
        }
        else {
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Comparing Type for Operator '>'");//Todo
        }
    }

    else if(context -> GE()) {
        //float vs float
        if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isFloatingPointTy()) {
            return builder.CreateFCmpUGE(L, R);
        }
        //float vs int
        else if(L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()) {
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpUGE(L, R_FP);
        }
        //int vs float
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isFloatingPointTy()) {
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFCmpUGE(L_FP, R);
        }
        //int vs int
        else if(L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()) {
            return builder.CreateICmpSGE(L, R);
        }
        else {
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Comparing Type for Operator '>='");//Todo
        }
    }

    else if(context -> IN()) {
        //builder.CreateBinOp(In, L, R);//Todo
    }
}
llvm::Value *Visitor::visitSimpleExpression(pascalParser::SimpleExpressionContext *context) {
    if (!context->additiveoperator()) {
        return visitTerm(context->term());
    }

    auto L = visitTerm(context -> term());
    auto R = visitSimpleExpression(context -> simpleExpression());

    if(auto addictiveOperatorContext = context->additiveoperator()) {
        return visitAdditiveoperator(addictiveOperatorContext, L, R);
    }
}
llvm::Value *Visitor::visitAdditiveoperator(pascalParser::AdditiveoperatorContext *context, llvm::Value *L, llvm::Value *R) {
    if(context -> PLUS()) {
        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isFloatingPointTy())
            return builder.CreateFAdd(L, R);


        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isIntegerTy()){
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFAdd(L_FP, R);
        }
        else if (L -> getType() -> isFloatingPointTy() && R -> getType()->isIntegerTy()){
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFAdd(L, R_FP);
        }
        else if (L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()){
            return builder.CreateAdd(L, R);
        }
        else{
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator \'+\'");//Todo
        }
    }
    else if(context -> MINUS()) {
        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isFloatingPointTy())
            return builder.CreateFSub(L, R);

        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isIntegerTy()){
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFSub(L_FP, R);
        }
        else if (L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()){
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFSub(L, R_FP);
        }
        else if (L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()){
            return builder.CreateSub(L, R);
        }
        else{
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator \'-\'");
        }
    }
    else if(context -> OR()) {
        return builder.CreateOr(L, R);
    }
    else {
        //throw DebugException(NOW_FUNC_NAME + "Undefined Operator!");//Todo
    }
}

llvm::Value *Visitor::visitTerm(pascalParser::TermContext *context) {
    if(!context -> multiplicativeoperator()) {
        return visitSignedFactor(context -> signedFactor());
    }

    auto L = visitSignedFactor(context -> signedFactor());
    auto R = visitTerm(context -> term());
    if(auto multiplicativeOperatorContext = context->multiplicativeoperator()) {
        return visitMultiplicativeoperator(multiplicativeOperatorContext, L, R);
    }
}

llvm::Value *Visitor::visitMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext *context, llvm::Value *L, llvm::Value *R) {
    if(context -> STAR()) {
        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isFloatingPointTy())
            return builder.CreateFMul(L, R);

        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isIntegerTy()){
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFMul(L_FP, R);
        }
        else if (L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()){
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFMul(L, R_FP);
        }
        else if (L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()){
            return builder.CreateMul(L, R);
        }
        else{}
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator \'*\'");
    }
    else if(context -> SLASH()) {
        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isFloatingPointTy())
            return builder.CreateFDiv(L, R);

        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isIntegerTy()){
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFDiv(L_FP, R);
        }
        else if (L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()){
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFDiv(L, R_FP);
        }
        else if (L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()){
            return builder.CreateSDiv(L, R);
        }
        else{}
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator \'/\'");
    }
    else if(context -> DIV()) {
        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isFloatingPointTy())
            return builder.CreateFDiv(L, R);

        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isIntegerTy()){
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFDiv(L_FP, R);
        }
        else if (L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()){
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFDiv(L, R_FP);
        }
        else if (L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()){
            return builder.CreateSDiv(L, R);
        }
        else{}
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator \'Div\'");
    }
    else if(context -> MOD()) {
        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isFloatingPointTy())
            return builder.CreateFRem(L, R);

        if (R -> getType() -> isFloatingPointTy() && L -> getType() -> isIntegerTy()){
            auto L_FP = builder.CreateSIToFP(L, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFRem(L_FP, R);
        }
        else if (L -> getType() -> isFloatingPointTy() && R -> getType() -> isIntegerTy()){
            auto R_FP = builder.CreateSIToFP(R, llvm::Type::getFloatTy(*llvm_context));
            return builder.CreateFRem(L, R_FP);
        }
        else if (L -> getType() -> isIntegerTy() && R -> getType() -> isIntegerTy()){
            return builder.CreateSRem(L, R);
        }
        else{}
            //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator \'MOD\'");
    }
    else if(context -> AND()) {
        return builder.CreateAnd(L, R);
    }
    else {
        //throw DebugException(NOW_FUNC_NAME + "Undefined Operator!");
    }
}
llvm::Value *Visitor::visitSignedFactor(pascalParser::SignedFactorContext *context) {
    int flag = context -> MINUS() ? -1 : 1;
    float flag_fp = context -> MINUS() ? -1 : 1;
    auto flag_v = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
    auto flag_v_fp = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), flag_fp);
    auto value = visitFactor(context -> factor(), flag, flag_fp, flag_v, flag_v_fp);
    return value;
}

llvm::Value *Visitor::visitFactor(pascalParser::FactorContext *context, int flag, float flag_fp, llvm::ConstantInt* flag_v, llvm::Constant* flag_v_fp) {
    if(auto variableContext = context->variable()) {
        llvm::Value * value;
        auto varName = visitIdentifier(variableContext->identifier(0));
        auto varAddr = visitVariable(variableContext);

        // 为readln构造参数时需要传递地址而非值
        if (readlnArgFlag == true && arrayIndexFlag == false)
        {
             value = varAddr;
        }
        else
        {
            value =  builder.CreateLoad(varAddr->getType()->getPointerElementType(), varAddr);
        }
        if(flag == -1) {
            if(value -> getType() -> isFloatingPointTy()) {
                return builder.CreateFMul(flag_v_fp, value);
            } else if (value -> getType() -> getIntegerBitWidth() == 1U){
                return builder.CreateNot(value);
            } else if (value -> getType() -> getIntegerBitWidth() == 32U){
                return builder.CreateMul(flag_v, value);
            } else{}
                //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator MINUS ");
        }
        else return value;
    }
    else if(auto expressionContext = context->expression()) {
        auto value = visitExpression(expressionContext);
        if (flag == -1)
            if (value -> getType() -> isFloatingPointTy()) {
                return builder.CreateFMul(flag_v_fp, value);
            } else if (value -> getType() -> getIntegerBitWidth() == 1U){
                return builder.CreateNot(value);
            } else if (value -> getType() -> getIntegerBitWidth() == 32U){
                return builder.CreateMul(flag_v, value);
            } else{}
                //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator MINUS ");
        else
            return value;
    }
    else if(auto functionDesignatorContext = context->functionDesignator()) {
        auto value = visitFunctionDesignator(functionDesignatorContext);
        if (flag == -1) {
            if (value->getType()->isFloatingPointTy()) {
                return builder.CreateFMul(flag_v_fp, value);
            } else if (value->getType()->getIntegerBitWidth() == 1U) {
                return builder.CreateNot(value);
            } else if (value->getType()->getIntegerBitWidth() == 32U) {
                return builder.CreateMul(flag_v, value);
            } else{}
                //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator MINUS ");
        }
        else
            return value;
    }
    else if(auto unsignedConstant = context->unsignedConstant()) {
        auto value = visitUnsignedConstant(unsignedConstant);
        if (flag == -1) {
            if (value->getType()->isFloatingPointTy()) {
                return builder.CreateFMul(flag_v_fp, value);
            } else if (value->getType()->getIntegerBitWidth() == 1U) {
                return builder.CreateNot(value);
            } else if (value->getType()->getIntegerBitWidth() == 32U) {
                return builder.CreateMul(flag_v, value);
            } else{}
                //throw DebugException(NOW_FUNC_NAME + "Unsupported Operands Type for Operator MINUS ");
        }
        else
            return value;
    }
    else if(context -> NOT()) {
        auto value = visitFactor(context -> factor(), flag, flag_fp, flag_v, flag_v_fp);
        if(flag == -1)
            return builder.CreateNot(value);
        else
            return value;
    }
    else if(auto bool_Context = context->bool_()) {
        auto value = visitBool_(bool_Context);
        if(flag == -1) {
            return builder.CreateNot(value);
        }
        else {
            return value;
        }
    }
    else if(auto set_Context = context->set_()) {//Todo

    }
    else{}
        //throw DebugException(NOW_FUNC_NAME);
}

llvm::Value *Visitor::visitFunctionDesignator(pascalParser::FunctionDesignatorContext *context) {
    auto funcName = visitIdentifier(context->identifier());
    if (auto function = llvm::dyn_cast_or_null<llvm::Function>(getVariable(funcName))) {
        auto paraList = visitParameterList(context->parameterList());
        llvm::ArrayRef<llvm::Value *> argsRef(paraList);
        auto retValue = builder.CreateCall(function, argsRef);
        return retValue;
    }
    else{}
        //throw VariableNotFoundException(funcName);
}

llvm::Value *Visitor::visitUnsignedConstant(pascalParser::UnsignedConstantContext *context) {
    if(auto unsignedNumberContext = context->unsignedNumber()) {
        return visitUnsignedNumber(context -> unsignedNumber());
    }
    else if(auto constantChrContext = context->constantChr()) {
        return visitConstantChr(context -> constantChr());
    }
    else if(auto stringContext = context->string()) {
        auto v = visitString(stringContext);
        auto v_words = v.substr(1, v.length() - 2);
        return builder.CreateGlobalStringPtr(v_words);
    }
    else if(context -> NIL()) {

    }
}


llvm::Value* Visitor::visitConstantChr(pascalParser::ConstantChrContext *context) {

}

llvm::Value *Visitor::visitBool_(pascalParser::Bool_Context *context) {
    if(context -> TRUE()) {
        return llvm::ConstantInt::get(llvm::Type::getInt1Ty(*llvm_context), true);
    } else if(context -> FALSE()) {
        return llvm::ConstantInt::get(llvm::Type::getInt1Ty(*llvm_context), false);
    } else{}
        //throw DebugException(NOW_FUNC_NAME);
}

llvm::Value *Visitor::visitSet_(pascalParser::Set_Context *context) {//Todo

}

llvm::Value *Visitor::visitActualParameter(pascalParser::ActualParameterContext *context) {
    return visitExpression(context -> expression());
}





void Visitor::visitStructuredStatement(pascalParser::StructuredStatementContext *context, llvm::Function *function) {
    if (auto compoundStatementContext = context -> compoundStatement()) {
       visitCompoundStatement(compoundStatementContext, function);
    }
    else if(auto repetitiveStatementContext = context ->repetetiveStatement()) {
        visitRepetetiveStatement(repetitiveStatementContext, function);
    }
    else if(auto conditionalStatementContext = context -> conditionalStatement()) {
       visitConditionalStatement(conditionalStatementContext, function);
    }
    else if(auto withStatementContext = context -> withStatement()) {
        visitWithStatement(withStatementContext, function);
    }
    else {
        //throw DebugException("Undefined parts of StructuredState");
    }
}

void Visitor::visitRepetetiveStatement(pascalParser::RepetetiveStatementContext *context, llvm::Function *function) {
    if(auto forStatementContext = context -> forStatement()) {
        visitForStatement(forStatementContext, function);
    }
    else if(auto whileStatementContext = context -> whileStatement()) {
        visitWhileStatement(whileStatementContext, function);
    }
    else if(auto repeatStatementContext = context -> repeatStatement()) {
        visitRepeatStatement(repeatStatementContext, function);
    }
    else{
        //throw DebugException("Invalid StructuredStateRepetetive");
    }
}

void Visitor::visitForStatement(pascalParser::ForStatementContext *context, llvm::Function *function) {
    // 初始化变量赋值
    auto id = visitIdentifier(context->identifier());
    auto v = visitForList(context->forList());
    auto con_1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), 1);
    auto isDown = false;
    if (context -> forList() -> DOWNTO())
    {
        con_1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), -1);
        isDown = true;
    }
    // 开始结束变量赋值
    auto initial = v[0];
    auto final = v[1];
    auto addr = builder.CreateAlloca(llvm::Type::getInt32Ty(*llvm_context), nullptr);
    scopes.push_back(Scope());
    scopes.back().setVariable(id, addr);
    builder.CreateStore(initial, addr);

    // 创建循环的基本块
    auto while_count = llvm::BasicBlock::Create(*llvm_context, "while_count", function, 0);            // 判断循环是否完成的块
    llvm::BasicBlock *while_body = llvm::BasicBlock::Create(*llvm_context, "while_body", function, 0); // 循环体代码块
    llvm::BasicBlock *while_end = llvm::BasicBlock::Create(*llvm_context, "while_end", function, 0);   // 结束循环后的块

    builder.CreateBr(while_count);       // 跳转语句
    builder.SetInsertPoint(while_count); // 为基本块添加语句
    auto tmp_i = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), addr);
    // 跳转条件
    llvm::Value *cmp;
    
    if (isDown)
    {
        cmp = builder.CreateICmpSGE(tmp_i, final);
    }
    else
    {
        cmp = builder.CreateICmpSLE(tmp_i, final);
    }
    // 循环跳转
    builder.CreateCondBr(cmp, while_body, while_end);
    
    // while_body代码块
    builder.SetInsertPoint(while_body);

    if (auto simpleStatementContext = context->statement()->unlabelledStatement()->simpleStatement()){
        visitSimpleStatement(simpleStatementContext, function);
    }
    else if (auto structuredStatementContext = context->statement()->unlabelledStatement()->structuredStatement()){
        visitStructuredStatement(structuredStatementContext, function);
    }
    else{}
        //throw DebugException("Invalid statement");
    // 循环变量增加
    auto i = builder.CreateLoad(llvm::IntegerType::getInt32Ty(*llvm_context), addr);
    auto tmp = builder.CreateAdd(i, con_1);
    builder.CreateStore(tmp, addr);

    builder.CreateBr(while_count);
    // while_end代码块
    builder.SetInsertPoint(while_end);
    scopes.pop_back();
}

std::vector<llvm::Value *> Visitor::visitForList(pascalParser::ForListContext *context) {
    std::vector<llvm::Value *> v;
    auto v1 = visitInitialValue(context->initialValue());
    auto v2 = visitFinalValue(context->finalValue());
    v.push_back(v1);
    v.push_back(v2);
    return v;
}

llvm::Value *Visitor::visitInitialValue(pascalParser::InitialValueContext *context) {
    auto value = visitExpression(context -> expression());
    return value;
}

llvm::Value *Visitor::visitFinalValue(pascalParser::FinalValueContext *context) {
    auto value = visitExpression(context -> expression());
    return value;
}

void Visitor::visitRepeatStatement(pascalParser::RepeatStatementContext *context, llvm::Function *function) {
    // 创建循环使用到的三个代码块
    llvm::BasicBlock *while_count = llvm::BasicBlock::Create(*llvm_context, "while_count", function, 0);
    llvm::BasicBlock *while_body = llvm::BasicBlock::Create(*llvm_context, "while_body", function, 0);
    llvm::BasicBlock *while_end = llvm::BasicBlock::Create(*llvm_context, "while_end", function, 0);
    // while_count基本块
    builder.CreateBr(while_body);
    // while_body基本块
    builder.SetInsertPoint(while_body);
    visitStatements(context->statements(), function);

    builder.CreateBr(while_count);
    builder.SetInsertPoint(while_count);
    // 获取进入循环的判断值
    llvm::Value *exp_value = visitExpression(context->expression());
    // 跳转
    builder.CreateCondBr(exp_value, while_end, while_body);

    // while_end基本块
    builder.SetInsertPoint(while_end);
}

void Visitor::visitWhileStatement(pascalParser::WhileStatementContext *context, llvm::Function* function) {
    // 创建循环使用到的三个代码块
    llvm::BasicBlock *while_count = llvm::BasicBlock::Create(*llvm_context, "while_count", function, 0);
    llvm::BasicBlock *while_body = llvm::BasicBlock::Create(*llvm_context, "while_body", function, 0);
    llvm::BasicBlock *while_end = llvm::BasicBlock::Create(*llvm_context, "while_end", function, 0);
    // while_count基本块
    builder.CreateBr(while_count);
    builder.SetInsertPoint(while_count);
    // 获取进入循环的判断值
    llvm::Value *exp_value = visitExpression(context->expression());
    // 条件跳转
    builder.CreateCondBr(exp_value, while_body, while_end);
    // while_body基本块
    builder.SetInsertPoint(while_body);
    if (auto simpleStatementContext = context->statement()->unlabelledStatement()->simpleStatement()){
        visitSimpleStatement(simpleStatementContext, function);
    }
        
    else if (auto structuredStatementContext = context->statement()->unlabelledStatement()->structuredStatement()){
        visitStructuredStatement(structuredStatementContext, function);
    }
        
    else{}
        //throw DebugException("Invalid statement");

    builder.CreateBr(while_count);
    // while_end代码块
    builder.SetInsertPoint(while_end);
}


void Visitor::visitStatements(pascalParser::StatementsContext *context, llvm::Function *function)
{
    for (const auto &statementContext : context->statement())
    {
        visitStatement(statementContext, function);
    }
}


void Visitor::visitConditionalStatement(pascalParser::ConditionalStatementContext *context, llvm::Function *function) {
    if(auto ifStatementContext = context -> ifStatement()) {
        visitIfStatement(ifStatementContext, function);
    }
    else {
        //throw DebugException("Undefined parts of StructuredStateConditional");
    }
}

void Visitor::visitIfStatement(pascalParser::IfStatementContext *context, llvm::Function *function) {
    // 获取判断条件的value，从而创建跳转语句
    auto exp_value = visitExpression(context->expression());

    // 创建所需基本块，入口块已于入口处创建，此处只需要创建then与end的基本块。
    // else的基本块此处只做声明，根据后续判断条件再决定是否创建
    llvm::BasicBlock *thenBB = llvm::BasicBlock::Create(*llvm_context, "then", function);
    llvm::BasicBlock *end = llvm::BasicBlock::Create(*llvm_context, "if_end", function);
    llvm::BasicBlock *elseBB;

    if (context->statement().size() == 2)
    {
        // 确定有else后再创建其所属基本块
        elseBB = llvm::BasicBlock::Create(*llvm_context, "else", function);
        // 创建跳转语句
        builder.CreateCondBr(exp_value, thenBB, elseBB);
    }
    else
        builder.CreateCondBr(exp_value, thenBB, end); // 创建跳转语句

    // 遍历then的内容
    builder.SetInsertPoint(thenBB);
    visitStatement(context->statement(0), function);
    // 遍历完跳转至结尾块
    builder.CreateBr(end);

    // 确定有else后遍历else的内容
    if (context->statement().size() == 2)
    {
        builder.SetInsertPoint(elseBB);
        visitStatement(context->statement(1), function);
        builder.CreateBr(end);
    }
    // 更改基本块的指向
    builder.SetInsertPoint(end);
}

void Visitor::visitWithStatement(pascalParser::WithStatementContext *context, llvm::Function* function) {
    // with Todo
}

