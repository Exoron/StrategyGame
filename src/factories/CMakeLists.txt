cmake_minimum_required(VERSION 3.10)

project(factories_library)

include_directories(../../include)

add_library(Factories STATIC CobbleMine.cpp)