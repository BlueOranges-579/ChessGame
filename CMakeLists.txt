cmake_minimum_required(VERSION 3.31)
project(ConsoleChess)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConsoleChess main.cpp
        Board.cpp
        Board.h
        Pieces.cpp
        Pieces.h
        Game.cpp
        Game.h)
