/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: wy
 * 
 * Created on March 22, 2019, 1:32 PM
 */

#include "Node.h"
#include <iostream>
using namespace std;
#include <string>
#include <iostream>
#include "Visitor.h"
Node::Node(string value):m_value(value){};
string Node::getValue(){ return m_value;}

