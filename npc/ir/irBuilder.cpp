#include "irBuilder.hpp"
#include <llvm/IR/Value.h>

namespace npc::ir
{

void IRGenerator::visit(npc::ast::AstNode *node)
{
    for (auto child : node->getChildren())
    {
        llvm::Value *value = nullptr;
        // Only for demo
        if (child->getRule() == "string")
        {
            value = stringCodegen(child, context, builder, module, namedValues);
        }
        else if (child->getRule() == "integer")
        {
            value = integerCodegen(child, context, builder, module, namedValues);
        }
        else if (child->getRule() == "real")
        {
            value = realCodegen(child, context, builder, module, namedValues);
        }
        else if (child->getRule() == "boolean")
        {
            value = booleanCodegen(child, context, builder, module, namedValues);
        }
        else if (child->getRule() == "identifier")
        {
            value = identifierCodegen(child, context, builder, module, namedValues);
        }
        else
        {
            visit(child);
        }
    }

    // blabla
}

IRGenerator::IRGenerator(ast::Ast *tree)
{
    context = new llvm::LLVMContext();
    builder = new llvm::IRBuilder<>(*context);
    module = new llvm::Module("npc", *context);
    namedValues = new std::map<std::string, llvm::Value *>();

    visit(tree->tree());
}

IRGenerator::~IRGenerator()
{
    delete context;
    delete builder;
    delete module;
    delete namedValues;
}

} // namespace npc::ir
