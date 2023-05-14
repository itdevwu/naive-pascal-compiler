
#ifndef STANDPROCEDURE_HPP
#define STANDPROCEDURE_HPP

#include <llvm/IR/IRBuilder.h>
#include <unordered_map>
#include <llvm/Support/TargetSelect.h>
#include <llvm/Support/raw_ostream.h>


namespace Pascal
{
    class StandardProcedure
    {
    public:
        static std::unordered_map<std::string, llvm::Function *(*)(llvm::Module *)> prototypeMap; ///< 过程名到过程原型构造函数的映射

        static std::unordered_map<std::string, void (*)(llvm::IRBuilder<> *, std::vector<llvm::Value *> &)> argsConstructorMap; ///< 过程名到过程参数构造函数的映射

        static void init();

        static bool hasProcedure(std::string name);

        static llvm::Function *readlnPrototype(llvm::Module *module);

        static void readlnArgsConstructor(llvm::IRBuilder<> *builder, std::vector<llvm::Value *> &args);

        static llvm::Function *writelnPrototype(llvm::Module *module);

        static void writelnArgsConstructor(llvm::IRBuilder<> *builder, std::vector<llvm::Value *> &args);
    };
} 

#endif