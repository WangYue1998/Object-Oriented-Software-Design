/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TerminalNode.h
 * Author: wy
 *
 * Created on March 22, 2019, 1:38 PM
 */

#ifndef TERMINALNODE_H
#define TERMINALNODE_H
using namespace std;
#include "Node.h"
#include <iostream>
#include <vector>
class TerminalNode : public Node{
public:
    TerminalNode(string value);
    virtual ~TerminalNode(){};
    virtual void Accept(Visitor* v);
    virtual void print();
};


#endif /* TERMINALNODE_H */

