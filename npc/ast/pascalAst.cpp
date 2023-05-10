#include "pascalAst.hpp"
#include <cstdio>
#include <sstream>

namespace npc::ast
{
AstNode *Ast::tree()
{
    return root;
}

void dfs(npc::ast::AstNode *node, std::stringstream &ss, int &tot_nodes)
{
    auto children = node->getChildren();
    auto cur_node = tot_nodes;
    ss <<  cur_node << " [label=\"" << node->getRule() << "\"]\n";

    if (node->is_leaf())
    {
        auto ctx_node = ++tot_nodes;
        ss << ctx_node << " [label=\"" << node->getText() << "\"]\n";
        ss << cur_node << " -> " << ctx_node << '\n';
    }

    for (auto child : children)
    {
        auto child_node = ++tot_nodes;

        ss << cur_node << " -> " << child_node << '\n';


        dfs(child, ss, tot_nodes);
    }
}

std::string Ast::ast_graph()
{
    std::string graph = "digraph ast {\n";

    std::stringstream ss;
    int tot_nodes = 0;
    npc::ast::dfs(root, ss, tot_nodes);
    graph += ss.str();

    graph += "}\n";
    return graph;
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