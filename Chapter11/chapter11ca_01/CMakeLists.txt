cmake_minimum_required(VERSION 3.5)

project(Chapter11 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(ch11ca_01 main.cpp)
target_link_libraries(ch11ca_01 Catch2::Catch2)
