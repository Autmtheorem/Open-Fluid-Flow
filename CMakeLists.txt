cmake_minimum_required(VERSION 2.8.9)
project(Open-Fluid-Flow)
set(CMAKE_BUILD_TYPE Release)
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/Open-Fluid-Flow/include")
add_library(off STATIC "Open-Fluid-Flow/src/math/mat.cpp")
#Build the test file used to preform unit tests
add_executable(test tests/test.cpp)
target_link_libraries(test "${CMAKE_CURRENT_SOURCE_DIR}/build/liboff.a")
