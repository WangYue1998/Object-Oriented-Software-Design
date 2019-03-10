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
    Square(){
        X=0;
        Y=0;
        color="";
        edgelength = 0;
        cout<<"In Square Default Constructor"<<endl;
    };
    Square(unsigned x, unsigned y,const unsigned& length,const string& s )
    :Shape(x,y,s),edgelength(length){
    cout<<"In Square Constructor: length= "<<edgelength<<endl;
    }; 
    virtual ~Square(){
        cout<<"In Square Destructor: length="<<edgelength<<endl;
    }
    //Copy constructor
    Square(const Square& square){
        if(this != &square){
            X= square.X;
            Y = square.Y;
            color = square.color;
            edgelength = square.edgelength;
            cout<<"In Square Copy Constructor"<<endl;
        }
        else cout<<"In Square Copy Constructor: Self-copying"<<endl;
    }
    //Assignment operator
    Square& operator=(const Square& square){
        if(this != &square){
            X= square.X;
            Y = square.Y;
            color = square.color;
            edgelength = square.edgelength;
            cout<<"In Square Assignment Operator"<<endl;
        }
        else cout<<"In Square Assignment Operator: Self-copying"<<endl;
        return *this;
    }
   
    float computeArea() const{return edgelength*edgelength;}
    
};


#endif /* SQUARE_H */

