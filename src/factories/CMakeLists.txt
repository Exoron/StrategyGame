cmake_minimum_required(VERSION 3.5)

project(factories_library)

include_directories(../../include)

add_library(Factories STATIC gems/CobbleMine.cpp alloys/OreMine.cpp gems/GraniteQuarry.cpp alloys/SteelPlant.cpp)

install(TARGETS Factories
        RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/../bin
        LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/../lib
        ARCHIVE DESTINATION ${CMAKE_BINARY_DIR}/../lib
)