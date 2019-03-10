/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.h
 * Author: alexliu
 *
 * Created on January 24, 2017, 7:31 PM
 */

#ifndef STACK_H
#define STACK_H

#include "DoubleQueue.h"


class Stack {
protected:
    DoubleQueue dq;
public:
    //Stack();
    //Stack(const Stack& orig);
    //virtual ~Stack();
    
    void push(int element){
        dq.insertL(element);
    }
    
    int pop(){
        return dq.removeL();
    }
    
    int top(){
        return dq.getLeft();
    }
    
    int print(){
        dq.print();
    }
    
    int size(){
        return dq.size();
    }
    
    bool isEmpty(){
        return dq.isEmpty();
    }

};

#endif /* STACK_H */

