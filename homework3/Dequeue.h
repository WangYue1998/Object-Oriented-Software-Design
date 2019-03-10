/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dequeue.h
 * Author: wy
 *
 * Created on January 15, 2019, 7:29 PM
 */

#ifndef DEQUEUE_H
#define DEQUEUE_H
#include <vector>
using namespace std;

class Dequeue{
public:
    
    vector<string> v; 
    
    void insertL(string key){
        v.insert(v.begin(),key);
    }
    
    void insertR(string key){
        v.push_back(key);
    }
    
    string removeL(){
        string r = v.front();
        v.erase(v.begin());
        return r;
    }
    string removeR(){
        string r = v.back();
        v.pop_back();
        return r;
    }

};

#endif /* DEQUEUE_H */

