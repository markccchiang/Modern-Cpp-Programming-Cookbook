cmake_minimum_required(VERSION 3.5)

project(Modern-Cpp-Programming-Cookbook LANGUAGES CXX C)

find_package(Boost REQUIRED)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    link_directories(${Boost_LIBRARY_DIRS})
    message(STATUS "boost include dir: ${Boost_INCLUDE_DIRS}")
    message(STATUS "boost lib dir: ${Boost_LIBRARY_DIRS}")
    link_directories(/usr/local/lib)
endif ()

find_package(Catch2 REQUIRED)

if (Catch2_FOUND)
    message(STATUS "Catch2 found.")
endif ()

add_subdirectory(Chapter01)
add_subdirectory(Chapter02)
add_subdirectory(Chapter03)
add_subdirectory(Chapter04)
add_subdirectory(Chapter05)
add_subdirectory(Chapter06)
add_subdirectory(Chapter07)
add_subdirectory(Chapter08)
add_subdirectory(Chapter09)
add_subdirectory(Chapter10)

add_subdirectory(Chapter11/chapter11bt_01_1)
add_subdirectory(Chapter11/chapter11bt_01_2)
add_subdirectory(Chapter11/chapter11bt_01_3)
add_subdirectory(Chapter11/chapter11bt_02)
add_subdirectory(Chapter11/chapter11bt_03)
add_subdirectory(Chapter11/chapter11bt_04)
add_subdirectory(Chapter11/chapter11bt_05)

add_subdirectory(Chapter11/chapter11ca_01)
add_subdirectory(Chapter11/chapter11ca_02)
add_subdirectory(Chapter11/chapter11ca_03)
add_subdirectory(Chapter11/chapter11ca_04)


