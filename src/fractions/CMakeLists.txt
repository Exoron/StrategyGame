cmake_minimum_required(VERSION 3.10)

project(fractions_library)

include_directories(../../include)

add_library(Fractions STATIC gems/GemsPlayer.cpp alloys/AlloysPlayer.cpp)