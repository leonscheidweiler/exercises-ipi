cmake_minimum_required(VERSION 3.1)
project(POINT_CLASS)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main_point_class.cpp point2d.cpp point3d.cpp)
