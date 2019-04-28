/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpBuilder.h
 * Author: wy
 *
 * Created on March 22, 2019, 1:31 PM
 */

#ifndef EXPBUILDER_H
#define EXPBUILDER_H
#include <stack>
#include <iostream>
#include "Node.h"
#include "NonTerminalNode.h"
#include "TerminalNode.h"
#include "Builder.h"

class ExpBuilder: public Builder{
protected:
    stack<Node*> expStack;
public:
    virtual void addOperand(string operand);
    
    virtual void addLiteral(string literal);
    
    virtual void addLeftParenthesis(){};
    
    virtual void addRightParenthesis();
    
    virtual Node* getExpression();
};

#endif /* EXPBUILDER_H */

