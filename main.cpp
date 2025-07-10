#include <iostream>
#include "Board.h"

int main() {
    std::string input;

    // Create a Board object
    Board board = Board();

    // Print the board onto the screen
    board.printBoard();

    // Enter a move
    std::cout << "Enter a move: " << std::endl;
    std::cin >> input;

    board.movePiece(input, input);
    return 0;
}
