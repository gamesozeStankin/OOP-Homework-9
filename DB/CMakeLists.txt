project(DB)

add_library(DB DB.cpp DB.h)

target_include_directories(DB PUBLIC .)