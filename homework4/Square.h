/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: wy
 *
 * Created on January 17, 2019, 3:23 PM
 */

#ifndef SQUARE_H
#define SQUARE_H
#include <string>
#include <iostream>
using namespace std;
#include "Shape.h"

class Square:public Shape{
protected:
    unsigned edgelength;
    using Shape::color;
public:
    Square(unsigned x, unsigned y,const unsigned& length,const string& s ):Shape(x,y,s),edgelength(length){}
    float computeArea() const{return edgelength*edgelength;}
    
};


#endif /* SQUARE_H */

