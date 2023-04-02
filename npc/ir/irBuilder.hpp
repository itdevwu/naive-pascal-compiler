#ifndef _IR_BUILDER_HPP_
#define _IR_BUILDER_HPP_

// LLVM headers
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>

#include "irCodegen.hpp"

namespace npc::ir
{

// LLVM IR generator class
class IRGenerator
{
  private:
    llvm::LLVMContext *context;
    llvm::IRBuilder<> *builder;
    llvm::Module *module;
    std::map<std::string, llvm::Value *> *namedValues;

  public:
    void visit(npc::ast::AstNode *node);

    // Constructor
    IRGenerator(ast::Ast *tree);
    // Destructor
    ~IRGenerator();
};

} // namespace npc::ir

#endif // _IR_BUILDER_HPP_