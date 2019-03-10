/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.h
 * Author: wy
 *
 * Created on January 17, 2019, 3:24 PM
 */

#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
#include <iostream>
using namespace std;
#include "Shape.h"
#include <cmath>



class Circle:public Shape{
protected:
    unsigned radius;
public:
    Circle(unsigned x, unsigned y,const unsigned& length,const string& s ):Shape(x,y,s),radius(length){}
    float computeArea() const{return radius*radius*M_PI;}
    
};

#endif /* CIRCLE_H */

