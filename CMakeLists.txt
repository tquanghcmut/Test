cmake_minimum_required(VERSION 3.27)
project(DiscreteMathematics_assignments)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(main main.cpp)
add_executable(tsp tsp.cpp)
