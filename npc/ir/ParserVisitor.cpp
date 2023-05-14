#include "ParserVisitor.hpp"
#include "../Visitor.hpp"

namespace Pascal
{
    ParserVisitor::ParserVisitor(Visitor &visitor) : visitor_(visitor)
    {
    }
    
    antlrcpp::Any ParserVisitor::visitProgram(pascalParser::ProgramContext *context)
    {
        auto name = context->identifier()->getText();
        auto block = context->block();
        return visitor_.visitProgram(name, block);
    }

    antlrcpp::Any ParserVisitor::visitStatement(pascalParser::StatementContext *context)
    {
        if (context->assignmentStatement())
        {
            return visitAssignmentStatement(context->assignmentStatement());
        }
        else if (context->procedureStatement())
        {
            return visitProcedureStatement(context->procedureStatement());
        }
        else if (context->ifStatement())
        {
            return visitIfStatement(context->ifStatement());
        }
        else if (context->forStatement())
        {
            return visitForStatement(context->forStatement());
        }
        else if (context->repeatStatement())
        {
            return visitRepeatStatement(context->repeatStatement());
        }
        else if (context->whileStatement())
        {
            return visitWhileStatement(context->whileStatement());
        }
        else if (context->withStatement())
        {
            return visitWithStatement(context->withStatement());
        }
        else
        {
            return nullptr;
        }
    }

    antlrcpp::Any ParserVisitor::visitAssignmentStatement(pascalParser::AssignmentStatementContext *context)
    {
        auto lhs = context->variable()->getText();
        auto rhs = visitExpression(context->expression());
        return visitor_.visitAssignmentStatement(lhs, rhs);
    }

    antlrcpp::Any ParserVisitor::visitProcedureStatement(pascalParser::ProcedureStatementContext *context)
    {
        auto name = context->identifier()->getText();
        auto args = visitParameterList(context->parameterList());
        return visitor_.visitProcedureStatement(name, args);
    }

    antlrcpp::Any ParserVisitor::visitIfStatement(pascalParser::IfStatementContext *context)
    {
        auto condition = visitExpression(context->expression());
        auto thenStmt = visitStatement(context->statement()[0]);
        auto elseStmt = context->ELSE() ? visitStatement(context->statement()[1]) : nullptr;
        return visitor_.visitIfStatement(condition, thenStmt, elseStmt);
    }

    antlrcpp::Any ParserVisitor::visitForStatement(pascalParser::ForStatementContext *context)
    {
        auto varName = context->identifier()->getText();
        auto fromExpr = visitExpression(context->expression()[0]);
        auto toExpr = visitExpression(context->expression()[1]);
        auto stmt = visitStatement(context->statement());
        return visitor_.visitForStatement(varName, fromExpr, toExpr, stmt);
    }

    antlrcpp::Any ParserVisitor::visitRepeatStatement(pascalParser::RepeatStatementContext *context)
    {
        auto stmts = context->statement();
        auto body = std::vector<StmtPtr>{};
        for (auto stmt : stmts)
        {
            body.push_back(visitStatement(stmt));
        }
        auto condition = visitExpression(context->expression());
        return visitor_.visitRepeatStatement(body, condition);
    }

    antlrcpp::Any ParserVisitor::visitWhileStatement(pascalParser::WhileStatementContext *context)
    {
        auto condition = visitExpression(context->expression());
        auto stmt = visitStatement(context->statement());
        return visitor_.visitWhileStatement(condition, stmt);
    }

    antlrcpp::Any ParserVisitor::visitWithStatement(pascalParser::WithStatementContext *context)
    {
        auto recordName = context->identifier()->getText();
        auto stmt = visitStatement(context->statement());
        return visitor_.visitWithStatement(recordName, stmt);
    }

    antlrcpp::Any ParserVisitor::visitParameterList(pascalParser::ParameterListContext *context)
    {
        auto params = context->parameter();
        auto args = std::vector<ExprPtr>{};
        for (auto param : params)
        {
            auto arg = visitExpression(param->expression());
            args.push_back(arg);
        }
        return args;
    }

    antlrcpp::Any ParserVisitor::visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *context)
    {
        auto vars = context->variableDeclaration();
        auto declarations = std::vector<VarDeclPtr>{};
        for (auto var : vars)
        {
            auto names = var->identifierList()->identifier();
            auto type = visitTypeSpec(var->type());
            for (auto name : names)
            {
                declarations.push_back(std::make_shared<VarDecl>(name->getText(), type));
            }
        }
        return visitor_.visitVariableDeclarationPart(declarations);
    }

    antlrcpp::Any ParserVisitor::visitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *context)
    {
        auto constants = context->constantDefinition();
        auto definitions = std::vector<ConstDeclPtr>{};
        for (auto constant : constants)
        {
            auto name = constant->identifier()->getText();
            auto value = visitConstant(constant->constant());
            definitions.push_back(std::make_shared<ConstDecl>(name, value));
        }
        return visitor_.visitConstantDeclarationPart(definitions);
    }

    antlrcpp::Any ParserVisitor::visitTypeDefinition(pascalParser::TypeDefinitionContext *context)
    {
        auto name = context->identifier()->getText();
        auto type = visitTypeSpec(context->type());
        return visitor_.visitTypeDeclaration(name, type);
    }

    antlrcpp::Any ParserVisitor::visitStructuredType(pascalParser::StructuredTypeContext *context)
    {
        if (context->arrayType())
        {
            return visitArrayType(context->arrayType());
        }
        else if (context->recordType())
        {
            return visitRecordType(context->recordType());
        }
        else
        {
            return nullptr;
        }
    }

    antlrcpp::Any ParserVisitor::visitArrayType(pascalParser::ArrayTypeContext *context)
    {
        auto elementType = visitTypeSpec(context->type());
        auto bounds = context->boundsList()->constant();
        auto lowerBound = visitConstant(bounds[0]);
        auto upperBound = visitConstant(bounds[1]);
        return std::make_shared<ArrayType>(elementType, lowerBound, upperBound);
    }

    antlrcpp::Any ParserVisitor::visitRecordType(pascalParser::RecordTypeContext *context)
    {
        auto fields = visitFieldList(context->fieldList());
        return std::make_shared<RecordType>(fields);
    }

    antlrcpp::Any ParserVisitor::visitFieldList(pascalParser::FieldListContext *context)
    {
        auto vars = context->variableDeclaration();
        auto fields = std::vector<FieldPtr>{};
        for (auto var : vars)
        {
            auto names = var->identifierList()->identifier();
            auto type = visitTypeSpec(var->type());
            for (auto name : names)
            {
                fields.push_back(std::make_shared<Field>(name->getText(), type));
            }
        }
        return fields;
    }

    antlrcpp::Any ParserVisitor::visitFixedPart(pascalParser::FixedPartContext *context)
    {
        auto typeDefs = context->typeDefinition();
        auto declarations = std::vector<TypeDeclPtr>{};
        for (auto typeDef : typeDefs)
        {
            auto name = typeDef->identifier()->getText();
            auto type = visitTypeSpec(typeDef->type());
            declarations.push_back(std::make_shared<TypeDecl>(name, type));
        }
        return declarations;
    }

    antlrcpp::Any ParserVisitor::visitStatementPart(pascalParser::StatementPartContext *context)
    {
        auto stmts = context->statement();
        auto statements = std::vector<StmtPtr>{};
        for (auto stmt : stmts)
        {
            statements.push_back(visitStatement(stmt));
        }
        return visitor_.visitStatementPart(statements);
    }

    antlrcpp::Any ParserVisitor::visitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *context)
    {
        auto name = context->identifier()->getText();
        auto params = visitParameterList(context->parameterList());
        auto block = context->block();
        return visitor_.visitProcedureDeclaration(name, params, block);
    }

    antlrcpp::Any ParserVisitor::visitFunctionDeclaration(pascalParser::FunctionDeclarationContext *context)
    {
        auto name = context->identifier()->getText();
        auto params = visitParameterList(context->parameterList());
        auto returnType = visitTypeSpec(context->returnType);
        auto block = context->block();
        return visitor_.visitFunctionDeclaration(name, params, returnType, block);
    }
}