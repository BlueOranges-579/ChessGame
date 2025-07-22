//
// Created by blueoranges on 7/10/25.
//

#include "../inc/Pieces.h"

#include <iostream>
#include <ostream>

// Function to check if piece movement follows its rules
bool Pieces::pieceInPlayRules(char &piece, const std::string &currentPosition, const std::string &endPosition) {

    // Set the current and end position of the piece
    this->currentPosition = currentPosition;
    this->endPosition = endPosition;

    // Check which piece is in play
    switch (tolower(piece)) {
        case 'r': return rookValidMove(piece);
        case 'b': return bishopValidMove(piece);
        case 'k': return kingValidMove(piece);
        case 'n': return knightValidMove(piece);
        case 'q': return queenValidMove(piece);
        case 'p': return pawnValidMove(piece);
        default: std::cout << "Invalid piece" << std::endl;
            return false;
    };
}


//  Movement Rules for each piece
bool Pieces::pawnValidMove(char& piece) {
    // TODO:: Get piece current position and then check it the square where it will move and the ones needed to move for enemies of friendy pieces
    // Pawn rules
    /* Can move forward two squares on first movement after that one square at a time
     * Only capture diagonally
     * Can be promoted when reaching enemy last line
     */

    // If current player is White
    if (isupper(piece)) {
        // Check if pawn can be moved
        if (currentPosition == endPosition) {
            return false;
        }
        if (endPosition[1] ) {
            return false;
        }

    }


    return false;
}
bool Pieces::rookValidMove(char& piece) {
    return true;
}
bool Pieces::queenValidMove(char& piece) {
    return false;
}
bool Pieces::knightValidMove(char& piece) {
    return false;
}
bool Pieces::bishopValidMove(char& piece) {
    return false;
}
bool Pieces::kingValidMove(char& piece) {
    return false;
}