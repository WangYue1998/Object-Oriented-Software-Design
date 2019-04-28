/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpParser.h
 * Author: wy
 *
 * Created on March 22, 2019, 1:32 PM
 */

#ifndef EXPPARSER_H
#define EXPPARSER_H


#include <string>
#include <iostream>
#include "Builder.h"
#include "ExpBuilder.h"

class ExpParser{
protected:
    Builder* m_expBuilder;
public:
    void setBuilder(ExpBuilder* builder);
    
    void parse(string exp);
    
};

#endif /* EXPPARSER_H */

