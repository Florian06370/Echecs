/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Position.h
 * Author: Florian
 *
 * Created on 6 avril 2017, 09:10
 */

#ifndef POSITION_H
#define POSITION_H

class Position {
public:
    Position();
    Position(const Position& orig);
    virtual ~Position();
    
    int Getx();
    int Gety();
private:
    int x;
    int y;
    

};

#endif /* POSITION_H */

