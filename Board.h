//
// Created by blueoranges on 7/10/25.
//

#ifndef BOARD_H
#define BOARD_H

#include <string>


    class Board {
    private:

        // Track whose turn it is
        enum Player { WHITE, BLACK };

        char board[8][8] = {
            'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
            'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
            ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
            ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
            ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
            ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
            'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
            'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R',
        };

        bool playerTurn = false;

    public:
        void printBoard();

        bool checkWin();

        void movePiece(std::string&, std::string&);
};



#endif //BOARD_H
