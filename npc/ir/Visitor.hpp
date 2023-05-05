/**
 * @file      Visitor.h
 * @brief     通过Visitor模式访问语法树
 * @author    Xiyue Zu, Yiran Ren
 * @date      2023/4/12
 * @copyright GNU General Public License, version 3 (GPL-3.0)
 *
 * 本文件定义了Visitor模式的接口。
 */

#pragma once

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

        /**
         * @brief 从作用域中查找变量
         *
         * @param name 变量名
         * @return 变量值
         */
        llvm::Value *getVariable(const std::string &name);

        /**
         * @brief 从文件中生成语法树
         *
         * @param path 文件路径
         */
        void fromFile(const std::string &path);

        /**
         * @brief 访问程序
         *
         * @param context 语法树中表示program分支的上下文
         */
        void visitProgram(pascalParser::ProgramContext *context);
        /**
         * @brief 访问程序头
         *
         * @param context 语法树中表示programHeading分支的上下文
         * @return 程序名
         */
        std::string visitProgramHeading(pascalParser::ProgramHeadingContext *context);

        /**
         * @brief 访问标识符
         *
         * @param context 语法树中表示标识符分支的上下文
         * @return 标识符的字面值
         */
        std::string visitIdentifier(pascalParser::IdentifierContext *context);
        /**
         * @brief 访问程序/函数块
         *
         * @param context 语法树中表示程序/函数块分支的上下文
         * @param function 程序/函数块所属的函数
         * @param isGlobal 是否是主函数
         */
        void visitBlock(pascalParser::BlockContext *context, llvm::Function *function, bool isGlobal = false);
        /**
         * @brief 访问语句块
         *
         * @param context 语法树中表示语句块分支的上下文
         * @param function 该语句块所属的函数
         */
        void visitCompoundStatement(pascalParser::CompoundStatementContext *context, llvm::Function *function);
        /**
         * @brief 访问语句集合
         *
         * @param context 语法树中表示语句集合分支的上下文
         */
        void visitStatement(pascalParser::StatementContext *context, llvm::Function *function);
        void visitUnlabelledStatement(pascalParser::UnlabelledStatementContext *context, llvm::Function *function);
        void visitSimpleStatement(pascalParser::SimpleStatementContext *context, llvm::Function *function);
        void visitGotoStatement(pascalParser::GotoStatementContext *context);
        void visitProcedureStatement(pascalParser::ProcedureStatementContext *context);
        //void visitAssignmentStatement(pascalParser::AssignmentStatementContext *context);
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
        llvm::Type *visitType_(pascalParser::Type_Context *context);
        llvm::Type *visitSimpleType(pascalParser::SimpleTypeContext *context);
        llvm::Type *visitTypeIdentifier(pascalParser::TypeIdentifierContext *context, bool isVar);
        //llvm::Value *visitRelationaloperator(pascalParser::Relationalop, bool isVareratorContext *context, llvm::Value *L, llvm::Value *R);
        


        // zxy
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
        //void visitStatement(pascalParser::StatementContext *context, llvm::Function *function);
        //void visitUnlabelledStatement(pascalParser::UnlabelledStatementContext *context, int *function);
        //void visitCompoundStatement(pascalParser::CompoundStatementContext *context, llvm::Function* function);
        void visitWithStatement(pascalParser::WithStatementContext *context, llvm::Function* function);

        void visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *context, bool isGlobal = false);
        llvm::Type *visitVariableDeclaration(pascalParser::VariableDeclarationContext *context, bool isGlobal = false);
        llvm::Type *visitStructuredType(pascalParser::StructuredTypeContext *context, std::vector<std::string> idList);
        llvm::Type *visitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *context, std::vector<std::string> idList);
        llvm::Type *visitArrayType(pascalParser::ArrayTypeContext *context, std::vector<std::string> idList);
        llvm::Type *visitComponentType(pascalParser::ComponentTypeContext *context, std::vector<std::string> idList, int eleNum);
        std::vector<int> visitTypeList(pascalParser::TypeListContext *context);
        std::vector<int> visitIndexType(pascalParser::IndexTypeContext *context);
        std::vector<int> visitSubrangeType(pascalParser::SubrangeTypeContext *context);
        llvm::Type *visitType_(pascalParser::Type_Context *context, std::vector<std::string> idList, int eleNum);
    };
}
