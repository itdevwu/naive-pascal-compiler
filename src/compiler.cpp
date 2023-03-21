//定义与执行编译命令相关的函数
#include "../include/compiler.h"
#include <cstdlib>

bool compile(const std::string& input_file, const std::string& output_file, int opt_level)
{
    //构造编译命令
    std::string cmd = "clang " + input_file + " -o ";
    std::string opt = "";
    std::string other = " -Wno-override-module";
    if (opt_level > 0)
        opt = " -O" + ((opt_level == 2 || opt_level == 3) ? std::to_string(opt_level) : "1");
    cmd.append(output_file + opt + other);
    
    //执行编译命令并返回结果
    return system(cmd.c_str()) == 0;
}

bool run(const std::string& output_file)
{
    //构造运行命令
    std::string cmd = "./" + output_file;

    //执行运行命令并返回结果
    return system(cmd.c_str()) == 0;
}