/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackBasedCalVisitor.h
 * Author: wy
 *
 * Created on March 22, 2019, 2:32 PM
 */

#ifndef STACKBASEDCALVISITOR_H
#define STACKBASEDCALVISITOR_H
#include "Node.h"
#include <stack>
#include <string>
#include "Visitor.h"
#include "TerminalNode.h"
#include "NonTerminalNode.h"


class StackBasedCalVisitor: public Visitor{
protected:
    std::stack<double> m_stack; 
public:
    
    StackBasedCalVisitor(){};
    virtual ~StackBasedCalVisitor(){};
    
    virtual void VisitTerminalNode( TerminalNode* trn);
       
    virtual void VisitNonTerminalNode(NonTerminalNode* ntrn);
    
    double getResult();

private:
    StackBasedCalVisitor(const StackBasedCalVisitor& orig){};

};


#endif /* STACKBASEDCALVISITOR_H */

