cmake_minimum_required(VERSION 3.14)

project(blackjack)

set(SRC_DIR sources)
set(HDR_DIR headers)

set(SOURCES
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/Game.cpp
    ${SRC_DIR}/Card.cpp
    ${SRC_DIR}/Deck.cpp)

set(HEADERS
    ${HDR_DIR}/Game.h
    ${HDR_DIR}/Card.h
    ${HDR_DIR}/Deck.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PRIVATE ${HDR_DIR})
