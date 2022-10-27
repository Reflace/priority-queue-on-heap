cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME heap)
set(SOURCE_CODE main.cpp ./src/Parallelepiped.cpp)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} ${SOURCE_CODE})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)