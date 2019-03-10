/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wy
 *
 * Created on January 29, 2019, 2:05 PM
 */

#include <cstdlib>
#include"queue.h"
#include<iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    queue<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    for(int i=0;i<6; i++)
        cout<<"Pop s1: "<<s1.pop()<<endl;
    
    queue<double> s2;
    s2.push(0.1);
    s2.push(0.2);
    s2.push(0.3);
    s2.push(0.4);
    s2.push(0.5);
    s2.push(0.6);
    for(int i=0;i<6; i++)
        cout<<"Pop s2: "<<s2.pop()<<endl;
    
    return 0;
}

