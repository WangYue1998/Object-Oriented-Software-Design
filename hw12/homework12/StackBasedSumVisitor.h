/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackBasedSumVisitor.h
 * Author: wy
 *
 * Created on March 18, 2019, 8:57 AM
 */

#ifndef STACKBASEDSUMVISITOR_H
#define STACKBASEDSUMVISITOR_H
#include "Node.h"
#include <stack>
#include "Visitor.h"


class StackBasedSumVisitor: public Visitor{
protected:
    std::stack<unsigned int> m_stack; 
public:
    
    StackBasedSumVisitor(){};
    
    virtual ~StackBasedSumVisitor(){};
    

    virtual void VisitTerminalNode( TerminalNode* trn);
    virtual void VisitNonTerminalNode(NonTerminalNode* ntrn);
    double getResult();
    

private:
    StackBasedSumVisitor(const StackBasedSumVisitor& orig){};

};

#endif /* STACKBASEDSUMVISITOR_H */

