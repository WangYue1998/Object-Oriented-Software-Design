/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Small.h
 * Author: linjiach
 *
 * Created on February 18, 2019, 7:11 PM
 */

#ifndef SMALL_H
#define SMALL_H
#include "Character.h"
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
using namespace std;

class Small: public Character{
protected:
    string s;
    bool b;
public:
    Small(string name, string size, string weight, string speed, string hairlen, string race, string special);
    
    virtual void print();
    

};

#endif /* SMALL_H */

