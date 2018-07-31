cmake_minimum_required(VERSION 3.10)
project(cint)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(cint main.cpp bigint/bigint.cpp bigint/bigint.h bigint/tests/bigint_test.cpp)
target_link_libraries(cint gtest gtest_main)