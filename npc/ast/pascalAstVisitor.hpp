#ifndef _PASCAL_AST_VISITOR_HPP_
#define _PASCAL_AST_VISITOR_HPP_

#include "pascalAstNode.hpp"

#include "pascalVisitor.hpp"

namespace npc::ast
{
class AstVisitor : pascalVisitor
{
  public:
    std::any visitProgram(pascalParser::ProgramContext *context) override;

    std::any visitProgramHeading(pascalParser::ProgramHeadingContext *context) override;

    std::any visitIdentifier(pascalParser::IdentifierContext *context) override;

    std::any visitBlock(pascalParser::BlockContext *context) override;

    std::any visitUsesUnitsPart(pascalParser::UsesUnitsPartContext *context) override;

    std::any visitLabelDeclarationPart(pascalParser::LabelDeclarationPartContext *context) override;

    std::any visitLabel(pascalParser::LabelContext *context) override;

    std::any visitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *context) override;

    std::any visitConstantDefinition(pascalParser::ConstantDefinitionContext *context) override;

    std::any visitConstantChr(pascalParser::ConstantChrContext *context) override;

    std::any visitConstant(pascalParser::ConstantContext *context) override;

    std::any visitUnsignedNumber(pascalParser::UnsignedNumberContext *context) override;

    std::any visitUnsignedInteger(pascalParser::UnsignedIntegerContext *context) override;

    std::any visitUnsignedReal(pascalParser::UnsignedRealContext *context) override;

    std::any visitSign(pascalParser::SignContext *context) override;

    std::any visitBool_(pascalParser::Bool_Context *context) override;

    std::any visitString(pascalParser::StringContext *context) override;

    std::any visitTypeDefinitionPart(pascalParser::TypeDefinitionPartContext *context) override;

    std::any visitTypeDefinition(pascalParser::TypeDefinitionContext *context) override;

    std::any visitFunctionType(pascalParser::FunctionTypeContext *context) override;

    std::any visitProcedureType(pascalParser::ProcedureTypeContext *context) override;

    std::any visitType_(pascalParser::Type_Context *context) override;

    std::any visitSimpleType(pascalParser::SimpleTypeContext *context) override;

    std::any visitScalarType(pascalParser::ScalarTypeContext *context) override;

    std::any visitSubrangeType(pascalParser::SubrangeTypeContext *context) override;

    std::any visitTypeIdentifier(pascalParser::TypeIdentifierContext *context) override;

    std::any visitStructuredType(pascalParser::StructuredTypeContext *context) override;

    std::any visitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *context) override;

    std::any visitStringtype(pascalParser::StringtypeContext *context) override;

    std::any visitArrayType(pascalParser::ArrayTypeContext *context) override;

    std::any visitTypeList(pascalParser::TypeListContext *context) override;

    std::any visitIndexType(pascalParser::IndexTypeContext *context) override;

    std::any visitComponentType(pascalParser::ComponentTypeContext *context) override;

    std::any visitRecordType(pascalParser::RecordTypeContext *context) override;

    std::any visitFieldList(pascalParser::FieldListContext *context) override;

    std::any visitFixedPart(pascalParser::FixedPartContext *context) override;

    std::any visitRecordSection(pascalParser::RecordSectionContext *context) override;

    std::any visitVariantPart(pascalParser::VariantPartContext *context) override;

    std::any visitTag(pascalParser::TagContext *context) override;

    std::any visitVariant(pascalParser::VariantContext *context) override;

    std::any visitSetType(pascalParser::SetTypeContext *context) override;

    std::any visitBaseType(pascalParser::BaseTypeContext *context) override;

    std::any visitFileType(pascalParser::FileTypeContext *context) override;

    std::any visitPointerType(pascalParser::PointerTypeContext *context) override;

    std::any visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *context) override;

    std::any visitVariableDeclaration(pascalParser::VariableDeclarationContext *context) override;

    std::any visitProcedureAndFunctionDeclarationPart(
        pascalParser::ProcedureAndFunctionDeclarationPartContext *context) override;

    std::any visitProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext *context) override;

    std::any visitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *context) override;

    std::any visitFormalParameterList(pascalParser::FormalParameterListContext *context) override;

    std::any visitFormalParameterSection(pascalParser::FormalParameterSectionContext *context) override;

    std::any visitParameterGroup(pascalParser::ParameterGroupContext *context) override;

    std::any visitIdentifierList(pascalParser::IdentifierListContext *context) override;

    std::any visitConstList(pascalParser::ConstListContext *context) override;

    std::any visitFunctionDeclaration(pascalParser::FunctionDeclarationContext *context) override;

    std::any visitResultType(pascalParser::ResultTypeContext *context) override;

    std::any visitStatement(pascalParser::StatementContext *context) override;

    std::any visitUnlabelledStatement(pascalParser::UnlabelledStatementContext *context) override;

    std::any visitSimpleStatement(pascalParser::SimpleStatementContext *context) override;

    std::any visitAssignmentStatement(pascalParser::AssignmentStatementContext *context) override;

    std::any visitVariable(pascalParser::VariableContext *context) override;

    std::any visitExpression(pascalParser::ExpressionContext *context) override;

    std::any visitRelationaloperator(pascalParser::RelationaloperatorContext *context) override;

    std::any visitSimpleExpression(pascalParser::SimpleExpressionContext *context) override;

    std::any visitAdditiveoperator(pascalParser::AdditiveoperatorContext *context) override;

    std::any visitTerm(pascalParser::TermContext *context) override;

    std::any visitMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext *context) override;

    std::any visitSignedFactor(pascalParser::SignedFactorContext *context) override;

    std::any visitFactor(pascalParser::FactorContext *context) override;

    std::any visitUnsignedConstant(pascalParser::UnsignedConstantContext *context) override;

    std::any visitFunctionDesignator(pascalParser::FunctionDesignatorContext *context) override;

    std::any visitParameterList(pascalParser::ParameterListContext *context) override;

    std::any visitSet_(pascalParser::Set_Context *context) override;

    std::any visitElementList(pascalParser::ElementListContext *context) override;

    std::any visitElement(pascalParser::ElementContext *context) override;

    std::any visitProcedureStatement(pascalParser::ProcedureStatementContext *context) override;

    std::any visitActualParameter(pascalParser::ActualParameterContext *context) override;

    std::any visitParameterwidth(pascalParser::ParameterwidthContext *context) override;

    std::any visitGotoStatement(pascalParser::GotoStatementContext *context) override;

    std::any visitEmptyStatement_(pascalParser::EmptyStatement_Context *context) override;

    std::any visitEmpty_(pascalParser::Empty_Context *context) override;

    std::any visitStructuredStatement(pascalParser::StructuredStatementContext *context) override;

    std::any visitCompoundStatement(pascalParser::CompoundStatementContext *context) override;

    std::any visitStatements(pascalParser::StatementsContext *context) override;

    std::any visitConditionalStatement(pascalParser::ConditionalStatementContext *context) override;

    std::any visitIfStatement(pascalParser::IfStatementContext *context) override;

    std::any visitCaseStatement(pascalParser::CaseStatementContext *context) override;

    std::any visitCaseListElement(pascalParser::CaseListElementContext *context) override;

    std::any visitRepetetiveStatement(pascalParser::RepetetiveStatementContext *context) override;

    std::any visitWhileStatement(pascalParser::WhileStatementContext *context) override;

    std::any visitRepeatStatement(pascalParser::RepeatStatementContext *context) override;

    std::any visitForStatement(pascalParser::ForStatementContext *context) override;

    std::any visitForList(pascalParser::ForListContext *context) override;

    std::any visitInitialValue(pascalParser::InitialValueContext *context) override;

    std::any visitFinalValue(pascalParser::FinalValueContext *context) override;

    std::any visitWithStatement(pascalParser::WithStatementContext *context) override;

    std::any visitRecordVariableList(pascalParser::RecordVariableListContext *context) override;
};
} // namespace npc::ast

#endif // _PASCAL_AST_VISITOR_HPP_