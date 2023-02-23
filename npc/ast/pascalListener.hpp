
// Generated from /home/user/projects/naive-pascal-compiler/grammar/pascal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "pascalParser.hpp"


/**
 * This interface defines an abstract listener for a parse tree produced by pascalParser.
 */
class  pascalListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(pascalParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(pascalParser::ProgramContext *ctx) = 0;

  virtual void enterProgramHeading(pascalParser::ProgramHeadingContext *ctx) = 0;
  virtual void exitProgramHeading(pascalParser::ProgramHeadingContext *ctx) = 0;

  virtual void enterIdentifier(pascalParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(pascalParser::IdentifierContext *ctx) = 0;

  virtual void enterBlock(pascalParser::BlockContext *ctx) = 0;
  virtual void exitBlock(pascalParser::BlockContext *ctx) = 0;

  virtual void enterUsesUnitsPart(pascalParser::UsesUnitsPartContext *ctx) = 0;
  virtual void exitUsesUnitsPart(pascalParser::UsesUnitsPartContext *ctx) = 0;

  virtual void enterLabelDeclarationPart(pascalParser::LabelDeclarationPartContext *ctx) = 0;
  virtual void exitLabelDeclarationPart(pascalParser::LabelDeclarationPartContext *ctx) = 0;

  virtual void enterLabel(pascalParser::LabelContext *ctx) = 0;
  virtual void exitLabel(pascalParser::LabelContext *ctx) = 0;

  virtual void enterConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *ctx) = 0;
  virtual void exitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *ctx) = 0;

  virtual void enterConstantDefinition(pascalParser::ConstantDefinitionContext *ctx) = 0;
  virtual void exitConstantDefinition(pascalParser::ConstantDefinitionContext *ctx) = 0;

  virtual void enterConstantChr(pascalParser::ConstantChrContext *ctx) = 0;
  virtual void exitConstantChr(pascalParser::ConstantChrContext *ctx) = 0;

  virtual void enterConstant(pascalParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(pascalParser::ConstantContext *ctx) = 0;

  virtual void enterUnsignedNumber(pascalParser::UnsignedNumberContext *ctx) = 0;
  virtual void exitUnsignedNumber(pascalParser::UnsignedNumberContext *ctx) = 0;

  virtual void enterUnsignedInteger(pascalParser::UnsignedIntegerContext *ctx) = 0;
  virtual void exitUnsignedInteger(pascalParser::UnsignedIntegerContext *ctx) = 0;

  virtual void enterUnsignedReal(pascalParser::UnsignedRealContext *ctx) = 0;
  virtual void exitUnsignedReal(pascalParser::UnsignedRealContext *ctx) = 0;

  virtual void enterSign(pascalParser::SignContext *ctx) = 0;
  virtual void exitSign(pascalParser::SignContext *ctx) = 0;

  virtual void enterBool_(pascalParser::Bool_Context *ctx) = 0;
  virtual void exitBool_(pascalParser::Bool_Context *ctx) = 0;

  virtual void enterString(pascalParser::StringContext *ctx) = 0;
  virtual void exitString(pascalParser::StringContext *ctx) = 0;

  virtual void enterTypeDefinitionPart(pascalParser::TypeDefinitionPartContext *ctx) = 0;
  virtual void exitTypeDefinitionPart(pascalParser::TypeDefinitionPartContext *ctx) = 0;

  virtual void enterTypeDefinition(pascalParser::TypeDefinitionContext *ctx) = 0;
  virtual void exitTypeDefinition(pascalParser::TypeDefinitionContext *ctx) = 0;

  virtual void enterFunctionType(pascalParser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(pascalParser::FunctionTypeContext *ctx) = 0;

  virtual void enterProcedureType(pascalParser::ProcedureTypeContext *ctx) = 0;
  virtual void exitProcedureType(pascalParser::ProcedureTypeContext *ctx) = 0;

  virtual void enterType_(pascalParser::Type_Context *ctx) = 0;
  virtual void exitType_(pascalParser::Type_Context *ctx) = 0;

  virtual void enterSimpleType(pascalParser::SimpleTypeContext *ctx) = 0;
  virtual void exitSimpleType(pascalParser::SimpleTypeContext *ctx) = 0;

  virtual void enterScalarType(pascalParser::ScalarTypeContext *ctx) = 0;
  virtual void exitScalarType(pascalParser::ScalarTypeContext *ctx) = 0;

  virtual void enterSubrangeType(pascalParser::SubrangeTypeContext *ctx) = 0;
  virtual void exitSubrangeType(pascalParser::SubrangeTypeContext *ctx) = 0;

  virtual void enterTypeIdentifier(pascalParser::TypeIdentifierContext *ctx) = 0;
  virtual void exitTypeIdentifier(pascalParser::TypeIdentifierContext *ctx) = 0;

  virtual void enterStructuredType(pascalParser::StructuredTypeContext *ctx) = 0;
  virtual void exitStructuredType(pascalParser::StructuredTypeContext *ctx) = 0;

  virtual void enterUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *ctx) = 0;
  virtual void exitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *ctx) = 0;

  virtual void enterStringtype(pascalParser::StringtypeContext *ctx) = 0;
  virtual void exitStringtype(pascalParser::StringtypeContext *ctx) = 0;

  virtual void enterArrayType(pascalParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(pascalParser::ArrayTypeContext *ctx) = 0;

  virtual void enterTypeList(pascalParser::TypeListContext *ctx) = 0;
  virtual void exitTypeList(pascalParser::TypeListContext *ctx) = 0;

  virtual void enterIndexType(pascalParser::IndexTypeContext *ctx) = 0;
  virtual void exitIndexType(pascalParser::IndexTypeContext *ctx) = 0;

  virtual void enterComponentType(pascalParser::ComponentTypeContext *ctx) = 0;
  virtual void exitComponentType(pascalParser::ComponentTypeContext *ctx) = 0;

  virtual void enterRecordType(pascalParser::RecordTypeContext *ctx) = 0;
  virtual void exitRecordType(pascalParser::RecordTypeContext *ctx) = 0;

  virtual void enterFieldList(pascalParser::FieldListContext *ctx) = 0;
  virtual void exitFieldList(pascalParser::FieldListContext *ctx) = 0;

  virtual void enterFixedPart(pascalParser::FixedPartContext *ctx) = 0;
  virtual void exitFixedPart(pascalParser::FixedPartContext *ctx) = 0;

  virtual void enterRecordSection(pascalParser::RecordSectionContext *ctx) = 0;
  virtual void exitRecordSection(pascalParser::RecordSectionContext *ctx) = 0;

  virtual void enterVariantPart(pascalParser::VariantPartContext *ctx) = 0;
  virtual void exitVariantPart(pascalParser::VariantPartContext *ctx) = 0;

  virtual void enterTag(pascalParser::TagContext *ctx) = 0;
  virtual void exitTag(pascalParser::TagContext *ctx) = 0;

  virtual void enterVariant(pascalParser::VariantContext *ctx) = 0;
  virtual void exitVariant(pascalParser::VariantContext *ctx) = 0;

  virtual void enterSetType(pascalParser::SetTypeContext *ctx) = 0;
  virtual void exitSetType(pascalParser::SetTypeContext *ctx) = 0;

  virtual void enterBaseType(pascalParser::BaseTypeContext *ctx) = 0;
  virtual void exitBaseType(pascalParser::BaseTypeContext *ctx) = 0;

  virtual void enterFileType(pascalParser::FileTypeContext *ctx) = 0;
  virtual void exitFileType(pascalParser::FileTypeContext *ctx) = 0;

  virtual void enterPointerType(pascalParser::PointerTypeContext *ctx) = 0;
  virtual void exitPointerType(pascalParser::PointerTypeContext *ctx) = 0;

  virtual void enterVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *ctx) = 0;
  virtual void exitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *ctx) = 0;

  virtual void enterVariableDeclaration(pascalParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(pascalParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterProcedureAndFunctionDeclarationPart(pascalParser::ProcedureAndFunctionDeclarationPartContext *ctx) = 0;
  virtual void exitProcedureAndFunctionDeclarationPart(pascalParser::ProcedureAndFunctionDeclarationPartContext *ctx) = 0;

  virtual void enterProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext *ctx) = 0;
  virtual void exitProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext *ctx) = 0;

  virtual void enterProcedureDeclaration(pascalParser::ProcedureDeclarationContext *ctx) = 0;
  virtual void exitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *ctx) = 0;

  virtual void enterFormalParameterList(pascalParser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(pascalParser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameterSection(pascalParser::FormalParameterSectionContext *ctx) = 0;
  virtual void exitFormalParameterSection(pascalParser::FormalParameterSectionContext *ctx) = 0;

  virtual void enterParameterGroup(pascalParser::ParameterGroupContext *ctx) = 0;
  virtual void exitParameterGroup(pascalParser::ParameterGroupContext *ctx) = 0;

  virtual void enterIdentifierList(pascalParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(pascalParser::IdentifierListContext *ctx) = 0;

  virtual void enterConstList(pascalParser::ConstListContext *ctx) = 0;
  virtual void exitConstList(pascalParser::ConstListContext *ctx) = 0;

  virtual void enterFunctionDeclaration(pascalParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(pascalParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterResultType(pascalParser::ResultTypeContext *ctx) = 0;
  virtual void exitResultType(pascalParser::ResultTypeContext *ctx) = 0;

  virtual void enterStatement(pascalParser::StatementContext *ctx) = 0;
  virtual void exitStatement(pascalParser::StatementContext *ctx) = 0;

  virtual void enterUnlabelledStatement(pascalParser::UnlabelledStatementContext *ctx) = 0;
  virtual void exitUnlabelledStatement(pascalParser::UnlabelledStatementContext *ctx) = 0;

  virtual void enterSimpleStatement(pascalParser::SimpleStatementContext *ctx) = 0;
  virtual void exitSimpleStatement(pascalParser::SimpleStatementContext *ctx) = 0;

  virtual void enterAssignmentStatement(pascalParser::AssignmentStatementContext *ctx) = 0;
  virtual void exitAssignmentStatement(pascalParser::AssignmentStatementContext *ctx) = 0;

  virtual void enterVariable(pascalParser::VariableContext *ctx) = 0;
  virtual void exitVariable(pascalParser::VariableContext *ctx) = 0;

  virtual void enterExpression(pascalParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(pascalParser::ExpressionContext *ctx) = 0;

  virtual void enterRelationaloperator(pascalParser::RelationaloperatorContext *ctx) = 0;
  virtual void exitRelationaloperator(pascalParser::RelationaloperatorContext *ctx) = 0;

  virtual void enterSimpleExpression(pascalParser::SimpleExpressionContext *ctx) = 0;
  virtual void exitSimpleExpression(pascalParser::SimpleExpressionContext *ctx) = 0;

  virtual void enterAdditiveoperator(pascalParser::AdditiveoperatorContext *ctx) = 0;
  virtual void exitAdditiveoperator(pascalParser::AdditiveoperatorContext *ctx) = 0;

  virtual void enterTerm(pascalParser::TermContext *ctx) = 0;
  virtual void exitTerm(pascalParser::TermContext *ctx) = 0;

  virtual void enterMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext *ctx) = 0;
  virtual void exitMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext *ctx) = 0;

  virtual void enterSignedFactor(pascalParser::SignedFactorContext *ctx) = 0;
  virtual void exitSignedFactor(pascalParser::SignedFactorContext *ctx) = 0;

  virtual void enterFactor(pascalParser::FactorContext *ctx) = 0;
  virtual void exitFactor(pascalParser::FactorContext *ctx) = 0;

  virtual void enterUnsignedConstant(pascalParser::UnsignedConstantContext *ctx) = 0;
  virtual void exitUnsignedConstant(pascalParser::UnsignedConstantContext *ctx) = 0;

  virtual void enterFunctionDesignator(pascalParser::FunctionDesignatorContext *ctx) = 0;
  virtual void exitFunctionDesignator(pascalParser::FunctionDesignatorContext *ctx) = 0;

  virtual void enterParameterList(pascalParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(pascalParser::ParameterListContext *ctx) = 0;

  virtual void enterSet_(pascalParser::Set_Context *ctx) = 0;
  virtual void exitSet_(pascalParser::Set_Context *ctx) = 0;

  virtual void enterElementList(pascalParser::ElementListContext *ctx) = 0;
  virtual void exitElementList(pascalParser::ElementListContext *ctx) = 0;

  virtual void enterElement(pascalParser::ElementContext *ctx) = 0;
  virtual void exitElement(pascalParser::ElementContext *ctx) = 0;

  virtual void enterProcedureStatement(pascalParser::ProcedureStatementContext *ctx) = 0;
  virtual void exitProcedureStatement(pascalParser::ProcedureStatementContext *ctx) = 0;

  virtual void enterActualParameter(pascalParser::ActualParameterContext *ctx) = 0;
  virtual void exitActualParameter(pascalParser::ActualParameterContext *ctx) = 0;

  virtual void enterParameterwidth(pascalParser::ParameterwidthContext *ctx) = 0;
  virtual void exitParameterwidth(pascalParser::ParameterwidthContext *ctx) = 0;

  virtual void enterGotoStatement(pascalParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(pascalParser::GotoStatementContext *ctx) = 0;

  virtual void enterEmptyStatement_(pascalParser::EmptyStatement_Context *ctx) = 0;
  virtual void exitEmptyStatement_(pascalParser::EmptyStatement_Context *ctx) = 0;

  virtual void enterEmpty_(pascalParser::Empty_Context *ctx) = 0;
  virtual void exitEmpty_(pascalParser::Empty_Context *ctx) = 0;

  virtual void enterStructuredStatement(pascalParser::StructuredStatementContext *ctx) = 0;
  virtual void exitStructuredStatement(pascalParser::StructuredStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(pascalParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(pascalParser::CompoundStatementContext *ctx) = 0;

  virtual void enterStatements(pascalParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(pascalParser::StatementsContext *ctx) = 0;

  virtual void enterConditionalStatement(pascalParser::ConditionalStatementContext *ctx) = 0;
  virtual void exitConditionalStatement(pascalParser::ConditionalStatementContext *ctx) = 0;

  virtual void enterIfStatement(pascalParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(pascalParser::IfStatementContext *ctx) = 0;

  virtual void enterCaseStatement(pascalParser::CaseStatementContext *ctx) = 0;
  virtual void exitCaseStatement(pascalParser::CaseStatementContext *ctx) = 0;

  virtual void enterCaseListElement(pascalParser::CaseListElementContext *ctx) = 0;
  virtual void exitCaseListElement(pascalParser::CaseListElementContext *ctx) = 0;

  virtual void enterRepetetiveStatement(pascalParser::RepetetiveStatementContext *ctx) = 0;
  virtual void exitRepetetiveStatement(pascalParser::RepetetiveStatementContext *ctx) = 0;

  virtual void enterWhileStatement(pascalParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(pascalParser::WhileStatementContext *ctx) = 0;

  virtual void enterRepeatStatement(pascalParser::RepeatStatementContext *ctx) = 0;
  virtual void exitRepeatStatement(pascalParser::RepeatStatementContext *ctx) = 0;

  virtual void enterForStatement(pascalParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(pascalParser::ForStatementContext *ctx) = 0;

  virtual void enterForList(pascalParser::ForListContext *ctx) = 0;
  virtual void exitForList(pascalParser::ForListContext *ctx) = 0;

  virtual void enterInitialValue(pascalParser::InitialValueContext *ctx) = 0;
  virtual void exitInitialValue(pascalParser::InitialValueContext *ctx) = 0;

  virtual void enterFinalValue(pascalParser::FinalValueContext *ctx) = 0;
  virtual void exitFinalValue(pascalParser::FinalValueContext *ctx) = 0;

  virtual void enterWithStatement(pascalParser::WithStatementContext *ctx) = 0;
  virtual void exitWithStatement(pascalParser::WithStatementContext *ctx) = 0;

  virtual void enterRecordVariableList(pascalParser::RecordVariableListContext *ctx) = 0;
  virtual void exitRecordVariableList(pascalParser::RecordVariableListContext *ctx) = 0;


};

