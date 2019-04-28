/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wy
 *
 * Created on March 10, 2019, 2:34 PM
 */

#include <cstdlib>

using namespace std;
#include "Phone.h"
#include "Laptop.h"
#include "Bundle.h"
#include <iostream>
/*
 * 
 */
int main(int argc, char** argv) {
    Bundle* b1=new Bundle("b1", 0.9);
    b1->addItem(new Phone("iPhone 7", 2, 2016)); b1->addItem(new Laptop("MacBook", 28, "2.1GHZ")); Bundle* b2=new Bundle("b2",0.8);
    b2->addItem(new Phone("iPhone 6", 8, 2015)); b2->addItem(new Phone("iPhone 5", 5, 2015)); b2->addItem(new Phone("iPhone 4", 4, 2015)); Bundle* b3=new Bundle("b3", 1.0);
    b3->addItem(b1);
    b3->addItem(b2);
    b3->print();
    
}

