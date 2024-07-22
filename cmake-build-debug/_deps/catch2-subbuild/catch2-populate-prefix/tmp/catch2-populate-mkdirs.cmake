# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-src"
  "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-build"
  "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix"
  "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/tmp"
  "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
  "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src"
  "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Owner/CLionProjects/Data_Structures/Project-2_Simplified-PageRank-Algorithm/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
