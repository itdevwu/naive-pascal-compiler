#include "ObjectEmitter.hpp"

#include <llvm/Support/Error.h>
#include <llvm/Support/FileSystem.h>
#include <llvm/Support/Host.h>
#include <llvm/Support/TargetRegistry.h>
#include <llvm/Target/TargetMachine.h>
#include <llvm/Target/TargetOptions.h>
#include <llvm/Bitcode/BitcodeWriter.h>

using namespace Pascal;

void ObjectEmitter::emit(const std::unique_ptr<llvm::Module> &module, const std::string &filename, std::string &error)
{
    /*
    if (ec)
    {
        error = "Could not open file: " + ec.message();
        return;
    }
    */
    std::error_code ec;
    llvm::raw_fd_ostream dest(filename, ec, llvm::sys::fs::CD_CreateAlways, llvm::sys::fs::FA_Write, llvm::sys::fs::OF_None);
    module->print(dest, nullptr);
    //llvm::WriteBitcodeToFile(*module, dest);
    dest.flush();

/*
    int result = system("./qsort.sh");

        // 检查执行结果
        if (result == 0) {
            printf("yeah");
        } else {
            // 执行失败
            // 可以在这里进行错误处理
        }


*/
}
