cmake_minimum_required(VERSION 3.5)

project(factories_library)

include_directories(../../include)

add_library(Factories STATIC gems/CobbleMine.cpp alloys/OreMine.cpp gems/GraniteQuerry.cpp alloys/SteelMine.cpp)
