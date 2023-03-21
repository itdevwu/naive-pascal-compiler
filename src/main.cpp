#include "../include/options.h"
#include "../include/parser.h"
#include "../include/compiler.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    //创建选项描述器
    bpo::options_description opts = create_options();

    //解析命令行参数
    bpo::variables_map vm = parse_args(argc, argv, opts);

    //获取输入文件名、输出文件名和优化等级
    std::string input_file = get_input_file(vm);
    std::string output_file = get_output_file(vm);
    int opt_level = get_opt_level(vm);

    //执行编译命令
    bool compile_success = compile(input_file, output_file, opt_level);

    if (compile_success)
        std::cout << "Compile success!" << std::endl;
    else
        std::cout << "Compile failed!" << std::endl;

    //判断是否需要运行编译后的文件
    if (vm.count("run"))
    {
        bool run_success = run(output_file);

        if (run_success)
            std::cout << "Run success!" << std::endl;
        else
            std::cout << "Run failed!" << std::endl;
    }

}