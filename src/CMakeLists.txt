cmake_minimum_required(VERSION 3.17)
project(Malbolge)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH  "C:/Qt/6.2.1/mingw81_64/lib/cmake/")

find_package(Qt6Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(Malbolge main.cpp)
target_link_libraries(Malbolge Qt6::Widgets)