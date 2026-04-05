cmake_minimum_required(VERSION 3.10)
project(leet VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(leet ${SOURCES})

set_target_properties(leet PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")