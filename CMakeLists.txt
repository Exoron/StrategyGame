cmake_minimum_required(VERSION 3.10)

project(strategy_game)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Strategy_game main.cpp)

add_subdirectory(src/fractions)
add_subdirectory(src/factories)
add_subdirectory(src/units)

target_link_libraries(Strategy_game Fractions Factories Units)