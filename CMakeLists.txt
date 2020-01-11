cmake_minimum_required(VERSION 3.13.0)

project(DEBUG_DEMO VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)

# Non-optimized code with debug symbols
# set(CMAKE_BUILD_TYPE Debug)
# Optimized code with debug symbols
set(CMAKE_BUILD_TYPE RelWithDebInfo)
# Optimized code for release
# set(CMAKE_BUILD_TYPE Release)

add_library(header header.cpp)

add_executable(broken broken.cpp)
target_link_libraries(broken PRIVATE header)

add_executable(coreDump coreDump.cpp)
