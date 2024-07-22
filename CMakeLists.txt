cmake_minimum_required(VERSION 3.28)
project(Project_2_Simplified_PageRank_Algorithm)

set(CMAKE_CXX_STANDARD 14)

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
        src2_Javier-Arango/pageRank.cpp)
