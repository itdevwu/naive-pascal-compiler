
// Generated from /home/user/projects/naive-pascal-compiler/grammar/pascal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "pascalListener.hpp"


/**
 * This class provides an empty implementation of pascalListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  pascalBaseListener : public pascalListener {
public:

  virtual void enterProgram(pascalParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(pascalParser::ProgramContext * /*ctx*/) override { }

  virtual void enterProgramHeading(pascalParser::ProgramHeadingContext * /*ctx*/) override { }
  virtual void exitProgramHeading(pascalParser::ProgramHeadingContext * /*ctx*/) override { }

  virtual void enterIdentifier(pascalParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(pascalParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterBlock(pascalParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(pascalParser::BlockContext * /*ctx*/) override { }

  virtual void enterUsesUnitsPart(pascalParser::UsesUnitsPartContext * /*ctx*/) override { }
  virtual void exitUsesUnitsPart(pascalParser::UsesUnitsPartContext * /*ctx*/) override { }

  virtual void enterLabelDeclarationPart(pascalParser::LabelDeclarationPartContext * /*ctx*/) override { }
  virtual void exitLabelDeclarationPart(pascalParser::LabelDeclarationPartContext * /*ctx*/) override { }

  virtual void enterLabel(pascalParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(pascalParser::LabelContext * /*ctx*/) override { }

  virtual void enterConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext * /*ctx*/) override { }
  virtual void exitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext * /*ctx*/) override { }

  virtual void enterConstantDefinition(pascalParser::ConstantDefinitionContext * /*ctx*/) override { }
  virtual void exitConstantDefinition(pascalParser::ConstantDefinitionContext * /*ctx*/) override { }

  virtual void enterConstantChr(pascalParser::ConstantChrContext * /*ctx*/) override { }
  virtual void exitConstantChr(pascalParser::ConstantChrContext * /*ctx*/) override { }

  virtual void enterConstant(pascalParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(pascalParser::ConstantContext * /*ctx*/) override { }

  virtual void enterUnsignedNumber(pascalParser::UnsignedNumberContext * /*ctx*/) override { }
  virtual void exitUnsignedNumber(pascalParser::UnsignedNumberContext * /*ctx*/) override { }

  virtual void enterUnsignedInteger(pascalParser::UnsignedIntegerContext * /*ctx*/) override { }
  virtual void exitUnsignedInteger(pascalParser::UnsignedIntegerContext * /*ctx*/) override { }

  virtual void enterUnsignedReal(pascalParser::UnsignedRealContext * /*ctx*/) override { }
  virtual void exitUnsignedReal(pascalParser::UnsignedRealContext * /*ctx*/) override { }

  virtual void enterSign(pascalParser::SignContext * /*ctx*/) override { }
  virtual void exitSign(pascalParser::SignContext * /*ctx*/) override { }

  virtual void enterBool_(pascalParser::Bool_Context * /*ctx*/) override { }
  virtual void exitBool_(pascalParser::Bool_Context * /*ctx*/) override { }

  virtual void enterString(pascalParser::StringContext * /*ctx*/) override { }
  virtual void exitString(pascalParser::StringContext * /*ctx*/) override { }

  virtual void enterTypeDefinitionPart(pascalParser::TypeDefinitionPartContext * /*ctx*/) override { }
  virtual void exitTypeDefinitionPart(pascalParser::TypeDefinitionPartContext * /*ctx*/) override { }

  virtual void enterTypeDefinition(pascalParser::TypeDefinitionContext * /*ctx*/) override { }
  virtual void exitTypeDefinition(pascalParser::TypeDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionType(pascalParser::FunctionTypeContext * /*ctx*/) override { }
  virtual void exitFunctionType(pascalParser::FunctionTypeContext * /*ctx*/) override { }

  virtual void enterProcedureType(pascalParser::ProcedureTypeContext * /*ctx*/) override { }
  virtual void exitProcedureType(pascalParser::ProcedureTypeContext * /*ctx*/) override { }

  virtual void enterType_(pascalParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(pascalParser::Type_Context * /*ctx*/) override { }

  virtual void enterSimpleType(pascalParser::SimpleTypeContext * /*ctx*/) override { }
  virtual void exitSimpleType(pascalParser::SimpleTypeContext * /*ctx*/) override { }

  virtual void enterScalarType(pascalParser::ScalarTypeContext * /*ctx*/) override { }
  virtual void exitScalarType(pascalParser::ScalarTypeContext * /*ctx*/) override { }

  virtual void enterSubrangeType(pascalParser::SubrangeTypeContext * /*ctx*/) override { }
  virtual void exitSubrangeType(pascalParser::SubrangeTypeContext * /*ctx*/) override { }

  virtual void enterTypeIdentifier(pascalParser::TypeIdentifierContext * /*ctx*/) override { }
  virtual void exitTypeIdentifier(pascalParser::TypeIdentifierContext * /*ctx*/) override { }

  virtual void enterStructuredType(pascalParser::StructuredTypeContext * /*ctx*/) override { }
  virtual void exitStructuredType(pascalParser::StructuredTypeContext * /*ctx*/) override { }

  virtual void enterUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext * /*ctx*/) override { }
  virtual void exitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext * /*ctx*/) override { }

  virtual void enterStringtype(pascalParser::StringtypeContext * /*ctx*/) override { }
  virtual void exitStringtype(pascalParser::StringtypeContext * /*ctx*/) override { }

  virtual void enterArrayType(pascalParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(pascalParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterTypeList(pascalParser::TypeListContext * /*ctx*/) override { }
  virtual void exitTypeList(pascalParser::TypeListContext * /*ctx*/) override { }

  virtual void enterIndexType(pascalParser::IndexTypeContext * /*ctx*/) override { }
  virtual void exitIndexType(pascalParser::IndexTypeContext * /*ctx*/) override { }

  virtual void enterComponentType(pascalParser::ComponentTypeContext * /*ctx*/) override { }
  virtual void exitComponentType(pascalParser::ComponentTypeContext * /*ctx*/) override { }

  virtual void enterRecordType(pascalParser::RecordTypeContext * /*ctx*/) override { }
  virtual void exitRecordType(pascalParser::RecordTypeContext * /*ctx*/) override { }

  virtual void enterFieldList(pascalParser::FieldListContext * /*ctx*/) override { }
  virtual void exitFieldList(pascalParser::FieldListContext * /*ctx*/) override { }

  virtual void enterFixedPart(pascalParser::FixedPartContext * /*ctx*/) override { }
  virtual void exitFixedPart(pascalParser::FixedPartContext * /*ctx*/) override { }

  virtual void enterRecordSection(pascalParser::RecordSectionContext * /*ctx*/) override { }
  virtual void exitRecordSection(pascalParser::RecordSectionContext * /*ctx*/) override { }

  virtual void enterVariantPart(pascalParser::VariantPartContext * /*ctx*/) override { }
  virtual void exitVariantPart(pascalParser::VariantPartContext * /*ctx*/) override { }

  virtual void enterTag(pascalParser::TagContext * /*ctx*/) override { }
  virtual void exitTag(pascalParser::TagContext * /*ctx*/) override { }

  virtual void enterVariant(pascalParser::VariantContext * /*ctx*/) override { }
  virtual void exitVariant(pascalParser::VariantContext * /*ctx*/) override { }

  virtual void enterSetType(pascalParser::SetTypeContext * /*ctx*/) override { }
  virtual void exitSetType(pascalParser::SetTypeContext * /*ctx*/) override { }

  virtual void enterBaseType(pascalParser::BaseTypeContext * /*ctx*/) override { }
  virtual void exitBaseType(pascalParser::BaseTypeContext * /*ctx*/) override { }

  virtual void enterFileType(pascalParser::FileTypeContext * /*ctx*/) override { }
  virtual void exitFileType(pascalParser::FileTypeContext * /*ctx*/) override { }

  virtual void enterPointerType(pascalParser::PointerTypeContext * /*ctx*/) override { }
  virtual void exitPointerType(pascalParser::PointerTypeContext * /*ctx*/) override { }

  virtual void enterVariableDeclarationPart(pascalParser::VariableDeclarationPartContext * /*ctx*/) override { }
  virtual void exitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(pascalParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(pascalParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterProcedureAndFunctionDeclarationPart(pascalParser::ProcedureAndFunctionDeclarationPartContext * /*ctx*/) override { }
  virtual void exitProcedureAndFunctionDeclarationPart(pascalParser::ProcedureAndFunctionDeclarationPartContext * /*ctx*/) override { }

  virtual void enterProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterProcedureDeclaration(pascalParser::ProcedureDeclarationContext * /*ctx*/) override { }
  virtual void exitProcedureDeclaration(pascalParser::ProcedureDeclarationContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(pascalParser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(pascalParser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameterSection(pascalParser::FormalParameterSectionContext * /*ctx*/) override { }
  virtual void exitFormalParameterSection(pascalParser::FormalParameterSectionContext * /*ctx*/) override { }

  virtual void enterParameterGroup(pascalParser::ParameterGroupContext * /*ctx*/) override { }
  virtual void exitParameterGroup(pascalParser::ParameterGroupContext * /*ctx*/) override { }

  virtual void enterIdentifierList(pascalParser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(pascalParser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterConstList(pascalParser::ConstListContext * /*ctx*/) override { }
  virtual void exitConstList(pascalParser::ConstListContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(pascalParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(pascalParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterResultType(pascalParser::ResultTypeContext * /*ctx*/) override { }
  virtual void exitResultType(pascalParser::ResultTypeContext * /*ctx*/) override { }

  virtual void enterStatement(pascalParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(pascalParser::StatementContext * /*ctx*/) override { }

  virtual void enterUnlabelledStatement(pascalParser::UnlabelledStatementContext * /*ctx*/) override { }
  virtual void exitUnlabelledStatement(pascalParser::UnlabelledStatementContext * /*ctx*/) override { }

  virtual void enterSimpleStatement(pascalParser::SimpleStatementContext * /*ctx*/) override { }
  virtual void exitSimpleStatement(pascalParser::SimpleStatementContext * /*ctx*/) override { }

  virtual void enterAssignmentStatement(pascalParser::AssignmentStatementContext * /*ctx*/) override { }
  virtual void exitAssignmentStatement(pascalParser::AssignmentStatementContext * /*ctx*/) override { }

  virtual void enterVariable(pascalParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(pascalParser::VariableContext * /*ctx*/) override { }

  virtual void enterExpression(pascalParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(pascalParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterRelationaloperator(pascalParser::RelationaloperatorContext * /*ctx*/) override { }
  virtual void exitRelationaloperator(pascalParser::RelationaloperatorContext * /*ctx*/) override { }

  virtual void enterSimpleExpression(pascalParser::SimpleExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleExpression(pascalParser::SimpleExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveoperator(pascalParser::AdditiveoperatorContext * /*ctx*/) override { }
  virtual void exitAdditiveoperator(pascalParser::AdditiveoperatorContext * /*ctx*/) override { }

  virtual void enterTerm(pascalParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(pascalParser::TermContext * /*ctx*/) override { }

  virtual void enterMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext * /*ctx*/) override { }
  virtual void exitMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext * /*ctx*/) override { }

  virtual void enterSignedFactor(pascalParser::SignedFactorContext * /*ctx*/) override { }
  virtual void exitSignedFactor(pascalParser::SignedFactorContext * /*ctx*/) override { }

  virtual void enterFactor(pascalParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(pascalParser::FactorContext * /*ctx*/) override { }

  virtual void enterUnsignedConstant(pascalParser::UnsignedConstantContext * /*ctx*/) override { }
  virtual void exitUnsignedConstant(pascalParser::UnsignedConstantContext * /*ctx*/) override { }

  virtual void enterFunctionDesignator(pascalParser::FunctionDesignatorContext * /*ctx*/) override { }
  virtual void exitFunctionDesignator(pascalParser::FunctionDesignatorContext * /*ctx*/) override { }

  virtual void enterParameterList(pascalParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(pascalParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterSet_(pascalParser::Set_Context * /*ctx*/) override { }
  virtual void exitSet_(pascalParser::Set_Context * /*ctx*/) override { }

  virtual void enterElementList(pascalParser::ElementListContext * /*ctx*/) override { }
  virtual void exitElementList(pascalParser::ElementListContext * /*ctx*/) override { }

  virtual void enterElement(pascalParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(pascalParser::ElementContext * /*ctx*/) override { }

  virtual void enterProcedureStatement(pascalParser::ProcedureStatementContext * /*ctx*/) override { }
  virtual void exitProcedureStatement(pascalParser::ProcedureStatementContext * /*ctx*/) override { }

  virtual void enterActualParameter(pascalParser::ActualParameterContext * /*ctx*/) override { }
  virtual void exitActualParameter(pascalParser::ActualParameterContext * /*ctx*/) override { }

  virtual void enterParameterwidth(pascalParser::ParameterwidthContext * /*ctx*/) override { }
  virtual void exitParameterwidth(pascalParser::ParameterwidthContext * /*ctx*/) override { }

  virtual void enterGotoStatement(pascalParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(pascalParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement_(pascalParser::EmptyStatement_Context * /*ctx*/) override { }
  virtual void exitEmptyStatement_(pascalParser::EmptyStatement_Context * /*ctx*/) override { }

  virtual void enterEmpty_(pascalParser::Empty_Context * /*ctx*/) override { }
  virtual void exitEmpty_(pascalParser::Empty_Context * /*ctx*/) override { }

  virtual void enterStructuredStatement(pascalParser::StructuredStatementContext * /*ctx*/) override { }
  virtual void exitStructuredStatement(pascalParser::StructuredStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(pascalParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(pascalParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterStatements(pascalParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(pascalParser::StatementsContext * /*ctx*/) override { }

  virtual void enterConditionalStatement(pascalParser::ConditionalStatementContext * /*ctx*/) override { }
  virtual void exitConditionalStatement(pascalParser::ConditionalStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(pascalParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(pascalParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterCaseStatement(pascalParser::CaseStatementContext * /*ctx*/) override { }
  virtual void exitCaseStatement(pascalParser::CaseStatementContext * /*ctx*/) override { }

  virtual void enterCaseListElement(pascalParser::CaseListElementContext * /*ctx*/) override { }
  virtual void exitCaseListElement(pascalParser::CaseListElementContext * /*ctx*/) override { }

  virtual void enterRepetetiveStatement(pascalParser::RepetetiveStatementContext * /*ctx*/) override { }
  virtual void exitRepetetiveStatement(pascalParser::RepetetiveStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(pascalParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(pascalParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterRepeatStatement(pascalParser::RepeatStatementContext * /*ctx*/) override { }
  virtual void exitRepeatStatement(pascalParser::RepeatStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(pascalParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(pascalParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForList(pascalParser::ForListContext * /*ctx*/) override { }
  virtual void exitForList(pascalParser::ForListContext * /*ctx*/) override { }

  virtual void enterInitialValue(pascalParser::InitialValueContext * /*ctx*/) override { }
  virtual void exitInitialValue(pascalParser::InitialValueContext * /*ctx*/) override { }

  virtual void enterFinalValue(pascalParser::FinalValueContext * /*ctx*/) override { }
  virtual void exitFinalValue(pascalParser::FinalValueContext * /*ctx*/) override { }

  virtual void enterWithStatement(pascalParser::WithStatementContext * /*ctx*/) override { }
  virtual void exitWithStatement(pascalParser::WithStatementContext * /*ctx*/) override { }

  virtual void enterRecordVariableList(pascalParser::RecordVariableListContext * /*ctx*/) override { }
  virtual void exitRecordVariableList(pascalParser::RecordVariableListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

