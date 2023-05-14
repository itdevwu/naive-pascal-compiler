set_project("npc")
set_version("0.1.0", {build = "%Y%m%d%H%M"})

add_rules("mode.debug", "mode.release")
set_languages("cxx17")

add_requires("conan::antlr4-cppruntime/4.11.1")
add_requires("boost 1.74.0")


target("pascalast")
    add_defines("_GLIBCXX_USE_CXX11_ABI=0", "NPC_VERSION=\"0.1.0\"")
    add_packages("conan::antlr4-cppruntime/4.11.1")
    set_languages("cxx17")
    set_kind("shared")
    add_headerfiles("./npc/ast/*.hpp")
    add_files("./npc/ast/*.cpp")

target("npc")
    add_defines("_GLIBCXX_USE_CXX11_ABI=0", "NPC_VERSION=\"0.1.0\"")
    add_packages("conan::antlr4-cppruntime/4.11.1")
    set_languages("cxx17")
    add_deps("pascalast")
    set_kind("binary")
    add_headerfiles("./npc/ast/*.hpp")
    add_files("./npc/graph.cpp") -- 排除 example.cpp
    set_rundir("$(curdir)")
    
target("irbuilder")
    add_defines("_GLIBCXX_USE_CXX11_ABI=0", "NPC_VERSION=\"0.1.0\"")
    add_packages("conan::antlr4-cppruntime/4.11.1")
    set_languages("cxx17")
    add_deps("pascalast")
    set_kind("shared")
    add_linkdirs("/usr/lib/llvm-12/lib")
    add_links("LLVM")
    add_includedirs("/usr/lib/llvm-12/include")
    add_files("./npc/ir/*.cpp")
    set_rundir("$(curdir)")

target("llvmctrl")
    set_kind("binary")
    set_languages("cxx17")
    add_files("./src/*.cpp")
    add_includedirs("./include")
    add_links("boost_program_options")

-- -- 添加测试目标
-- target("tests")
--     add_defines("_GLIBCXX_USE_CXX11_ABI=0","CDSLC_VERSION=\"0.1.0\"")
--     add_packages("conan::antlr4-cppruntime/4.11.1")
--     set_kind("binary")
--     add_headerfiles("/usr/include/gtest/*.h")
--     -- add_files("gtest/*.cpp")
--     add_links("gtest")
--     -- 添加依赖项
--     add_headerfiles("./npc/ast/*.hpp")
--     add_files("./npc/ast/*.cpp")
--     -- 添加gtest库的链接选项(只需在Linux上进行)
--     if is_plat("linux") then
--         add_links("pthread")
--     end




