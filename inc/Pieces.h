//
// Created by blueoranges on 7/10/25.
//

#ifndef PIECES_H
#define PIECES_H
#include <string>


class Pieces {
private:
    // State for piece that is active
    std::string& currentPosition;
    std::string& endPosition;
public:
    bool pieceInPlayRules(char &, const std::string &, const std::string &);
    void removePieceInPlay(char&);
    bool pawnValidMove(char&);
    bool kingValidMove(char&);
    bool knightValidMove(char&);
    bool bishopValidMove(char&);
    bool rookValidMove(char&);
    bool queenValidMove(char&);
};



#endif //PIECES_H
