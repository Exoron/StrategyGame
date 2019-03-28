cmake_minimum_required(VERSION 3.10)

project(units_library)

include_directories(../../include)

add_library(Units STATIC CobbleSoldier.cpp)