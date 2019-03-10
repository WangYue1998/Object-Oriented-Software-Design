/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wy
 *
 * Created on January 12, 2019, 2:25 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include"Dequeue.h"
#include"Stack.h"
#include"Queue.h"

#include <iostream>




int main(int argc, char** argv) {
    Dequeue dq;
    dq.insertL("string1");
    dq.insertL("string2");
    dq.insertL("string3");
    dq.insertL("string4");
    dq.insertL("string5");
    dq.insertR("string6");
    dq.insertR("string7");
    dq.insertR("string8");
    cout<<dq.removeL()<<endl;
    cout<<dq.removeL()<<endl;
    cout<<dq.removeL()<<endl;
    cout<<dq.removeL()<<endl;
    cout<<dq.removeL()<<endl;
    cout<<dq.removeL()<<endl;
    cout<<dq.removeL()<<endl;
    cout<<dq.removeL()<<endl;
    cout<<endl; 
    
    Stack sk;
    sk.push("string100");
    sk.push("string200");
    sk.push("string300");
    sk.push("string400");
    //cout<<sk.top()<<endl;
    cout<<endl;
    cout<<sk.pop()<<endl;
    cout<<sk.pop()<<endl;
    cout<<sk.pop()<<endl;
    cout<<sk.pop()<<endl;
    cout<<endl;
    
    Queue q(5);
    q.push("string10");
    q.push("string20");
    q.push("string30");
    q.push("string40");
    //cout<<q.full()<<endl;
    cout<< q.pop()<<endl;
    cout<< q.pop()<<endl;
    cout<< q.pop()<<endl;
    cout<< q.pop()<<endl;
    
    return 0;

};

