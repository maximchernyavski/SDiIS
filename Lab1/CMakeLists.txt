cmake_minimum_required(VERSION 3.14)
project(Lab1)

add_subdirectory(${PROJECT_SOURCE_DIR}/googletest)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()

add_executable(
    beg_test
    beg_test.cpp
)
target_link_libraries(
    beg_test
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(beg_test)