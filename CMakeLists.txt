project(EnterPhysics)
cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(BUILD_SHARED_LIBS OFF)

set(PROJCET_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(fast_mass_spring)
add_subdirectory(3rdparty)
