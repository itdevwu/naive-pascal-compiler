/**
 * @file      Visitor.h
 * @brief     通过Visitor模式访问语法树
 * @author    Ziheng Mao, Aolun Xie, Kangtong Li, Jianlong Ban, Junhui Li, Yongqi Qiao
 * @date      2022/4/20
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
        llvm::Value *visitVariable(pascalParser::VariableContext *context);
        llvm::Value *visitExpression(pascalParser::ExpressionContext *context);
        llvm::Value *visitRelationaloperator(pascalParser::RelationaloperatorContext *context, llvm::Value *L, llvm::Value *R);
    
    };
}