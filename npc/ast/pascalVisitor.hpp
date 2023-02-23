
// Generated from /home/user/projects/naive-pascal-compiler/grammar/pascal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "pascalParser.hpp"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by pascalParser.
 */
class  pascalVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by pascalParser.
   */
    virtual std::any visitProgram(pascalParser::ProgramContext *context) = 0;

    virtual std::any visitProgramHeading(pascalParser::ProgramHeadingContext *context) = 0;

    virtual std::any visitIdentifier(pascalParser::IdentifierContext *context) = 0;

    virtual std::any visitBlock(pascalParser::BlockContext *context) = 0;

    virtual std::any visitUsesUnitsPart(pascalParser::UsesUnitsPartContext *context) = 0;

    virtual std::any visitLabelDeclarationPart(pascalParser::LabelDeclarationPartContext *context) = 0;

    virtual std::any visitLabel(pascalParser::LabelContext *context) = 0;

    virtual std::any visitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *context) = 0;

    virtual std::any visitConstantDefinition(pascalParser::ConstantDefinitionContext *context) = 0;

    virtual std::any visitConstantChr(pascalParser::ConstantChrContext *context) = 0;

    virtual std::any visitConstant(pascalParser::ConstantContext *context) = 0;

    virtual std::any visitUnsignedNumber(pascalParser::UnsignedNumberContext *context) = 0;

    virtual std::any visitUnsignedInteger(pascalParser::UnsignedIntegerContext *context) = 0;

    virtual std::any visitUnsignedReal(pascalParser::UnsignedRealContext *context) = 0;

    virtual std::any visitSign(pascalParser::SignContext *context) = 0;

    virtual std::any visitBool_(pascalParser::Bool_Context *context) = 0;

    virtual std::any visitString(pascalParser::StringContext *context) = 0;

    virtual std::any visitTypeDefinitionPart(pascalParser::TypeDefinitionPartContext *context) = 0;

    virtual std::any visitTypeDefinition(pascalParser::TypeDefinitionContext *context) = 0;

    virtual std::any visitFunctionType(pascalParser::FunctionTypeContext *context) = 0;

    virtual std::any visitProcedureType(pascalParser::ProcedureTypeContext *context) = 0;

    virtual std::any visitType_(pascalParser::Type_Context *context) = 0;

    virtual std::any visitSimpleType(pascalParser::SimpleTypeContext *context) = 0;

    virtual std::any visitScalarType(pascalParser::ScalarTypeContext *context) = 0;

    virtual std::any visitSubrangeType(pascalParser::SubrangeTypeContext *context) = 0;

    virtual std::any visitTypeIdentifier(pascalParser::TypeIdentifierContext *context) = 0;

    virtual std::any visitStructuredType(pascalParser::StructuredTypeContext *context) = 0;

    virtual std::any visitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *context) = 0;

    virtual std::any visitStringtype(pascalParser::StringtypeContext *context) = 0;

    virtual std::any visitArrayType(pascalParser::ArrayTypeContext *context) = 0;

    virtual std::any visitTypeList(pascalParser::TypeListContext *context) = 0;

    virtual std::any visitIndexType(pascalParser::IndexTypeContext *context) = 0;

    virtual std::any visitComponentType(pascalParser::ComponentTypeContext *context) = 0;

    virtual std::any visitRecordType(pascalParser::RecordTypeContext *context) = 0;

    virtual std::any visitFieldList(pascalParser::FieldListContext *context) = 0;

    virtual std::any visitFixedPart(pascalParser::FixedPartContext *context) = 0;

    virtual std::any visitRecordSection(pascalParser::RecordSectionContext *context) = 0;

    virtual std::any visitVariantPart(pascalParser::VariantPartContext *context) = 0;

    virtual std::any visitTag(pascalParser::TagContext *context) = 0;

    virtual std::any visitVariant(pascalParser::VariantContext *context) = 0;

    virtual std::any visitSetType(pascalParser::SetTypeContext *context) = 0;

    virtual std::any visitBaseType(pascalParser::BaseTypeContext *context) = 0;

    virtual std::any visitFileType(pascalParser::FileTypeContext *context) = 0;

    virtual std::any visitPointerType(pascalParser::PointerTypeContext *context) = 0;

    virtual std::any visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *context) = 0;

    virtual std::any visitVariableDeclaration(pascalParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitProcedureAndFunctionDeclarationPart(pascalParser::ProcedureAndFunctionDeclarationPartContext *context) = 0;

    virtual std::any visitProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext *context) = 0;

    virtual std::any visitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *context) = 0;

    virtual std::any visitFormalParameterList(pascalParser::FormalParameterListContext *context) = 0;

    virtual std::any visitFormalParameterSection(pascalParser::FormalParameterSectionContext *context) = 0;

    virtual std::any visitParameterGroup(pascalParser::ParameterGroupContext *context) = 0;

    virtual std::any visitIdentifierList(pascalParser::IdentifierListContext *context) = 0;

    virtual std::any visitConstList(pascalParser::ConstListContext *context) = 0;

    virtual std::any visitFunctionDeclaration(pascalParser::FunctionDeclarationContext *context) = 0;

    virtual std::any visitResultType(pascalParser::ResultTypeContext *context) = 0;

    virtual std::any visitStatement(pascalParser::StatementContext *context) = 0;

    virtual std::any visitUnlabelledStatement(pascalParser::UnlabelledStatementContext *context) = 0;

    virtual std::any visitSimpleStatement(pascalParser::SimpleStatementContext *context) = 0;

    virtual std::any visitAssignmentStatement(pascalParser::AssignmentStatementContext *context) = 0;

    virtual std::any visitVariable(pascalParser::VariableContext *context) = 0;

    virtual std::any visitExpression(pascalParser::ExpressionContext *context) = 0;

    virtual std::any visitRelationaloperator(pascalParser::RelationaloperatorContext *context) = 0;

    virtual std::any visitSimpleExpression(pascalParser::SimpleExpressionContext *context) = 0;

    virtual std::any visitAdditiveoperator(pascalParser::AdditiveoperatorContext *context) = 0;

    virtual std::any visitTerm(pascalParser::TermContext *context) = 0;

    virtual std::any visitMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext *context) = 0;

    virtual std::any visitSignedFactor(pascalParser::SignedFactorContext *context) = 0;

    virtual std::any visitFactor(pascalParser::FactorContext *context) = 0;

    virtual std::any visitUnsignedConstant(pascalParser::UnsignedConstantContext *context) = 0;

    virtual std::any visitFunctionDesignator(pascalParser::FunctionDesignatorContext *context) = 0;

    virtual std::any visitParameterList(pascalParser::ParameterListContext *context) = 0;

    virtual std::any visitSet_(pascalParser::Set_Context *context) = 0;

    virtual std::any visitElementList(pascalParser::ElementListContext *context) = 0;

    virtual std::any visitElement(pascalParser::ElementContext *context) = 0;

    virtual std::any visitProcedureStatement(pascalParser::ProcedureStatementContext *context) = 0;

    virtual std::any visitActualParameter(pascalParser::ActualParameterContext *context) = 0;

    virtual std::any visitParameterwidth(pascalParser::ParameterwidthContext *context) = 0;

    virtual std::any visitGotoStatement(pascalParser::GotoStatementContext *context) = 0;

    virtual std::any visitEmptyStatement_(pascalParser::EmptyStatement_Context *context) = 0;

    virtual std::any visitEmpty_(pascalParser::Empty_Context *context) = 0;

    virtual std::any visitStructuredStatement(pascalParser::StructuredStatementContext *context) = 0;

    virtual std::any visitCompoundStatement(pascalParser::CompoundStatementContext *context) = 0;

    virtual std::any visitStatements(pascalParser::StatementsContext *context) = 0;

    virtual std::any visitConditionalStatement(pascalParser::ConditionalStatementContext *context) = 0;

    virtual std::any visitIfStatement(pascalParser::IfStatementContext *context) = 0;

    virtual std::any visitCaseStatement(pascalParser::CaseStatementContext *context) = 0;

    virtual std::any visitCaseListElement(pascalParser::CaseListElementContext *context) = 0;

    virtual std::any visitRepetetiveStatement(pascalParser::RepetetiveStatementContext *context) = 0;

    virtual std::any visitWhileStatement(pascalParser::WhileStatementContext *context) = 0;

    virtual std::any visitRepeatStatement(pascalParser::RepeatStatementContext *context) = 0;

    virtual std::any visitForStatement(pascalParser::ForStatementContext *context) = 0;

    virtual std::any visitForList(pascalParser::ForListContext *context) = 0;

    virtual std::any visitInitialValue(pascalParser::InitialValueContext *context) = 0;

    virtual std::any visitFinalValue(pascalParser::FinalValueContext *context) = 0;

    virtual std::any visitWithStatement(pascalParser::WithStatementContext *context) = 0;

    virtual std::any visitRecordVariableList(pascalParser::RecordVariableListContext *context) = 0;


};

