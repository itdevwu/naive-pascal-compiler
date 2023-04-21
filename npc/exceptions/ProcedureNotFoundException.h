#pragma once

#include <stdexcept>
#include <string>

namespace Pascal
{
    class ProcedureNotFoundException : public std::runtime_error
    {
    public:
        ProcedureNotFoundException(std::string name) : std::runtime_error("Procedure not found: " + name + ".") {}
    };
} // namespace Pascal
