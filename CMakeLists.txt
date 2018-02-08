cmake_minimum_required(VERSION 3.9)
project(prime_numbers)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(prime_numbers main.cpp)