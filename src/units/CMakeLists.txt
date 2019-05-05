cmake_minimum_required(VERSION 3.5)

project(units_library)

include_directories(../../include)

add_library(Units STATIC gems/CobbleSoldier.cpp alloys/OreSoldier.cpp gems/GraniteWarrior.cpp alloys/CrudeWarrior.cpp)
