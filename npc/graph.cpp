#include "ast/pascalAst.hpp"
#include <cstdio>
#include <filesystem>

int tot_nodes = 0;

void dfs(npc::ast::AstNode *node)
{
    auto children = node->getChildren();
    auto cur_node = tot_nodes++;
    printf("%d\n", cur_node);

    for (auto child : children)
    {
        if (child->is_leaf())
        {
            printf(
                "%s_%d -> %s_",
                node->getRule().c_str(),
                cur_node,
                child->getRule().c_str()
            );
        }
        else 
        {
            printf(
                "%s_%d -> %s_",
                node->getRule().c_str(),
                cur_node,
                child->getRule().c_str()
            );
        }
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