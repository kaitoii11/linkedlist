cmake_minimum_required(VERSION 3.0)
project (Linkedlist C)
set (Linkedlist_VERSION_MAJOR 1)
set (Linkedlist_VERSION_MINOR 0)

set (CMAKE_VERBOSE_MAKEFILE 1)

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

include_directories (${CMAKE_SOURCE_DIR}/include)

add_subdirectory (src)
add_subdirectory (bin)
