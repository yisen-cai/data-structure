
add_library(
        hello-lib
        src/hello.h
        src/hello.cpp
)

target_include_directories(hello-lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_compile_definitions(hello-lib PUBLIC HELLO_VERSION=4)