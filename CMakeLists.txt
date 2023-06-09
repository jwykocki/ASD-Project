cmake_minimum_required(VERSION 3.8)

project(safesProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(include
        googletest-master/googlemock/include
        googletest-master/googletest/include)

set(SOURCE_FILES
        src/functions.cpp src/Graph.cpp)

set(TEST_SOURCES
        test/main_test.cpp test/basic_tests.cpp test/large_tests.cpp test/my_tests.cpp)

add_subdirectory(googletest-main)
link_libraries(gmock)

add_executable(run ${SOURCE_FILES} main.cpp)

add_executable(test ${SOURCE_FILES} ${TEST_SOURCES})