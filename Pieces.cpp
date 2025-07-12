//
// Created by blueoranges on 7/10/25.
//

#include "Pieces.h"

#include <iostream>
#include <ostream>

void Pieces::setPieceInPlay(char& piece) {
    // TODO:: Set rules for each piece and check move validation
    switch (piece) {
        case 'r': pieceSelected = R;
                    rookValidMove();
            break;
        case 'b': pieceSelected = B;
            break;
        case 'k': pieceSelected = K;
            break;
        case 'n': pieceSelected = N;
            break;
        case 'q': pieceSelected = Q;
            break;
        case 'p': pieceSelected = P;
            break;
        default: std::cout << "Invalid piece" << std::endl;
    };
}


//  Movement Rules for each piece
bool Pieces::pawnValidMove() {
    // TODO:: Get piece current position and then check it the square where it will move and the ones needed to move for enemies of friendy pieces
    // Pawn rules
    /* Can move forward two squares on first movement after that one square at a time
     * Only capture diagonally
     * Can be promoted when reaching enemy last line
     */
    return false;
}
bool Pieces::rookValidMove() {
    return false;
}
bool Pieces::queenValidMove() {
    return false;
}
bool Pieces::knightValidMove() {
    return false;
}
bool Pieces::bishopValidMove() {
    return false;
}
bool Pieces::kingValidMove() {
    return false;
}