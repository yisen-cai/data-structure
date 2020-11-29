cmake_minimum_required(VERSION 3.17)
project(data_structure)

set(CMAKE_CXX_STANDARD 14)

################################
# GTest
################################
ADD_SUBDIRECTORY(googletest-src)
#ADD_SUBDIRECTORY(dynamic)
enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run src/arrays_m.cpp src/func.cpp src/linked_list.cpp tests/run_tests.cpp tests/test_linked_list.cpp tests/test_func.cpp tests/test_stack_stl.cpp tests/test_array_m.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)
add_executable(data_structure src/main.cpp src/linked_list.cpp src/linked_list.h src/func.h src/func.cpp src/arrays_m.h src/arrays_m.cpp)