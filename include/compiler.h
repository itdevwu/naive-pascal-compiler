//声明与执行编译命令相关的函数
#ifndef COMPILER_H
#define COMPILER_H

#include <string>

//执行编译命令并返回是否成功
bool compile(const std::string& input_file, const std::string& output_file, int opt_level);

//执行运行命令并返回是否成功
bool run(const std::string& output_file);

#endif