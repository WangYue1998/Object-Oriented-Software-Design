/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackBasedCalVisitor.cpp
 * Author: wy
 * 
 * Created on March 22, 2019, 2:32 PM
 */

#include "StackBasedCalVisitor.h"
#include "Node.h"
#include <stack>
#include <string>
#include "Visitor.h"
#include "TerminalNode.h"
#include "NonTerminalNode.h"
  
void StackBasedCalVisitor::VisitTerminalNode( TerminalNode* trn){
   m_stack.push(stod(trn->getValue()));
};
void StackBasedCalVisitor::VisitNonTerminalNode(NonTerminalNode* ntrn){
   ntrn->getLeftChild()->Accept(this);
   ntrn->getRightChild()->Accept(this);
   
   string op = ntrn->getValue();

   double lv;
   double rv;
   
   rv = m_stack.top();
   m_stack.pop();
   lv = m_stack.top();
   m_stack.pop();
   

   if (op =="+"){
       double value = lv + rv;
       m_stack.push(value);  
   }
   if (op =="-"){
       double value = lv - rv;
       m_stack.push(value);  
   }
   if (op =="*"){
       double value = lv * rv;
       m_stack.push(value);  
   }
   if (op =="/"){
       double value = lv / rv;
       m_stack.push(value);  
   }
   
  
}


double StackBasedCalVisitor::getResult(){
   double result = m_stack.top();
   m_stack.pop();
   return result;
}