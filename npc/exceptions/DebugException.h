#pragma once

#include <stdexcept>
#include <string>
#define NOW_FUNC_NAME std::string(__func__) + ": "

namespace pascal
{
class DebugException : public std::runtime_error
{
public:
    DebugException(std::string msg) : std::runtime_error("DebugException " + msg) {}
};
} // namespace pascal