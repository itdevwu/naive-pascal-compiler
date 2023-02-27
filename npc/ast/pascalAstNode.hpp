#ifndef _PASCAL_AST_NODE_HPP_
#define _PASCAL_AST_NODE_HPP_

#include <string>
#include <vector>

namespace npc::ast
{
class AstNode
{
  private:
    // Father by default is nullptr, which root node points at.
    // When using addChild, father of sub node should be owner instance of addChild method.
    AstNode *father;
    std::vector<AstNode *> children;

    int rule_index;
    // Content of rule is rule_names[rule_index]
    std::string rule;
    std::string text;

    std::vector<std::string> *rule_names;

  public:
    void addChild(int rule_index, std::string text);
    void addChild(AstNode *node);
    void setFather(AstNode *father);
    // When this is set, update rule_names of all children node.
    void setRuleNames(std::vector<std::string> *rule_names);

    int getRuleIndex();
    std::string getRule();
    std::string getText();
    AstNode *getFather();
    std::vector<AstNode *> getChildren();

    bool is_leaf();

    // Constructor
    // Check whether rule_names points to nullptr,
    // if not then rule = rule_names[rule_index]
    // else rule = ""
    AstNode(int rule_index, std::string text);
    AstNode(int rule_index, std::string text, std::vector<std::string> *rule_names);
    ~AstNode();
};

} // namespace npc::ast

#endif // _PASCAL_AST_NODE_HPP_