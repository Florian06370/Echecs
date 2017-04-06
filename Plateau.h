/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Plateau.h
 * Author: Florian
 *
 * Created on 6 avril 2017, 09:46
 */

#ifndef PLATEAU_H
#define PLATEAU_H

class Plateau {
public:
    Plateau();
    Plateau(const Plateau& orig);
    virtual ~Plateau();
private:
    
    Piece grille[][];

};

#endif /* PLATEAU_H */

