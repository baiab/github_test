cmake_minimum_required(VERSION 3.12)

project(github_example)

include_directories(${GTEST_INCLUDE_DIRS})

set(UT_SOURCES unit_test.cpp functions.cpp)
set(PRODUCT_SOURCES test_github.cpp functions.cpp)
add_executable(unittest ${UT_SOURCES})
add_executable(product ${PRODUCT_SOURCES})


target_link_libraries(unittest gtest gtest_main pthread)
