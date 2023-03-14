# `libpascalast` 使用文档

## 使用方法

### 构造 AST 树

#### 初始化

libpascalast 的核心部件是位于 [`npc/ast/pascalAst.hpp`](../npc/ast/pascalAst.hpp) 中的 `npc::ast::Ast`

```cpp
namespace npc::ast
{

class Ast
{
  // ...
  public:
    AstNode *tree();

    // Constructor
    Ast(std::string src);
    ~Ast();
};

} // namespace npc::ast
```

使用时，只需直接将输入文件的全部内容传入构造函数即可，假设输入文件为 [`test/example.pas`](../test/example.pas): 

```cpp
std::stringstream ss;
std::string src_path = "test/example.pas";

if (!std::filesystem::exists(src_path))
{
    std::cerr << "cdslc error: file not found" << '\n';
    exit(0);
}

try
{
    std::ifstream in_file(src_path);
    ss << in_file.rdbuf();
    in_file.close();
}
catch (const std::exception &e)
{
    std::cerr << "cdslc error: reading file " << src_path << " : " << e.what() << '\n';
    exit(128);
}

auto ast = npc::ast::Ast(ss.str());
```

#### AST 树根节点

`npc::ast::AstNode npc::ast::Ast::tree()` 方法会返回根节点。

### 访问 AST 树

需要配合 [`npc/ast/pascalAstNode.hpp`](../npc/ast/pascalAstNode.hpp) 中的 `npc::ast::AstNode` 访问: 

```cpp
namespace npc::ast
{

class AstNode
{
  // ...
  public:
    void addChild(int rule_index, std::string text);
    void addChild(AstNode *node);
    void setFather(AstNode *father);
    // When this is set, update rule_names of all children node.
    void setRuleNames(std::vector<std::string> *rule_names);

    int getRuleIndex();
    std::string getRule();
    std::string getText();
    AstNode *getFather();
    std::vector<AstNode *> getChildren();

    bool is_leaf();

    // Constructor
    // Check whether rule_names points to nullptr,
    // if not then rule = rule_names[rule_index]
    // else rule = ""
    AstNode(int rule_index, std::string text);
    AstNode(int rule_index, std::string text, std::vector<std::string> *rule_names);
    ~AstNode();
};

} // namespace npc::ast
```

使用时一般只需要关注三个方法: 

- `std::string getRule()`: 返回匹配当前节点对应产生式的左部名称
- `std::string getText()`: 返回匹配当前节点对应产生式的源代码，一般只有叶子节点需要关注
- `bool is_leaf()`: 返回当前节点是否是叶子节点

语法产生式信息位于: `grammar/pascal.g4`

## 编译方法

### `g++` 使用方法 (不建议)

假设动态库位于 `build/linux/x86_64/debug/libpascalast.so` 目录下（实际上也是），则使用动态库的方法为: 

1. 包含头文件

```cpp
// ...
#include "ast/pascalAst.hpp"
// ...
```

2. 编译时添加动态库

```bash
g++ example.cpp -L build/linux/x86_64/debug/ -lpascalast -o example
```

### 使用 xmake (建议)

1. 在 [`xmake.lua`](../xmake.lua) 中添加 `libpascalast` 的头文件

```lua
target("some_target")
    -- ...
    add_headerfiles("npc/ast/*.hpp")
    -- ...
```

2. 在 [`xmake.lua`](../xmake.lua) 对应 target 下加入依赖

```lua
target("some_target")
    -- ...
    add_deps("pascalast")
    -- ...
```

3. 在 C++ 代码中加入头文件

```cpp
// ...
#include "ast/pascalAst.hpp"
// ...
```

4. 正常编译即可

```bash
xmake b some_target
```