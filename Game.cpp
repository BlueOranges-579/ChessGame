//
// Created by blueoranges on 7/11/25.
//

#include "Game.h"
#include "Board.h"


// TODO:: Change player at play after a move
// TODO:: Get user move input
// TODO::

// Initialize the main loop
void Game::InitGame() {

    bool quit = false;
    Board board;

    // Main loop
    while (!quit) {
        board.printBoard();
        board.movePiece();
    }
}



