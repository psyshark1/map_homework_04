cmake_minimum_required (VERSION 3.8)

project (map_homework_04)
set (CMAKE_CXX_STANDARD 17)

add_executable (map_homework_04 map_homework_04.cpp 
Shape.h Shape.cpp Line.h Line.cpp 
Point.h Point.cpp ShapeException.cpp ShapeException.h 
Square.h Square.cpp Cube.h Cube.cpp 
Circle.cpp Circle.h Cylinder.h Cylinder.cpp)

target_compile_features(map_homework_04 PRIVATE cxx_std_17)