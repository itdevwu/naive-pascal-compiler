#include "pascalAstNode.hpp"

namespace npc::ast
{
void AstNode::addChild(int rule_index, std::string text)
{
    AstNode *child = new AstNode(rule_index, text);
    child->setFather(this);
    children.push_back(child);
}

void AstNode::addChild(AstNode *child)
{
    child->setFather(this);
    this->children.push_back(child);
}

void AstNode::setFather(AstNode *father)
{
    this->father = father;
}

void AstNode::setRuleNames(std::vector<std::string> *rule_names)
{
    this->rule_names = rule_names;
    rule = rule_names != nullptr ? rule_names->at(rule_index) : "";
    for (auto child : children)
    {
        child->setRuleNames(rule_names);
    }
}

int AstNode::getRuleIndex()
{
    return rule_index;
}

std::string AstNode::getRule()
{
    return rule;
}

std::string AstNode::getText()
{
    return text;
}

AstNode *AstNode::getFather()
{
    return father;
}

std::vector<AstNode *> AstNode::getChildren()
{
    return children;
}

bool AstNode::is_leaf()
{
    return children.empty();
}

AstNode::AstNode(int rule_index, std::string text) : father(nullptr), rule_index(rule_index), text(text)
{
    rule_names = nullptr;
    rule = "";
}

AstNode::AstNode(int rule_index, std::string text, std::vector<std::string> *rule_names)
    : father(nullptr), rule_index(rule_index), text(text), rule_names(rule_names)
{
    if (rule_names != nullptr)
    {
        rule = rule_names->at(rule_index);
    }
    else
    {
        rule = "";
    }
}

AstNode::~AstNode()
{
    for (auto child : children)
    {
        delete child;
    }
}
} // namespace npc::ast