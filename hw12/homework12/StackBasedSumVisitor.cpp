/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackBasedSumVisitor.cpp
 * Author: wy
 * 
 * Created on March 18, 2019, 8:57 AM
 */

#include "StackBasedSumVisitor.h"
#include "Node.h"
#include <stack>
#include "Visitor.h"
#include "TerminalNode.h"
#include"NonTerminalNode.h"

void StackBasedSumVisitor::VisitTerminalNode( TerminalNode* trn){
   m_stack.push(trn->getValue());
}
void StackBasedSumVisitor::VisitNonTerminalNode(NonTerminalNode* ntrn){
   unsigned int sum = ntrn->getValue();
   for (int i =0; i<ntrn->getChildernSize();i++){
       ntrn->getChildren(i)->Accept(this);
   }
   for (int i =0; i<ntrn->getChildernSize();i++){
       sum += m_stack.top();
       m_stack.pop();
   }
   m_stack.push(sum);
}
double StackBasedSumVisitor::getResult(){
   int result = m_stack.top();
   m_stack.pop();
   return result;
}
    

