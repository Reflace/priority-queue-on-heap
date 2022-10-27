cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME heap)
set(SOURCE_CODE main.cpp Parallelepiped.cpp)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} ${SOURCE_CODE})