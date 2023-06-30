cmake_minimum_required(VERSION 3.22.0)
project(my_sekond_cmake_project)

add_executable(hello_cmake main.cpp)

add_library(Figure 
Figure.h Figure.cpp)
add_library(triangle 
triangle.h triangle.cpp)
add_library(equilateral 
equilateral.h equilateral.cpp)
add_library(rectangular 
rectangular.h rectangular.cpp)
add_library(isosceles 
isosceles.h isosceles.cpp)
add_library(parallellogram 
parallellogram.h parallellogram.cpp)
add_library(rectangle 
rectangle.h rectangle.cpp)
add_library(quadrilateral
quadrilateral.h quadrilateral.cpp)
add_library(rhomb 
rhomb.h rhomb.cpp)
add_library(square 
square.h square.cpp)


target_link_libraries(hello_cmake PUBLIC Figure triangle equilateral parallellogram rectangular 
isosceles rectangle quadrilateral rhomb square)