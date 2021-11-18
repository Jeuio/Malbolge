cmake_minimum_required(VERSION 3.20)
project(Malbolge)

set(CMAKE_CXX_STANDARD 14)

add_executable(Malbolge
        src/Client/main.cpp
        src/Client/Networking.cpp)
