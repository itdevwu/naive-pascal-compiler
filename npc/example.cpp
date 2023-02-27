#include "ast/pascalAst.hpp"
#include <cstdio>
#include <filesystem>

void dfs(npc::ast::AstNode *node)
{
    auto children = node->getChildren();
    for (auto child : children)
    {
        printf("%s:%lu -> %s:%lu\n", node->getRule().c_str(), node->getText().size(),
               child->is_leaf() ? child->getText().c_str() : child->getRule().c_str(), child->getText().size());
        dfs(child);
    }
}

int main(int argc, char *argv[])
{
    std::stringstream ss;
    std::string src_path = argv[1];

    if (!std::filesystem::exists(src_path))
    {
        std::cerr << "cdslc error: file not found" << '\n';
        exit(0);
    }

    try
    {
        std::ifstream in_file(src_path);
        ss << in_file.rdbuf();
        in_file.close();
    }
    catch (const std::exception &e)
    {
        std::cerr << "cdslc error: reading file " << src_path << " : " << e.what() << '\n';
        exit(128);
    }

    auto ast = npc::ast::Ast(ss.str());
    dfs(ast.tree());
}