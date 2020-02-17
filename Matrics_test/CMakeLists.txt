cmake_minimum_required(VERSION 3.5.1)
set (CMAKE_CXX_STANDARD 11)
project(matrics_test)
include_directories(
include
)
add_executable(vector_and_matrics src/vector.cpp src/main.cpp src/matrics.cpp)


