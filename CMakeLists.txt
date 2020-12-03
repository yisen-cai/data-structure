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
add_subdirectory(scratches)

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
        binary-search
        src/binary_search_m.cpp
        src/binary_search_m.h
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


# Define test executable
add_executable(
        google-test-run

        tests/test_virtual_function.cpp
        tests/test_linked_list.cpp
        tests/test_func.cpp
        tests/test_stack_stl.cpp
        tests/test_array_m.cpp
        tests/test_hello.cpp
        tests/test_binary_search.cpp
        tests/test_static_box.cpp
        tests/test_virtual_function.cpp
        tests/test_example.cpp
        tests/test_fixture.cpp
        tests/test_try_catch.cpp
        tests/test_exception.cpp)

target_link_libraries(
        google-test-run

        gtest
        gtest_main
        binary-search
        arrays-m
        kmp-algorithm
        func
        linked-list
        hello-lib
        scratches
)

# Define running application
add_executable(
        data-structure
        src/main.cpp
)
target_link_libraries(
        data-structure PRIVATE

        func
        linked-list
        arrays-m
        kmp-algorithm
        hello-lib
        binary-search
        scratches
)
