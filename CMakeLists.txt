cmake_minimum_required(VERSION 3.10)
project(zmalloc C)

set(CMAKE_C_STANDARD 11)

add_dependencies()

add_library(zmalloc src/zmalloc.c)
