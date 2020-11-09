project(polymorphicHierarchy)

add_library(polymorphicHierarchy
            Alaev.cpp Alaev.h
            Kostya.cpp Kostya.h)

target_include_directories(polymorphicHierarchy PUBLIC .)