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
