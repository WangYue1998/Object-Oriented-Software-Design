/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wy
 *
 * Created on March 22, 2019, 1:28 PM
 */
//using namespace std;
#include <cstdlib>
#include <string>
#include <iostream>
#include "Node.h"
#include "Builder.h"
#include "ExpBuilder.h"
#include "ExpParser.h"
#include "StackBasedCalVisitor.h"
/*
 * 
 */
int main(int argc, char** argv) {
    ExpBuilder builder;
    ExpParser parser;
    parser.setBuilder(&builder);
    string input="(((10+500)*70)-(60/50))"; 
    parser.parse(input);
    Node* root = builder.getExpression(); 
    cout<<input<<endl;
    root->print();
    StackBasedCalVisitor sbsv;
    root->Accept(&sbsv);
    cout<<endl<<"StackBasedSumVisitor Result: "<<sbsv.getResult()<<endl; 
    return 0;
}

