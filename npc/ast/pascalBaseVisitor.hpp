
// Generated from /home/user/projects/naive-pascal-compiler/grammar/pascal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "pascalVisitor.hpp"


/**
 * This class provides an empty implementation of pascalVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  pascalBaseVisitor : public pascalVisitor {
public:

  virtual std::any visitProgram(pascalParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgramHeading(pascalParser::ProgramHeadingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(pascalParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(pascalParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsesUnitsPart(pascalParser::UsesUnitsPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabelDeclarationPart(pascalParser::LabelDeclarationPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(pascalParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDefinition(pascalParser::ConstantDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantChr(pascalParser::ConstantChrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(pascalParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedNumber(pascalParser::UnsignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedInteger(pascalParser::UnsignedIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedReal(pascalParser::UnsignedRealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSign(pascalParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBool_(pascalParser::Bool_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(pascalParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDefinitionPart(pascalParser::TypeDefinitionPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDefinition(pascalParser::TypeDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionType(pascalParser::FunctionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureType(pascalParser::ProcedureTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_(pascalParser::Type_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleType(pascalParser::SimpleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalarType(pascalParser::ScalarTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubrangeType(pascalParser::SubrangeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdentifier(pascalParser::TypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructuredType(pascalParser::StructuredTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringtype(pascalParser::StringtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayType(pascalParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeList(pascalParser::TypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexType(pascalParser::IndexTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentType(pascalParser::ComponentTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordType(pascalParser::RecordTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldList(pascalParser::FieldListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedPart(pascalParser::FixedPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordSection(pascalParser::RecordSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariantPart(pascalParser::VariantPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTag(pascalParser::TagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariant(pascalParser::VariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetType(pascalParser::SetTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseType(pascalParser::BaseTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFileType(pascalParser::FileTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerType(pascalParser::PointerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(pascalParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureAndFunctionDeclarationPart(pascalParser::ProcedureAndFunctionDeclarationPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormalParameterList(pascalParser::FormalParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormalParameterSection(pascalParser::FormalParameterSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterGroup(pascalParser::ParameterGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(pascalParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstList(pascalParser::ConstListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclaration(pascalParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResultType(pascalParser::ResultTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(pascalParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnlabelledStatement(pascalParser::UnlabelledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleStatement(pascalParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStatement(pascalParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(pascalParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(pascalParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationaloperator(pascalParser::RelationaloperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleExpression(pascalParser::SimpleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveoperator(pascalParser::AdditiveoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(pascalParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignedFactor(pascalParser::SignedFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(pascalParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedConstant(pascalParser::UnsignedConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDesignator(pascalParser::FunctionDesignatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(pascalParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_(pascalParser::Set_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementList(pascalParser::ElementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElement(pascalParser::ElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureStatement(pascalParser::ProcedureStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActualParameter(pascalParser::ActualParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterwidth(pascalParser::ParameterwidthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGotoStatement(pascalParser::GotoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyStatement_(pascalParser::EmptyStatement_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmpty_(pascalParser::Empty_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructuredStatement(pascalParser::StructuredStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(pascalParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatements(pascalParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalStatement(pascalParser::ConditionalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(pascalParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseStatement(pascalParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseListElement(pascalParser::CaseListElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepetetiveStatement(pascalParser::RepetetiveStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(pascalParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeatStatement(pascalParser::RepeatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(pascalParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForList(pascalParser::ForListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitialValue(pascalParser::InitialValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFinalValue(pascalParser::FinalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithStatement(pascalParser::WithStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordVariableList(pascalParser::RecordVariableListContext *ctx) override {
    return visitChildren(ctx);
  }


};

