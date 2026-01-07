cmake_minimum_required(VERSION 3.20.0)

project(Ayanami VERSION 0.0.1 LANGUAGES C CXX)

include(cmake/compiler.cmake)

add_subdirectory(sort)
add_subdirectory(tree)
add_subdirectory(security)
