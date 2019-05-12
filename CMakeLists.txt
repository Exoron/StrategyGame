cmake_minimum_required(VERSION 3.5)

project(strategy_game)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Strategy_game main.cpp include/UnitSet.h include/AttackReport.h include/Squad.h src/Squad.cpp include/Format.h src/Format.cpp include/Army.h src/Army.cpp)

add_subdirectory(src/fractions)
add_subdirectory(src/factories)
add_subdirectory(src/units)

target_link_libraries(Strategy_game Fractions Factories Units)

# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

install(TARGETS Strategy_game
        RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/../bin
        LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/../lib
        ARCHIVE DESTINATION ${CMAKE_BINARY_DIR}/../lib
)
