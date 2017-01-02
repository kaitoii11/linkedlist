cmake_minimum_required(VERSION 3.0)

set (CMAKE_C_FLAGS "-Wall")
set (CMAKE_C_FLAGS_DEBUG "-g3 -O0 -pg")
set (CMAKE_C_FLAGS_RELEASE "-O2 -DNDEBUG -march=native")
set (CMAKE_C_FLAGS_RELWITHDEBINFO "-g3 -Og -pg")
set (CMAKE_C_FLAGS_MINSIZEREL "-Os -DNDEBUG -march=native")
set (CMAKE_BUILD_TYPE Release)

file(GLOB src
  "*.c"
)

add_library(linkedlist SHARED ${src})
