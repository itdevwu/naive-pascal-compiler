//声明与命令行参数解析相关的函数
#ifndef PARSER_H
#define PARSER_H

#include <boost/program_options.hpp>

namespace bpo = boost::program_options;

//解析命令行输入的参数并返回选项存储器
bpo::variables_map parse_args(int argc, char const *argv[], const bpo::options_description& opts);

#endif