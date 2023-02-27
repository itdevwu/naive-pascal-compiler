# naive-pascal-compiler

npc is a compiler for the Pascal programming language, written in C++ as a course project of BUPT. It uses ANTLR4 to write lexer and parser, then generates an Abstract Syntax Tree (AST), converts the AST into LLVM IR and finally uses LLVM as the backend to compile into binary code.

# TODO

- [ ] CLI
- [ ] Frontend
    - [ ] Lexer
    - [ ] Parser
    - [ ] AST interfaces
- [ ] Backend
    - [ ] LLVM IR translator
    - [ ] LLVM controller
- [ ] Tests
