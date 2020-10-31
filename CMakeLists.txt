cmake_minimum_required(VERSION 3.16)
project(this)

set(CMAKE_CXX_STANDARD 14)

add_executable(this main.cpp Student.h Professor.h Student.cpp)