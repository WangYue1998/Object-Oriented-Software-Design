/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alexliu
 *
 * Created on January 24, 2017, 6:12 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

#define NDEBUG 
#include <assert.h>

#include "DoubleQueue.h"
#include "Queue.h"
#include "Stack.h"

int slowSimpleFunc(){
    return 1;
}

int fastComplexFunc(){
    return 1;
}

int main(int argc, char** argv) {
    DoubleQueue dq;
    dq.insertL(1);
    dq.insertL(2);
    dq.insertL(3);
    dq.insertL(4);
    dq.insertL(5);
    dq.insertR(6);
    dq.insertR(7);
    dq.insertR(8);
    dq.print();
    
    cout<<"***********"<<endl;
    
    cout<<"dq.removeL():"<<dq.removeL()<<endl;
    cout<<"dq.removeR():"<<dq.removeR()<<endl;
    dq.print();
     
    cout<<"***********"<<endl;
    
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    
    int qsize=q.size();
    for(int i=0; i<qsize; i++)
        cout<<q.dequeue()<<endl;
    
    cout<<"***********"<<endl;
    
    Stack s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    
    int ssize=s.size();
    for(int i=0; i<ssize; i++){
        assert(!(s.isEmpty()));
        cout<<s.pop()<<endl;
    }
    
    assert(2==3);
    
    int x=fastComplexFunc();
    assert(x==slowSimpleFunc());
    
    return 0;
}

