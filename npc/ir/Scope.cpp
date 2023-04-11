#include "Scope.hpp"

using namespace Pascal;

llvm::Value *Scope::setVariable(const std::string &name, llvm::Value *value)
{
    this->variables[name] = value;
    return value;
}

llvm::Value *Scope::getVariable(const std::string &name)
{
    try
    {
        return this->variables.at(name);
    }
    catch (std::out_of_range)
    {
        return nullptr;
    }
}