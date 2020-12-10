cmake_minimum_required(VERSION 2.8)
project(build_system)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${build_system_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${build_system_SOURCE_DIR}/lib)
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

find_package(GTest REQUIRED)

include_directories(${GTest_INCLUDE_DIRS}/include ${GTest_INCLUDE_DIRS})

add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(C)
