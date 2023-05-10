// 定义与执行编译命令相关的函数
#include "../include/compiler_pas.h"
#include <cstdio>
#include <iostream>
#include <string>

std::string compile_pas(const std::string &input_file, bool gra)
{
    // 构造编译命令
    std::string cmd = "./irbuilder " + input_file;

    system(cmd.c_str());
    if (gra)
    {
        std::cout << "The image source code of AST is as follows:\n";
        std::string draw = "./npc " + input_file;
        system(draw.c_str());
    }
    return input_file.substr(0, input_file.find_last_of('.')) + ".ll";
}

bool compile_pas(const std::string &input_file, const std::string &output_file, bool gra)
{
    // 构造编译命令
    std::string cmd = "./irbuilder " + input_file + " -o " + output_file;

    system(cmd.c_str());
    if (gra)
    {
        std::cout << "The image source code of AST is as follows:\n";
        std::string draw = "./npc " + input_file;
        system(draw.c_str());
    }
    return true;
}

bool is_ll_file(const std::string &input_file)
{
    std::string suffix = ".ll";
    if (input_file.length() < suffix.length())
    {
        return false;
    }
    return input_file.compare(input_file.length() - suffix.length(), suffix.length(), suffix) == 0;
}
