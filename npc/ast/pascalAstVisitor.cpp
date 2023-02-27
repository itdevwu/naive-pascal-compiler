#include "pascalAstVisitor.hpp"

namespace npc::ast
{
std::any AstVisitor::visitProgram(pascalParser::ProgramContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitProgramHeading(pascalParser::ProgramHeadingContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitIdentifier(pascalParser::IdentifierContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitBlock(pascalParser::BlockContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitUsesUnitsPart(pascalParser::UsesUnitsPartContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitLabelDeclarationPart(pascalParser::LabelDeclarationPartContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitLabel(pascalParser::LabelContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitConstantDefinitionPart(pascalParser::ConstantDefinitionPartContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitConstantDefinition(pascalParser::ConstantDefinitionContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitConstantChr(pascalParser::ConstantChrContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitConstant(pascalParser::ConstantContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitUnsignedNumber(pascalParser::UnsignedNumberContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitUnsignedInteger(pascalParser::UnsignedIntegerContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitUnsignedReal(pascalParser::UnsignedRealContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitSign(pascalParser::SignContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitBool_(pascalParser::Bool_Context *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitString(pascalParser::StringContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitTypeDefinitionPart(pascalParser::TypeDefinitionPartContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitTypeDefinition(pascalParser::TypeDefinitionContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFunctionType(pascalParser::FunctionTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitProcedureType(pascalParser::ProcedureTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitType_(pascalParser::Type_Context *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitSimpleType(pascalParser::SimpleTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitScalarType(pascalParser::ScalarTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitSubrangeType(pascalParser::SubrangeTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitTypeIdentifier(pascalParser::TypeIdentifierContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitStructuredType(pascalParser::StructuredTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitUnpackedStructuredType(pascalParser::UnpackedStructuredTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitStringtype(pascalParser::StringtypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitArrayType(pascalParser::ArrayTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitTypeList(pascalParser::TypeListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitIndexType(pascalParser::IndexTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitComponentType(pascalParser::ComponentTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitRecordType(pascalParser::RecordTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFieldList(pascalParser::FieldListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFixedPart(pascalParser::FixedPartContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitRecordSection(pascalParser::RecordSectionContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitVariantPart(pascalParser::VariantPartContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitTag(pascalParser::TagContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitVariant(pascalParser::VariantContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitSetType(pascalParser::SetTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitBaseType(pascalParser::BaseTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFileType(pascalParser::FileTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitPointerType(pascalParser::PointerTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitVariableDeclarationPart(pascalParser::VariableDeclarationPartContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitVariableDeclaration(pascalParser::VariableDeclarationContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitProcedureAndFunctionDeclarationPart(
    pascalParser::ProcedureAndFunctionDeclarationPartContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitProcedureOrFunctionDeclaration(pascalParser::ProcedureOrFunctionDeclarationContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitProcedureDeclaration(pascalParser::ProcedureDeclarationContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFormalParameterList(pascalParser::FormalParameterListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFormalParameterSection(pascalParser::FormalParameterSectionContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitParameterGroup(pascalParser::ParameterGroupContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitIdentifierList(pascalParser::IdentifierListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitConstList(pascalParser::ConstListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFunctionDeclaration(pascalParser::FunctionDeclarationContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitResultType(pascalParser::ResultTypeContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitStatement(pascalParser::StatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitUnlabelledStatement(pascalParser::UnlabelledStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitSimpleStatement(pascalParser::SimpleStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitAssignmentStatement(pascalParser::AssignmentStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitVariable(pascalParser::VariableContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitExpression(pascalParser::ExpressionContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitRelationaloperator(pascalParser::RelationaloperatorContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitSimpleExpression(pascalParser::SimpleExpressionContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitAdditiveoperator(pascalParser::AdditiveoperatorContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitTerm(pascalParser::TermContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitMultiplicativeoperator(pascalParser::MultiplicativeoperatorContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitSignedFactor(pascalParser::SignedFactorContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFactor(pascalParser::FactorContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitUnsignedConstant(pascalParser::UnsignedConstantContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFunctionDesignator(pascalParser::FunctionDesignatorContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitParameterList(pascalParser::ParameterListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitSet_(pascalParser::Set_Context *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitElementList(pascalParser::ElementListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitElement(pascalParser::ElementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitProcedureStatement(pascalParser::ProcedureStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitActualParameter(pascalParser::ActualParameterContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitParameterwidth(pascalParser::ParameterwidthContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitGotoStatement(pascalParser::GotoStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitEmptyStatement_(pascalParser::EmptyStatement_Context *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitEmpty_(pascalParser::Empty_Context *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitStructuredStatement(pascalParser::StructuredStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitCompoundStatement(pascalParser::CompoundStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitStatements(pascalParser::StatementsContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitConditionalStatement(pascalParser::ConditionalStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitIfStatement(pascalParser::IfStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitCaseStatement(pascalParser::CaseStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitCaseListElement(pascalParser::CaseListElementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitRepetetiveStatement(pascalParser::RepetetiveStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitWhileStatement(pascalParser::WhileStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitRepeatStatement(pascalParser::RepeatStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitForStatement(pascalParser::ForStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitForList(pascalParser::ForListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitInitialValue(pascalParser::InitialValueContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitFinalValue(pascalParser::FinalValueContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitWithStatement(pascalParser::WithStatementContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}

std::any AstVisitor::visitRecordVariableList(pascalParser::RecordVariableListContext *context)
{
    auto ast_node = new AstNode(context->getRuleIndex(), context->getText());
    auto &children = context->children;
    for (auto child : children)
    {
        AstNode *ast_child = nullptr;
        try
        {
            ast_child = std::any_cast<AstNode *>(visit(child));
            ast_child->setFather(ast_node);
            ast_node->addChild(ast_child);
        }
        catch (std::exception &e)
        {
            // ast_child = new AstNode(-1, std::any_cast<std::string>(visit(child)));
        };
    }

    return ast_node;
}
} // namespace npc::ast