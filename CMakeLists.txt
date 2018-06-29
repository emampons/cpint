cmake_minimum_required(VERSION 3.10)
project(cint)

set(CMAKE_CXX_STANDARD 14)

add_executable(cint main.cpp bigint/bigint.cpp bigint/bigint.h)