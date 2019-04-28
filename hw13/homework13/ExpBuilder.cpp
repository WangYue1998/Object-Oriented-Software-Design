/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpBuilder.cpp
 * Author: wy
 * 
 * Created on March 22, 2019, 1:31 PM
 */

#include "ExpBuilder.h"
#include <stack>
#include <iostream>
#include "Node.h"
#include "NonTerminalNode.h"
#include "TerminalNode.h"
#include "Builder.h"


void ExpBuilder::addOperand(string operand){
   Node* newOperand = new NonTerminalNode(operand);
   expStack.push(newOperand);
};

void ExpBuilder::addLiteral(string literal){
   Node* newOperand = new TerminalNode(literal);
   expStack.push(newOperand);
};



void ExpBuilder::addRightParenthesis(){
   Node* rightChild = expStack.top();
   expStack.pop();
   NonTerminalNode* parent = dynamic_cast<NonTerminalNode*>(expStack.top());
   expStack.pop();
   Node* leftChild = expStack.top();
   expStack.pop();
   parent->setLeftChild(leftChild);
   parent->setRightChild(rightChild);
   expStack.push(parent);
};

Node* ExpBuilder::getExpression(){
   Node* root = expStack.top();
   expStack.pop();
   return root;
};


