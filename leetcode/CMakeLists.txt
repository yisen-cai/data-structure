add_library(
        leetcode-lib
        src/two_sum.h
        src/two_sum.cpp
        src/longest_substring.h
        src/longest_substring.cpp
        src/median_value.h
        src/median_value.cpp src/longest_palindromic.h src/flatten_binary_tree.h)

target_link_directories(leetcode-lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

target_compile_definitions(leetcode-lib PUBLIC HELLO_VERSION=4)

target_include_directories(leetcode-lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")