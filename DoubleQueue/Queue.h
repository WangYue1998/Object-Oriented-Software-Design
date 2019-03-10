/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.h
 * Author: alexliu
 *
 * Created on January 24, 2017, 7:16 PM
 */

#ifndef QUEUE_H
#define QUEUE_H
#include "DoubleQueue.h"
#include "Queue.h"

class Queue: private DoubleQueue{
    public:
        void enqueue(int element){
            insertL(element);
        }
        int dequeue(){
            return removeR();
        }
        void print(){
            DoubleQueue::print();
        }
        int size(){
            return DoubleQueue::size();
        }
        bool isEmpty(){
            return DoubleQueue::isEmpty();
        }
};


#endif /* QUEUE_H */

