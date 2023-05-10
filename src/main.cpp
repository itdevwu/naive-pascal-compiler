#include "../include/options.h"
#include "../include/parser.h"
#include "../include/compiler_ll.h"
#include "../include/compiler_pas.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    //创建选项描述器
    bpo::options_description opts = create_options();

    //解析命令行参数
    bpo::variables_map vm = parse_args(argc, argv, opts);

    //获取输入文件名、输出文件名
    std::string input_file = get_input_file(vm);
    std::string output_file = get_output_file(vm);

    // std::cout << "test: " << output_file << std::endl;

    bool is_input_ll = is_ll_file(input_file);

    if (is_input_ll)
    {
        //获取优化等级
        int opt_level = get_opt_level(vm);
        //执行编译命令
        bool compile_success = compile_ll(input_file, output_file, opt_level);

        if (compile_success)
            std::cout << "LLVM IR compiled success!" << std::endl;
        else
            std::cout << "LLVM IR compile failed!" << std::endl;

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
    else
    {
        bool is_output_ll = is_ll_file(output_file);

        if (is_output_ll)
        {
            if (!compile_pas(input_file, output_file, bool(vm.count("graph"))))
                return 1;
        }
        else
        {
            std::string front_output = compile_pas(input_file, bool(vm.count("graph")));
            //获取优化等级
            int opt_level = get_opt_level(vm);
            //执行编译命令
            bool compile_success = compile_ll(front_output, output_file, opt_level);

            if (compile_success)
                std::cout << "LLVM IR compiled success!" << std::endl;
            else
                std::cout << "LLVM IR compile failed!" << std::endl;

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
    }

    return 0;
}
