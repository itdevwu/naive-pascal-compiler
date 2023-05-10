//定义与命令行参数解析相关的函数
#include "../include/parser.h"
#include <iostream>

bpo::variables_map parse_args(int argc, char const *argv[], const bpo::options_description& opts)
{
    //选项存储器 
    bpo::variables_map vm; 

    try { 
        //解析命令行输入的参数并存储到vm中 
        bpo::store(bpo::parse_command_line(argc, argv, opts), vm); 
        if (vm.count("help")) { 
            std::cout << "  ____   _    _  _____  _______   _   _  _____    _____" << std::endl;
            std::cout << " |  _ \\ | |  | ||  __ \\|__   __| | \\ | ||  __ \\  / ____|" << std::endl;
            std::cout << " | |_) || |  | || |__) |  | |    |  \\| || |__) || |     " << std::endl;
            std::cout << " |  _ < | |  | ||  ___/   | |    | . ` ||  ___/ | |     " << std::endl;
            std::cout << " | |_) || |__| || |       | |    | |\\  || |     | |____ " << std::endl;
            std::cout << " |____/  \\____/ |_|       |_|    |_| \\_||_|      \\_____|\n";
            std::cout << "This program is a simple IR compiler that can compile a ir source file into an executable file.\n";
            std::cout << "Usage: main [options] -i input-file\n";
            std::cout << opts << std::endl;
            std::cout << "Examples:\n";
            std::cout << "  main -i hello.ll -o hello -O 2\n";
            std::cout << "  main -i test.ll -r\n";
            exit(EXIT_SUCCESS); 
        } 
        //检查是否有必要的选项或者有不合法的选项，并抛出异常
        bpo::notify(vm); 
    } catch (bpo::error& e) { 
        //处理异常
        std::cerr << e.what() << std::endl; 
        exit(EXIT_FAILURE); 
    }
    
    return vm;
}