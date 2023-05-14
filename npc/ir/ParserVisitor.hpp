#ifndef PARSER_VISITOR_HPP
#define PARSER_VISITOR_HPP

#include "../ast/pascalBaseVisitor.h"
#include "../ast/pascalVisitor.hpp"

namespace Pascal
{
    class Visitor;

    class ParserVisitor : public pascalBaseVisitor
    {
    public:
        explicit ParserVisitor(Visitor &visitor);

        antlrcpp::Any visitProgram(pascalParser::ProgramContext *context) override;
        antlrcpp::Any visitStatement(pascalParser::StatementContext *context) override;
        antlrcpp::Any visitAssignmentStatement(pascalParser::AssignmentStatementContext *context) override;
        antlrcpp::Any visitProcedureStatement(pascalParser::ProcedureStatementContext *context) override;
        antlrcpp::Any visitIfStatement(pascalParser::IfStatementContext *context) override;
        antlrcpp::Any visitForStatement(pascalParser::ForStatementContext *context) override;
        antlrcpp::Any visitRepeatStatement(pascalParser::RepeatStatementContext *context) override;
        antlrcpp::Any visitWhileStatement(pascalParser::WhileStatementContext *context) override;
        antlrcpp::Any visitWithStatement(pascalParser::WithStatementContext *context) override;
        antlrcpp::Any visitParameterList(pascalParser::ParameterListContext *context) override;
        antlrcpp::Any visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *context) override;
        antlrcpp::Any visitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *context) override;
        antlrcpp::Any visitTypeDefinition(pascalParser::TypeDefinitionContext *context) override;
        antlrcpp::Any visitStructuredType(pascalParser::StructuredTypeContext *context) override;
        antlrcpp::Any visitArrayType(pascalParser::ArrayTypeContext *context) override;
        antlrcpp::Any visitRecordType(pascalParser::RecordTypeContext *context) override;
        antlrcpp::Any visitFieldList(pascalParser::FieldListContext *context) override;
        antlrcpp::Any visitFixedPart(pascalParser::FixedPartContext *context) override;
        antlrcpp::Any visitStatementPart(pascalParser::StatementPartContext *context) override;
        antlrcpp::Any visitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *context) override;
        antlrcpp::Any visitFunctionDeclaration(pascalParser::FunctionDeclarationContext *context) override;

    private:
        Visitor &visitor_;
    };
}

#endif