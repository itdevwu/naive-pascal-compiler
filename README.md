# naive-pascal-compiler

npc is a compiler for the Pascal programming language, written in C++ as a course project of BUPT. It uses ANTLR4 to write lexer and parser, then generates an Abstract Syntax Tree (AST), converts the AST into LLVM IR and finally uses LLVM as the backend to compile into binary code.

## Documents

See [naive-pascal-compiler 文档索引表](./docs/README.md)

## TODO

- [ ] CLI
- [x] Frontend
    - [x] Lexer
    - [x] Parser
    - [x] AST interfaces
- [ ] Backend
    - [ ] LLVM IR translator
    - [X] LLVM controller
- [X] Tests (partly)

## Copyright

Copyright (c) 2023 Zhenglong WU, Zili YAO, Kexiao WU, Yiran REN and Xiyue ZU

This project is protected by copyright law. Unauthorized reproduction or distribution of this project, or any portion of it, may result in severe civil and criminal penalties, and will be prosecuted to the maximum extent possible under the law.
