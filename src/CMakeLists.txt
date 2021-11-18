cmake_minimum_required(VERSION 3.17)
project(Malbolge)

set(CMAKE_CXX_STANDARD 14)
find_package(Qt5Widgets REQUIRED)

add_executable(Malbolge
        main.cpp)

target_link_libraries(malbolge Qt5::Widgets)