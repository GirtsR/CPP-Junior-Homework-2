cmake_minimum_required(VERSION 3.0.0)
project(Homework2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Homework2
        main.cpp
        include/factorial.h
        include/is_prime.h
        include/text_parser.h
        src/factorial.cpp
        src/is_prime.cpp
        src/text_parser.cpp)

target_include_directories(Homework2 PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(test)
