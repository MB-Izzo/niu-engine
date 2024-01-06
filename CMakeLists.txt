cmake_minimum_required(VERSION 3.15)
project(Niu)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(libs/glfw)
add_subdirectory(src/renderer)
add_subdirectory(src/niuEngine)
add_subdirectory(src/game)