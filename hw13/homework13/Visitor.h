/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.h
 * Author: wy
 *
 * Created on March 22, 2019, 1:41 PM
 */

#ifndef VISITOR_H
#define VISITOR_H

class TerminalNode;
class NonTerminalNode;

class Visitor {
public:
    Visitor(){};
    virtual ~Visitor(){};
    virtual void VisitTerminalNode(TerminalNode*)=0;
    virtual void VisitNonTerminalNode(NonTerminalNode*)=0;
    
};

#endif /* VISITOR_H */

