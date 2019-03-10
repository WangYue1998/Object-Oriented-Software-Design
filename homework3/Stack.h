/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.h
 * Author: wy
 *
 * Created on January 15, 2019, 7:29 PM
 */

#ifndef STACK_H
#define STACK_H
using namespace std;

class Stack: private Dequeue{
public:
    void push ( string x ) { insertL(x); };
    string pop() { return removeL(); };
    string top() {return v.front();};
};

#endif /* STACK_H */

