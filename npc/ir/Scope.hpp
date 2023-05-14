#ifndef SCOPE_HPP
#define SCOPE_HPP

#include <llvm/IR/Value.h>
#include <string>
#include <unordered_map>

namespace Pascal
{
    class Scope
    {
    private:
        std::unordered_map<std::string, llvm::Value *> variables; ///< 变量名到值的映射

    public:
        llvm::Value *setVariable(const std::string &name, llvm::Value *);

        llvm::Value *getVariable(const std::string &name);
    };
} 

#endif