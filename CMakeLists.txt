cmake_minimum_required(VERSION 3.18.4)
set(CMAKE_CXX_STANDARD 20)
project(bfs)
add_executable(bfs "")
target_include_directories(bfs PRIVATE include)
target_sources(bfs PRIVATE
    src/main.cpp
)