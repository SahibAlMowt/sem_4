cmake_minimum_required(VERSION 3.10)

project(18.03___cv)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenCV REQUIRED)

add_executable(main3 main3.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})

target_link_libraries(main3 ${OpenCV_LIBS})