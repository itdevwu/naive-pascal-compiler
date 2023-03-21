//声明与编译选项相关的函数
#ifndef OPTIONS_H
#define OPTIONS_H

#include <string>
#include <boost/program_options.hpp>

namespace bpo = boost::program_options;

//构造选项描述器
bpo::options_description create_options();

//获取输入文件名
std::string get_input_file(const bpo::variables_map& vm);

//获取输出文件名
std::string get_output_file(const bpo::variables_map& vm);

//获取优化等级
int get_opt_level(const bpo::variables_map& vm);

#endif