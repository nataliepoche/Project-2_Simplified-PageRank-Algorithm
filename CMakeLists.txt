cmake_minimum_required(VERSION 3.28)
project(Project_2_Simplified_PageRank_Algorithm)

set(CMAKE_CXX_STANDARD 14)

Include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.4.0 # seems to work with CLion - if you run into problems, try an older version of catch2 v3
)
FetchContent_MakeAvailable(Catch2)

include_directories(.)
include_directories(.idea)
include_directories(src)

add_executable(Project_2_Simplified_PageRank_Algorithm
        .idea/.gitignore
        .idea/modules.xml
        .idea/Project-2_Simplified-PageRank-Algorithm.iml
        .idea/vcs.xml
        .idea/workspace.xml
        src/graph.h
        src/main.cpp
        README.md
        src2_Javier-Arango/pageRank.cpp
)

add_executable(Tests
        src/test.cpp
        src/graph.h
        src/catch.hpp
)

target_link_libraries(Tests PRIVATE Catch2::Catch2WithMain)
