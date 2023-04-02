#ifndef _IR_EXPRESSION_CODEGEN_HPP_
#define _IR_EXPRESSION_CODEGEN_HPP_

#include "../ast/pascalAst.hpp"

#include <llvm-13/llvm/IR/Value.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Verifier.h>

namespace npc::ir
{

llvm::Value *stringCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                           llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues);

llvm::Value *integerCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                            llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues);

llvm::Value *realCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                         llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues);

llvm::Value *booleanCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                            llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues);

llvm::Value *identifierCodegen(ast::AstNode *node, llvm::LLVMContext *context, llvm::IRBuilder<> *builder,
                               llvm::Module *module, std::map<std::string, llvm::Value *> *namedValues);

} // namespace npc::ir

#endif // _IR_EXPRESSION_CODEGEN_HPP_