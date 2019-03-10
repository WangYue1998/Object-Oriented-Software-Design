/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   queue.h
 * Author: wy
 *
 * Created on January 29, 2019, 2:07 PM
 */

#ifndef QUEUE_H
#define QUEUE_H
#include <vector>
using namespace std;
template <class QueueType> class queue{
protected:
    vector<QueueType> v; 
public:
    QueueType top(){
        return v.front();    
    }
    QueueType pop(){
        QueueType front = v.front();
        v.erase(v.begin());
        return front;
    }
    void push(const QueueType& x){
        v.push_back(x);
    }
    
    bool empty(){
        if(v.empty()){
            return true;}
        return false;  
    }
};

#endif /* QUEUE_H */