/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Position.cpp
 * Author: Florian
 * 
 * Created on 6 avril 2017, 09:10
 */

#include "Position.h"

Position::Position() {                      //initialisation constructeur par défaut
    int x;          //abscisse
    int y;          //ordonnée
}

Position::Position(const Position& orig) {
}

Position::~Position() {     //destructeur -->delete
}

int Position::Getx(){
    return x;
}

int Position::Gety(){
    return y;
}