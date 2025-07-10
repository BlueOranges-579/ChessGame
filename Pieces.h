//
// Created by blueoranges on 7/10/25.
//

#ifndef PIECES_H
#define PIECES_H



class Pieces {
private:
    // State for piece that is active
    enum Piece { N, K, Q, P, B, R };
    enum Piece pieceSelected = P;
public:
    void setPieceInPlay(char&);
    void removePieceInPlay(char&);

};



#endif //PIECES_H
