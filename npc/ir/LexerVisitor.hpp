#ifndef LEXER_VISITOR_HPP
#define LEXER_VISITOR_HPP

#include <string>

#include "../ast/pascalBaseVisitor.h"

namespace Pascal
{
    class Visitor;

    class LexerVisitor : public pascalBaseVisitor
    {
    public:
        explicit LexerVisitor(Visitor &visitor);

        antlrcpp::Any visitIdentifier(pascalParser::IdentifierContext *context) override;
        antlrcpp::Any visitString(pascalParser::StringContext *context) override;

    private:
        Visitor &visitor_;
    };
}

#endif