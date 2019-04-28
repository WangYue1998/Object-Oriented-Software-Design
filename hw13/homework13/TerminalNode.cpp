/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TerminalNode.cpp
 * Author: wy
 * 
 * Created on March 22, 2019, 1:38 PM
 */

#include "TerminalNode.h"       
using namespace std;
#include "Node.h"
#include <iostream>
#include <vector>

TerminalNode::TerminalNode(string value):Node(value){};
void TerminalNode::Accept(Visitor* v){
    v->VisitTerminalNode(this);
};
void TerminalNode::print(){
    cout<<m_value;
}


