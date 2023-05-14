#ifndef VISITOR_HPP
#define VISITOR_HPP

#include <vector>

#include <llvm/Support/TargetSelect.h>
#include <llvm/Support/raw_ostream.h>

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Constants.h>
#include "../ast/pascalLexer.hpp"
#include "../ast/pascalBaseVisitor.hpp"

#include "Scope.hpp"


namespace Pascal
{
    class Visitor
    {
    public:
        std::unique_ptr<llvm::LLVMContext> llvm_context;
        llvm::IRBuilder<> builder;
        std::unique_ptr<llvm::Module> module;
        std::vector<Scope> scopes; ///< 变量作用域
        std::vector<std::string> FormalParaIdList;
        std::unordered_map<std::string, std::vector<int>> arrayRanges; ///< 存放所有array的下标范围，访问array时是计算元素偏移量的依据。
        std::vector<int> arrayRangeTemp;                               ///< 暂存一个array的下标范围。
        bool readlnArgFlag = false;                                    ///< readln参数标记，为真时visitFactorVar返回地址而非值。
        bool arrayIndexFlag = false;                                   ///< array下标标记，为真时visitFactorVar返回值而非地址，无论readlnArgFlag如何。

        Visitor(std::string filename) : llvm_context(std::make_unique<llvm::LLVMContext>()),
                                        builder(*llvm_context),
                                        module(std::make_unique<llvm::Module>(filename, *llvm_context)) {}

        llvm::Value *getVariable(const std::string &name);

        void fromFile(const std::string &path);

        void visitProgram(pascalParser::ProgramContext *context);
        std::string visitProgramHeading(pascalParser::ProgramHeadingContext *context);

        std::string visitIdentifier(pascalParser::IdentifierContext *context);
        void visitBlock(pascalParser::BlockContext *context, llvm::Function *function, bool isGlobal = false);
        void visitCompoundStatement(pascalParser::CompoundStatementContext *context, llvm::Function *function);
        void visitStatement(pascalParser::StatementContext *context, llvm::Function *function);
        void visitUnlabelledStatement(pascalParser::UnlabelledStatementContext *context, llvm::Function *function);
        void visitSimpleStatement(pascalParser::SimpleStatementContext *context, llvm::Function *function);
        void visitGotoStatement(pascalParser::GotoStatementContext *context);
        void visitProcedureStatement(pascalParser::ProcedureStatementContext *context);
        void visitEmptyStatement_(pascalParser::EmptyStatement_Context *context);
        void visitEmpty_(pascalParser::Empty_Context *context);
        std::vector<llvm::Value *> visitParameterList(pascalParser::ParameterListContext *context, bool changeFP = false);
        llvm::Value *visitActualParameter(pascalParser::ActualParameterContext *context);
        llvm::Value *visitUnsignedConstant(pascalParser::UnsignedConstantContext *context);
        void visitProcedureAndFunctionDeclarationPart(pascalParser::ProcedureAndFunctionDeclarationPartContext *context);
        void visitProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext *context);
        void visitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *context);
        void visitFormalParameterList(pascalParser::FormalParameterListContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);
        void visitFormalParameterSection(pascalParser::FormalParameterSectionContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);
        void visitParameterGroup(pascalParser::ParameterGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar);
        std::vector<std::string> visitIdentifierList(pascalParser::IdentifierListContext *context);
        void visitFunctionDeclaration(pascalParser::FunctionDeclarationContext *context);
        void visitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *context);
        void visitConstantDefinition(pascalParser::ConstantDefinitionContext *context);
        void visitConstant(pascalParser::ConstantContext *context, auto id);
        std::string visitString(pascalParser::StringContext *context);
        int visitSign(pascalParser::SignContext *context);
        void visitTypeDefinitionPart(pascalParser::TypeDefinitionPartContext *context);
        void visitTypeDefinition(pascalParser::TypeDefinitionContext *context);
        llvm::Type *visitSimpleType(pascalParser::SimpleTypeContext *context);
        llvm::Type *visitTypeIdentifier(pascalParser::TypeIdentifierContext *context, bool isVar);
        


        void visitAssignmentStatement(pascalParser::AssignmentStatementContext *context);
        llvm::Value *visitVariable(pascalParser::VariableContext *context);
        llvm::Value *visitExpression(pascalParser::ExpressionContext *context);
        llvm::Value *visitRelationaloperator(pascalParser::RelationaloperatorContext *context, llvm::Value *L, llvm::Value *R);
        llvm::Value *visitSimpleExpression(pascalParser::SimpleExpressionContext *context);
        llvm::Value *visitAdditiveoperator(pascalParser::AdditiveoperatorContext *context, llvm::Value *L, llvm::Value *R);
        llvm::Value *visitTerm(pascalParser::TermContext *context);
        llvm::Value *visitMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext *context, llvm::Value *L, llvm::Value *R);
        llvm::Value *visitSignedFactor(pascalParser::SignedFactorContext *context);
        llvm::Value *visitFactor(pascalParser::FactorContext *context, int flag, float flag_fp, llvm::ConstantInt* flag_v, llvm::Constant* flag_v_fp);
        llvm::Value *visitFunctionDesignator(pascalParser::FunctionDesignatorContext *context);
        llvm::Constant *visitUnsignedNumber(pascalParser::UnsignedNumberContext *context);
        int visitUnsignedInteger(pascalParser::UnsignedIntegerContext *context);
        float visitUnsignedReal(pascalParser::UnsignedRealContext *context);
        llvm::Value *visitConstantChr(pascalParser::ConstantChrContext *context);
        llvm::Value *visitBool_(pascalParser::Bool_Context *context);
        llvm::Value *visitSet_(pascalParser::Set_Context *context);
        void visitStructuredStatement(pascalParser::StructuredStatementContext *context, llvm::Function *function);
        void visitRepetetiveStatement(pascalParser::RepetetiveStatementContext *context, llvm::Function *function);
        void visitForStatement(pascalParser::ForStatementContext *context, llvm::Function *function);
        std::vector<llvm::Value *> visitForList(pascalParser::ForListContext *context);
        llvm::Value *visitInitialValue(pascalParser::InitialValueContext *context);
        llvm::Value *visitFinalValue(pascalParser::FinalValueContext *context);
        void visitRepeatStatement(pascalParser::RepeatStatementContext *context, llvm::Function* function);
        void visitWhileStatement(pascalParser::WhileStatementContext *context, llvm::Function* function);
        void visitStatements(pascalParser::StatementsContext *context, llvm::Function *function);
        void visitConditionalStatement(pascalParser::ConditionalStatementContext *context, llvm::Function *function);
        void visitIfStatement(pascalParser::IfStatementContext *context, llvm::Function *function);
        tatementContext *context, llvm::Function* function);
        void visitWithStatement(pascalParser::WithStatementContext *context, llvm::Function* function);

        void visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *context, bool isGlobal = false);
        llvm::Type *visitVariableDeclaration(pascalParser::VariableDeclarationContext *context, bool isGlobal = false);
        llvm::Type *visitStructuredType(pascalParser::StructuredTypeContext *context, std::vector<std::string> idList);
        llvm::Type *visitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *context, std::vector<std::string> idList);
        llvm::Type *visitArrayType(pascalParser::ArrayTypeContext *context, std::vector<std::string> idList);
        llvm::Type *visitComponentType(pascalParser::ComponentTypeContext *context, std::vector<std::string> idList);
        std::vector<int> visitTypeList(pascalParser::TypeListContext *context, std::vector<std::string> idList);
        std::vector<int> visitIndexType(pascalParser::IndexTypeContext *context);
        std::vector<int> visitSubrangeType(pascalParser::SubrangeTypeContext *context);
        llvm::Type *visitType_(pascalParser::Type_Context *context, std::vector<std::string> idList);
    };
}

#endif