/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NonTerminalNode.cpp
 * Author: wy
 * 
 * Created on March 22, 2019, 1:41 PM
 */

#include "NonTerminalNode.h"
using namespace std;
#include "Node.h"
#include <vector>
#include <iostream>
#include <algorithm>


NonTerminalNode::NonTerminalNode(string value):Node(value){
    m_leftChild = NULL;
    m_rightChild = NULL;
};
NonTerminalNode::~NonTerminalNode(){
    if(!m_leftChild) delete m_leftChild;
    if(!m_rightChild) delete m_rightChild;
};  
void NonTerminalNode::Accept(Visitor* v){
    v->VisitNonTerminalNode(this);
};

void NonTerminalNode::setLeftChild(Node* left){
    m_leftChild = left;
}
void NonTerminalNode::setRightChild(Node* left){
    m_rightChild = left;
}
Node* NonTerminalNode::getLeftChild() const { return m_leftChild;}
Node* NonTerminalNode::getRightChild() const { return m_rightChild;}



void NonTerminalNode::print(){
    if(m_leftChild){
        cout<<"(";
        m_leftChild->print();
    }
    cout<<m_value;
    if(m_rightChild){
        m_rightChild->print();
        cout<<")";
    }
};


