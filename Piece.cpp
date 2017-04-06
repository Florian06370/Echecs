/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieces.cpp
 * Author: Florian
 * 
 * Created on 6 avril 2017, 09:22
 */

#include "Piece.h"

Piece::Piece() {
    Position pos;
    Position posVirtuelle;          //position eventuelle d'une piece pour fct d'evaluation min max
    int couleur;            //0 blanc, 1 noir
    bool estVivant;         //true si sur l'échiquier
    virtual Position deplacement();             //deplacement comprend la prise de piece (a check si prise en passant)
    
}

Piece::Piece(const Piece& orig) {
}

Piece::~Piece() {
}

