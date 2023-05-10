//声明与执行编译命令相关的函数
#ifndef COMPILER_PAS_H
#define COMPILER_PAS_H

#include <unistd.h>
#include <string>

std::string compile_pas(const std::string& input_file, bool gra);

bool compile_pas(const std::string& input_file, const std::string& output_file, bool gra);

bool is_ll_file(const std::string& input_file);

#endif
