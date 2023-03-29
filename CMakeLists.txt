cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(main
    VERSION 0.0.1
    DESCRIPTION "zewei's Leetcode recording"
    HOMEPAGE_URL "https://github.com/zwe1in/Leetcode.git"
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)
add_subdirectory(src)
