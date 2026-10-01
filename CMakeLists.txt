cmake_minimum_required(VERSION 3.16)
project(oop_lab1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(oop_lab1_lib src/matrix.cpp src/funcs.cpp)
target_include_directories(oop_lab1_lib PUBLIC src)

add_executable(oop_lab1_main main.cpp)
target_link_libraries(oop_lab1_main oop_lab1_lib)
target_compile_options(oop_lab1_main PRIVATE -Wall -Wextra -Wpedantic)

include(FetchContent)
FetchContent_Declare(googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(oop_lab1_tests tests/test.cpp)
target_link_libraries(oop_lab1_tests oop_lab1_lib GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(oop_lab1_tests)