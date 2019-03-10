/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: wy
 *
 * Created on January 17, 2019, 3:23 PM
 */

#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
using namespace std;

class Shape{
protected:
    unsigned X;
    unsigned Y;
    string color;
public:
    Shape(unsigned x, unsigned y,string s):X(x),Y(y), color(s){}
    virtual float computeArea()const = 0;
    string printColor(){return color;}
    
};

#endif /* SHAPE_H */

