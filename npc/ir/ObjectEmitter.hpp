#include <llvm/IR/Module.h>

namespace Pascal
{
    class ObjectEmitter
    {
    public:
        static void emit(const std::unique_ptr<llvm::Module> &module, const std::string &filename, std::string &error);
    };
}