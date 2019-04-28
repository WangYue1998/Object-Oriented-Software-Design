/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NonTerminalNode.h
 * Author: wy
 *
 * Created on March 22, 2019, 1:41 PM
 */

#ifndef NONTERMINALNODE_H
#define NONTERMINALNODE_H
#include <iostream>
#include "Node.h"
#include <vector>
#include <algorithm>

class NonTerminalNode: public Node{
protected:
    Node* m_leftChild;
    Node* m_rightChild;
public:
    NonTerminalNode(string value);
    virtual ~NonTerminalNode();
    virtual void Accept(Visitor* v);
    
    void setLeftChild(Node* left);
    void setRightChild(Node* left);
    Node* getLeftChild() const;
    Node* getRightChild() const;



    virtual void print();

    
};

#endif /* NONTERMINALNODE_H */

