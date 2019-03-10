/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.h
 * Author: wy
 *
 * Created on January 15, 2019, 7:30 PM
 */

#ifndef QUEUE_H
#define QUEUE_H
using namespace std;

class Queue: private Dequeue{
protected:
    int max_size;
public:
    Queue (int size){
        max_size = size;
    }
    void push ( string x ) { if ( full()== false) {insertL(x);} };
    string pop() { if (v.size() > 0){return removeR(); }else{return "NULL";} };
    bool full() {return v.size() >= max_size;}
};

#endif /* QUEUE_H */

