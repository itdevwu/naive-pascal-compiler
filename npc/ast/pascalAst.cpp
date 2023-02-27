#include "pascalAst.hpp"

namespace npc::ast
{
AstNode *Ast::tree()
{
    return root;
}

Ast::Ast(std::string src)
{
    auto src_input = new antlr4::ANTLRInputStream(src);

    auto lexer = new pascalLexer(&*src_input);
    auto tokens = new antlr4::CommonTokenStream(&*lexer);
    tokens->fill();

    auto parser = new pascalParser(&*tokens);
    parser->setBuildParseTree(true);
    rule_names = parser->getRuleNames();

    auto visitor = new AstVisitor;
    root = std::any_cast<AstNode *>(visitor->visitProgram(parser->program()));
    root->setRuleNames(&rule_names);
}

Ast::~Ast()
{
    if (root != nullptr)
        delete root;
}

} // namespace npc::ast