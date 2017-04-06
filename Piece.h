/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieces.h
 * Author: Florian
 *
 * Created on 6 avril 2017, 09:22
 */

#ifndef PIECES_H
#define PIECES_H

class Piece {
public:
    Piece();
    Piece(const Piece& orig);
    virtual ~Piece();
    virtual Position deplacement();
    
private:

    Position pos;
    Position posVirtuelle;
    int couleur;
    bool estVivant;
    
};

#endif /* PIECES_H */

