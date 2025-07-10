//
// Created by blueoranges on 7/10/25.
//

#include "Board.h"
#include <iostream>

// Function that prints the board onto the console
void Board::printBoard() {
    std::cout << std::endl;
    std::cout << "Chess Board:" << std::endl << std::endl;
    std::cout << "    A   B   C   D   E   F   G   H" << std::endl;

    for (int i = 8; i > 0; i--) {
        std::cout << i;
        for (int j = 0; j < 8; j++) {
            std::cout << " | ";
            std::cout << "" << board[8 - i][j];
        }
        std::cout << " | " << std::endl << std::endl;
    }
    std::cout << std::endl;
}

// Check moves
void Board::movePiece(std::string& pieceToMove, std::string& pieceMoveTo) {
    // Extract piece selected

    // TODO:: Check if space is empty
    // TODO:: Check if enemy piece can be taken
}