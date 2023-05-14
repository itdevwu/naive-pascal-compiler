#include "LexerVisitor.hpp"

#include "../Visitor.hpp"

namespace Pascal
{
    LexerVisitor::LexerVisitor(Visitor &visitor) : visitor_(visitor) {}

    antlrcpp::Any LexerVisitor::visitIdentifier(pascalParser::IdentifierContext *context)
    {
        auto name = context->getText();
        return visitor_.visitIdentifier(context);
    }

    antlrcpp::Any LexerVisitor::visitString(pascalParser::StringContext *context)
    {
        auto str = context->getText();
        str = str.substr(1, str.length() - 2);
        return str;
    }
}