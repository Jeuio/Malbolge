cmake_minimum_required(VERSION 3.20)
project(Malbolge)

set(CMAKE_CXX_STANDARD 14)

add_executable(Malbolge
        main.cpp
        src/POW/POW.cpp
        src/POW/POW.h
        src/POW/PrimeGenerator.cpp
        src/POW/PrimeGenerator.h)
