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
    Shape(){
        X=0;
        Y=0;
        color="";
        cout<<"In Shape Default Constructor"<<endl;
    };
    Shape(unsigned x, unsigned y,string s)
    :X(x),Y(y), color(s){
        cout<<"In Shape Constructor: color= "<<color<<endl;
    };
    virtual~Shape(){
        cout<<"In Shape Destructor: color="<<color<<endl;
    }
    //Copy constructor
    Shape(const Shape& shape){
        if(this != &shape){
            X= shape.X;
            Y = shape.Y;
            color = shape.color;
            cout<<"In Shape Copy Constructor"<<endl;
        }
        else cout<<"In Shape Copy Constructor: Self-copying"<<endl;
    }
    //Assignment operator
    Shape& operator=(const Shape& shape){
        if(this != &shape){
            X= shape.X;
            Y = shape.Y;
            color = shape.color;
            cout<<"In Shape Assignment Operator"<<endl;
        }
        else cout<<"In Shape Assignment Operator: Self-copying"<<endl;
        return *this;
    }
    virtual float computeArea()const = 0;
    string printColor(){return color;}
    
};

#endif /* SHAPE_H */

