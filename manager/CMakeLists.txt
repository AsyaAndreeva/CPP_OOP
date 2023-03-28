cmake_minimum_required(VERSION 3.24)
project(manager)

set(CMAKE_CXX_STANDARD 17)

add_executable(manager main.cpp Employee.cpp Employee.h Manager.cpp Manager.h Executive.cpp Executive.h)
