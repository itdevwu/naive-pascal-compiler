#pragma once

#include <stdexcept>

namespace Pascal
{
    class NotImplementedException : public std::logic_error
    {
    public:
        NotImplementedException() : std::logic_error("Functionnality not yet implemented.") {}
    };
} // namespace Pascal
