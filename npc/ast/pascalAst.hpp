#ifndef _PASCAL_AST_HPP_
#define _PASCAL_AST_HPP_

#include <any>

#include "pascalAstNode.hpp"
#include "pascalAstVisitor.hpp"

#include "pascalLexer.hpp"


namespace npc::ast
{

class Ast
{
  private:
    AstNode *root;
    std::vector<std::string> rule_names;

  public:
    AstNode *tree();

    // Constructor
    Ast(std::string src);
    ~Ast();
};

} // namespace npc::ast

#endif // _PASCAL_AST_HPP_