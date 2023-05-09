
#include <unistd.h>

#include "ir/Visitor.hpp"
#include "ir/ObjectEmitter.hpp"
#include "ir/StandardProcedure.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        llvm::errs() << "Usage: s1mple-compiler <source-file> [-h] [-o <target-file (default: <filename>.o)>]\n";
        return 1;
    }
    std::string sourcePath(argv[1]), targetPath;
    while (int o = getopt(argc, argv, "ho:") != -1)
    {
        switch (o)
        {
        case 'h':
            llvm::errs() << "Usage: s1mple-compiler <source-file> [-h] [-o <target-file (default: <filename>.o)>]\n";
            return 1;
        case 'o':
            targetPath = optarg;
            break;
        case '?':
            llvm::errs() << "Usage: s1mple-compiler <source-file> [-h] [-o <target-file (default: <filename>.o)>]\n";
            return 1;
        }
    }

    Pascal::StandardProcedure::init();
    
    Pascal::Visitor visitor(sourcePath);
    try
    {
        //llvm::outs() << "Hello World! (version "  << ")\n";
        visitor.fromFile(sourcePath);
    }
    catch (const std::ifstream::failure &e)
    {
        llvm::errs() << e.what();
    }

    if (targetPath.empty())
        targetPath = sourcePath.substr(0, sourcePath.find_last_of('.')) + ".ll";
    
    //llvm::outs() << "Hello World! (version "  << ")\n";
    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    llvm::InitializeNativeTargetAsmParser();

    std::string error;
    Pascal::ObjectEmitter::emit(visitor.module, targetPath, error);
    if (!error.empty())
    {
        llvm::errs() << error << '\n';
        return 1;
    }
    
    return 0;
}
