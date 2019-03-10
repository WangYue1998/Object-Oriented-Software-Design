/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wy
 *
 * Created on January 17, 2019, 3:19 PM
 */

#include <cstdlib>
#include"Shape.h"
#include"Square.h"
#include"Circle.h"
#include <vector>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<Shape*> myShapes;
    
    Circle* circ1= new Circle(1,2,1,"black");
    Circle* circ2= new Circle(3,4,10,"white");
    Square* squ1= new Square(5,6,1,"red");
    Square* squ2= new Square(7,8,2,"black");
    Square* squ3= new Square(9,10,3,"white");
    Square* squ4= new Square(11,12,4,"red");
    
    myShapes.push_back(circ1);
    myShapes.push_back(circ2);
    myShapes.push_back(squ1);
    myShapes.push_back(squ2);
    myShapes.push_back(squ3);
    myShapes.push_back(squ4);
    
     cout<<"***********"<<endl;
    for(int i=0;i<myShapes.size();i++){
        cout<<myShapes[i]->printColor()<<endl;
        cout<<myShapes[i]->computeArea()<<endl;
    }
    cout<<"***********"<<endl;
    
    
    
   
    
    return 0;
}

