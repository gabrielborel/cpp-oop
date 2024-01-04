cmake_minimum_required(VERSION 3.27)
project(oop)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop main.cpp
        Account.cpp
        Account.hpp
        Owner.cpp
        Owner.hpp)
