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

   
    Circle* circ1= new Circle(1,2,1,"black");
    Circle circ2(3,4,10,"white");
    delete circ1;
   
    Square* squ1= new Square(5,6,1,"red");
    {Square squ2(7,8,2,"black");}
    delete squ1;
    

    
    
    
   
    
    return 0;
}

