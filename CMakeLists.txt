# using compare in status and other keyword, make sure it is capital.
cmake_minimum_required(VERSION 3.17)
project(data_structure)

# set variables
set(CMAKE_CXX_STANDARD 14)

################################
# GTest
################################
ADD_SUBDIRECTORY(googletest-src)
#ADD_SUBDIRECTORY(dynamic)
add_subdirectory(hello)

enable_testing()

add_library(
        arrays-m
        src/arrays_m.h
        src/arrays_m.cpp)

add_library(
        kmp-algorithm
        src/kmp_algorithm.h
        src/kmp_algorithm.c
)

add_library(
        func
        src/func.h
        src/func.cpp
)

add_library(
        linked-list
        src/linked_list.h
        src/linked_list.cpp
)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src")


add_executable(google-test-run
        tests/run_tests.cpp
        tests/test_linked_list.cpp
        tests/test_func.cpp
        tests/test_stack_stl.cpp
        tests/test_array_m.cpp
        tests/test-hello.cpp)

target_link_libraries(google-test-run gtest gtest_main arrays-m kmp-algorithm func linked-list hello-lib)

add_executable(data-structure src/main.cpp)
target_link_libraries(data-structure PRIVATE func linked-list arrays-m kmp-algorithm hello-lib)