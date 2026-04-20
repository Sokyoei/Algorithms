cmake_minimum_required(VERSION 3.20.0)

project(Ayanami VERSION 0.0.1 LANGUAGES C CXX)

# export compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(cmake/compiler.cmake)

include_directories(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/include
)

add_subdirectory(src/Ahri/Ayanami)
