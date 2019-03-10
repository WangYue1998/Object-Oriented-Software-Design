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
    Circle(){
        X=0;
        Y=0;
        color="";
        radius = 0;
        cout<<"In Circle Default Constructor"<<endl;
    };
    Circle(unsigned x, unsigned y,const unsigned& length,const string& s ):
    Shape(x,y,s),radius(length){
    cout<<"In Circle Constructor: radius= "<<radius<<endl;
    }; 
    virtual ~Circle(){
        cout<<"In Circle Destructor: radius="<<radius<<endl;
    }
    //Copy constructor
    Circle(const Circle& circle){
        if(this != &circle){
            X= circle.X;
            Y = circle.Y;
            color = circle.color;
            radius = circle.radius;
            cout<<"In Circle Copy Constructor"<<endl;
        }
        else cout<<"In Circle Copy Constructor: Self-copying"<<endl;
    }
    //Assignment operator
    Circle& operator=(const Circle& circle){
        if(this != &circle){
            X= circle.X;
            Y = circle.Y;
            color = circle.color;
            radius = circle.radius;
            cout<<"In Circle Assignment Operator"<<endl;
        }
        else cout<<"In Circle Assignment Operator: Self-copying"<<endl;
        return *this;
    }
    float computeArea() const{return radius*radius*M_PI;}
    
};

#endif /* CIRCLE_H */

