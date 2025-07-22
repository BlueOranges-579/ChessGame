cmake_minimum_required(VERSION 3.31)
project(ConsoleChess)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConsoleChess src/main.cpp
        src/Board.cpp
        inc/Board.h
        src/Pieces.cpp
        inc/Pieces.h
        src/Game.cpp
        inc/Game.h)
