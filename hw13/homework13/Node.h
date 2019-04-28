/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: wy
 *
 * Created on March 22, 2019, 1:32 PM
 */

#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
#include <string>
#include <iostream>
#include "Visitor.h"
class Node{
protected:
    string m_value;

public:
    Node(string value);
    virtual ~Node(){};
    string getValue();
    virtual void Accept(Visitor*)=0;
    virtual void print() =0;
};

#endif /* NODE_H */

