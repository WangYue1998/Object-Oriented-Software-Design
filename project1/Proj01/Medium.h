/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medium.h
 * Author: L-Kingdom
 *
 * Created on February 19, 2019, 11:24 PM
 */

#ifndef MEDIUM_H
#define MEDIUM_H

#include "Character.h"
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
using namespace std;

class Medium: public Character{
protected:
    string weapon;
public:
    Medium(string name, string size, string weight, string speed, string hairlen, string race, string special);
    
  
    virtual void print();
};
#endif /* MEDIUM_H */

