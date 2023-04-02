set_project("npc")
set_version("0.1.0", {build = "%Y%m%d%H%M"})

add_rules("mode.debug", "mode.release")
set_languages("cxx17")

add_requires("conan::antlr4-cppruntime/4.11.1")

target("irbuilder")
    add_defines("_GLIBCXX_USE_CXX11_ABI=0", "NPC_VERSION=\"0.1.0\"")
    add_packages("conan::antlr4-cppruntime/4.11.1")
    add_deps("pascalast")
    set_kind("binary")
    add_linkdirs("/usr/lib/llvm-13/lib")
    add_links("LLVM")
    add_includedirs("/usr/lib/llvm-13/include")
    add_files("npc/*.cpp|graph.cpp") -- 排除 graph.cpp
    add_files("npc/ir/*.cpp")
    set_rundir("$(curdir)")

target("pascalast")
    add_defines("_GLIBCXX_USE_CXX11_ABI=0", "NPC_VERSION=\"0.1.0\"")
    add_packages("conan::antlr4-cppruntime/4.11.1")
    set_kind("shared")
    add_headerfiles("npc/ast/*.hpp")
    add_files("npc/ast/*.cpp")

target("npc")
    add_defines("_GLIBCXX_USE_CXX11_ABI=0", "NPC_VERSION=\"0.1.0\"")
    add_packages("conan::antlr4-cppruntime/4.11.1")
    add_deps("pascalast")
    set_kind("binary")
    add_headerfiles("npc/ast/*.hpp")
    add_files("npc/*.cpp|example.cpp") -- 排除 example.cpp
    set_rundir("$(curdir)")
