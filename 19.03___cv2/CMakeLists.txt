cmake_minimum_required(VERSION 3.10)

project(19.03___cv2)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenCV REQUIRED)

add_executable(main2 main2.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})

target_link_libraries(main2 ${OpenCV_LIBS})