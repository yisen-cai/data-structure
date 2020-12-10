# using compare in status and other keyword, make sure it is capital.
cmake_minimum_required(VERSION 3.17)
project(data_structure)

# set variables
set(CMAKE_CXX_STANDARD 14)

################################
# GTest
################################
ADD_SUBDIRECTORY(googletest)


################################
# spdlog
################################
add_subdirectory(spdlog)

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
        tests/test_exception.cpp 
        tests/test_type_conventions.cpp
        tests/test_liberal_class.cpp
        tests/test_stack.cpp
        tests/test_spdlog.cpp
        )

target_link_libraries(
        google-test-run
        PRIVATE
        gtest
        gtest_main
        binary-search
        arrays-m
        kmp-algorithm
        func
        linked-list
        hello-lib
        scratches
        spdlog::spdlog
)

# Define running application
add_executable(
        data-structure
        src/main.cpp
)

# ---------------------------------------------------------------------------------------
# Example of using pre-compiled library
# ---------------------------------------------------------------------------------------
# target_link_libraries(data-structure PRIVATE spdlog::spdlog)

# ---------------------------------------------------------------------------------------
# Example of using header-only library
# ---------------------------------------------------------------------------------------
if(SPDLOG_BUILD_EXAMPLE_HO)
    target_link_libraries(data-structure PRIVATE spdlog::spdlog_header_only)
endif()

target_link_libraries(
        data-structure 
        PRIVATE

        func
        linked-list
        arrays-m
        kmp-algorithm
        hello-lib
        binary-search
        scratches
        spdlog::spdlog
)
