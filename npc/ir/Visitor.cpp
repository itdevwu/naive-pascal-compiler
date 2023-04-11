#include "Visitor.hpp"

//#include "exceptions/DebugException.h"
//#include "exceptions/NotImplementedException.h"
//#include "exceptions/VariableNotFoundException.h"
//#include "exceptions/ProcedureNotFoundException.h"
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
        auto functionType = llvm::FunctionType::get(builder.getVoidTy(), {}, false);
        auto programName = visitProgramHeading(context->programHeading());
        auto function = llvm::Function::Create(functionType, llvm::GlobalValue::LinkageTypes::ExternalLinkage, "main", module.get());
        visitBlock(context->block(), function, true);
    }
    else{
        auto functionType = llvm::FunctionType::get(builder.getVoidTy(), {}, false);
        auto programName = visitProgramHeading(context->programHeading());
        auto function = llvm::Function::Create(functionType, llvm::GlobalValue::LinkageTypes::ExternalLinkage, "main", module.get());

        scopes.push_back(Scope());
        scopes.back().setVariable(programName, function);
        visitBlock(context->block(), function, true);
        builder.CreateRetVoid();
    }
}

std::string Visitor::visitProgramHeading(pascalParser::ProgramHeadingContext *context)
{
    if(context->PROGRAM()){
        return visitIdentifier(context->identifier());
    }
    else if(context->UNIT()){
        return visitIdentifier(context->identifier());
    }
}

std::string Visitor::visitIdentifier(pascalParser::IdentifierContext *context)
{
    return context->IDENT()->getText();
}

void Visitor::visitBlock(pascalParser::BlockContext *context, llvm::Function *function, bool isGlobal)
{

    int i=0;
    auto block = llvm::BasicBlock::Create(*llvm_context, "entry", function);
    if(context->IMPLEMENTATION(0)){
        for (i=0;i<context->constantDefinitionPart().size();i++)
        {
            //visitConstantDefinitionPart(context->constantDefinitionPart(i));
        }
        for (i=0;i<context->variableDeclarationPart().size();i++)
        {
            //visitVariableDeclarationPart(context->variableDeclarationPart(i));
        }
        for (i=0;i<context->typeDefinitionPart().size();i++)
        {
            //visitTypeDefinitionPart(context->typeDefinitionPart(i));
        }
        for (i=0;i<context->procedureAndFunctionDeclarationPart().size();i++)
        {
                //visitProcedureAndFunctionDeclarationPart(context->procedureAndFunctionDeclarationPart(i));
            
        }
    }
    else{
        if (builder.GetInsertBlock() && builder.GetInsertBlock()->getName().str() == "Para_Ret")
        {
            builder.CreateBr(block);
        }
        builder.SetInsertPoint(block);
        for(i=0;i<context->usesUnitsPart().size();i++){
            //visitUsesUnitsPart(context->usesUnitsPart(i));
        } 
        for (i=0;i<context->constantDefinitionPart().size();i++)
        {
            //visitConstantDefinitionPart(context->constantDefinitionPart(i));
        }
        for (i=0;i<context->variableDeclarationPart().size();i++)
        {
            //visitVariableDeclarationPart(context->variableDeclarationPart(i));
        }
        for (i=0;i<context->typeDefinitionPart().size();i++)
        {
            //visitTypeDefinitionPart(context->typeDefinitionPart(i));
        }
        for (i=0;i<context->procedureAndFunctionDeclarationPart().size();i++)
        {

            if(!(context->IMPLEMENTATION(0))){
                //visitProcedureAndFunctionDeclarationPart(context->procedureAndFunctionDeclarationPart(i));
            } 
            
        }
        builder.SetInsertPoint(block);
        //visitCompoundStatement(context->compoundStatement(), function);
    }
    
}



