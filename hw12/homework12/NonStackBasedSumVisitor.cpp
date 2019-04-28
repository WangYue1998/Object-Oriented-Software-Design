/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NonStackBasedSumVisitor.cpp
 * Author: wy
 * 
 * Created on March 18, 2019, 8:57 AM
 */

#include "NonStackBasedSumVisitor.h"
#include "Node.h"
#include <stack>
#include "Visitor.h"
#include "TerminalNode.h"
#include"NonTerminalNode.h"

NonStackBasedSumVisitor::NonStackBasedSumVisitor(){
    sum=0;
};


void NonStackBasedSumVisitor::VisitTerminalNode(TerminalNode* trn){
    sum+= trn->getValue();
}
void NonStackBasedSumVisitor::VisitNonTerminalNode(NonTerminalNode* ntrn){
    sum+= ntrn->getValue();
    for (int i =0; i<ntrn->getChildernSize();i++){
        ntrn->getChildren(i)->Accept(this);

    }

}
double NonStackBasedSumVisitor::getResult(){
    int result = sum;
    sum =0;
    return result;
}



