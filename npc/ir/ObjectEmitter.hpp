#include <llvm/IR/Module.h>

namespace Pascal
{
    class ObjectEmitter
    {
    public:
        /**
         * @brief 向文件中写入中间代码
         *
         * @param module LLVM Module
         * @param filename 文件名
         * @param error 错误信息
         * 
         * 向指定文件中写入中间代码
         */
        static void emit(const std::unique_ptr<llvm::Module> &module, const std::string &filename, std::string &error);
    };
}