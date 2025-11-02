cmake_minimum_required(VERSION 3.20)
project(lab5_2 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab5_2 main.cpp
        sorts.cpp
        sorts.h
        fill.cpp
        fill.h
        stats.h
        profiler.h
        io.cpp
        io.h
)