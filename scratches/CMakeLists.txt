add_library(
        scratches

        src/reference.h
        src/reference.cpp
        src/Box.h
        src/Box.cpp
        src/Shape.h
        src/Shape.cpp
        src/decision_making.h
        src/decision_making.cpp
        src/data_types.h
        src/data_types.cpp
        src/math_operations.cpp
        src/date_and_time.cpp
        src/file_streams.h
        src/file_streams.cpp
        src/try_catch.h
        src/try_catch.cpp
        src/MyException.cpp src/MyException.h)

target_include_directories(scratches PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")