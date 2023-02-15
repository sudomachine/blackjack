cmake_minimum_required(VERSION 3.14)

project(blackjack)

set(SOURCES sources/Game.cpp)
set(HEADERS headers/Game.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} sources/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE headers)
