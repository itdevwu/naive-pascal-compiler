/*
#include "irCodegen.hpp"

namespace npc::ir
{

llvm::Value *stringCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                           llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues)
{
    // string stored in node->getText()
    return llvm::ConstantDataArray::getString(*context, node->getText());
}

llvm::Value *integerCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                            llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues)
{
    return llvm::ConstantInt::get(*context, llvm::APInt(32, node->getText(), 10));
}

llvm::Value *realCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                         llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues)
{
    // real stored in node->getText()
    return llvm::ConstantFP::get(*context, llvm::APFloat(std::stod(node->getText())));
}

llvm::Value *booleanCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                            llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues)
{
    // boolean stored in node->getText()
    return llvm::ConstantInt::get(*context, llvm::APInt(1, node->getText() == "true" ? 1 : 0, true));
}

llvm::Value *identifierCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                               llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues)
{
    // identifier stored in node->getText()
    return (*namedValues)[node->getText()];
}

} // namespace npc::ir
*/