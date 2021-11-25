enable_testing()

find_package(GTest REQUIRED)

add_executable(Homework2_tests
        factorial_test.cpp
        prime_test.cpp
        text_parser_test.cpp
        ${CMAKE_SOURCE_DIR}/include/factorial.h
        ${CMAKE_SOURCE_DIR}/include/is_prime.h
        ${CMAKE_SOURCE_DIR}/include/text_parser.h
        ${CMAKE_SOURCE_DIR}/src/factorial.cpp
        ${CMAKE_SOURCE_DIR}/src/is_prime.cpp
        ${CMAKE_SOURCE_DIR}/src/text_parser.cpp)

target_include_directories(Homework2_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(Homework2_tests GTest::GTest GTest::Main)
