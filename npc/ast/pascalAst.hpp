#ifndef _PASCAL_AST_HPP_
#define _PASCAL_AST_HPP_

#include <any>
#include <sstream>

#include "pascalAstNode.hpp"
#include "pascalAstVisitor.hpp"

#include "pascalLexer.hpp"

namespace npc::ast
{

void dfs(npc::ast::AstNode *node, std::stringstream &ss, int &tot_nodes);

class Ast
{
  private:
    AstNode *root;
    std::vector<std::string> rule_names;

  public:
    AstNode *tree();

    // Generate an image of AST using DOT language
    std::string ast_graph();

    // Constructor
    Ast(std::string src);
    ~Ast();
};

} // namespace npc::ast

#endif // _PASCAL_AST_HPP_