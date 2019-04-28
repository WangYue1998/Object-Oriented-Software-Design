/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpParser.cpp
 * Author: wy
 * 
 * Created on March 22, 2019, 1:32 PM
 */

#include "ExpParser.h"
#include <string>
#include <iostream>
#include "Builder.h"
#include "ExpBuilder.h"


void ExpParser::setBuilder(ExpBuilder* builder){
    m_expBuilder=builder;
}

void ExpParser::parse(string exp){
    string literal;
    for(int i=0; i<exp.size(); i++){
        switch(exp[i]){
            case '(':
                if(literal.size() > 0){
                    m_expBuilder->addLiteral(literal);
                    literal.clear();
                }
                m_expBuilder->addLeftParenthesis();
                break;
            case ')':
                if(literal.size() > 0){
                    m_expBuilder->addLiteral(literal);
                    literal.clear();
                }
                m_expBuilder->addRightParenthesis();
                break;
            case '+':
                if(literal.size() > 0){
                    m_expBuilder->addLiteral(literal);
                    literal.clear();
                }
                m_expBuilder->addOperand("+");
                break;
            case '-':
                if(literal.size() > 0){
                    m_expBuilder->addLiteral(literal);
                    literal.clear();
                }
                m_expBuilder->addOperand("-");
                break;
            case '*':
                if(literal.size() > 0){
                    m_expBuilder->addLiteral(literal);
                    cout<<literal<<endl;
                    literal.clear();
                }
                m_expBuilder->addOperand("*");
                break;
            case '/':
                if(literal.size() > 0){
                    m_expBuilder->addLiteral(literal);
                    literal.clear();
                }
                m_expBuilder->addOperand("/");
                break;
            default:
                literal.push_back(exp[i]);
                break;
        }
    }
}



