//定义与编译选项相关的函数
#include "../include/options.h"
#include <iostream>

bpo::options_description create_options()
{
    //选项描述器,其参数为该描述器的名字 
    bpo::options_description opts("All options");
    //添加选项 
    //第一个参数为长名称，第二个参数为数据类型，第三个参数为说明 
    opts.add_options() 
        ("input,i", bpo::value<std::string>()->required(), "the file name to be compiled") 
        ("output,o", bpo::value<std::string>()->default_value("output.out"), "the file name to be output") 
        ("optimize,O", bpo::value<int>()->default_value(0), "enable optimization at diffrernt level") 
        ("run,r", "run the compiled file") 
        ("graph,g", "show the graph of AST")
        ("help,h", "help info");
    return opts;
}

std::string get_input_file(const bpo::variables_map& vm)
{
    if (vm.count("input"))
        return vm["input"].as<std::string>();
    else
        return "";
}

std::string get_output_file(const bpo::variables_map& vm)
{
    if (vm.count("output"))
        return vm["output"].as<std::string>();
    else
        return "";
}

int get_opt_level(const bpo::variables_map& vm)
{
    if (vm.count("optimize"))
        return vm["optimize"].as<int>();
    else
        return 0;
}
