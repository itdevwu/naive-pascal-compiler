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
    std::error_code ec;
    llvm::raw_fd_ostream dest(filename, ec, llvm::sys::fs::CD_CreateAlways, llvm::sys::fs::FA_Write, llvm::sys::fs::OF_None);
    module->print(dest, nullptr);
    dest.flush();
}