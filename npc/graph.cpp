#include "ast/pascalAst.hpp"
#include <cstdio>
#include <filesystem>

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
    std::cout << ast.ast_graph();
}