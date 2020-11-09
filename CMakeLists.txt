cmake_minimum_required(VERSION 3.16)
project(homework9)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(PolymorphicHierarchy)
add_subdirectory(DB)

add_executable(homework9 main.cpp)

target_link_libraries(homework9 polymorphicHierarchy DB)