/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Big.h
 * Author: L-Kingdom
 *
 * Created on February 19, 2019, 11:23 PM
 */

#ifndef BIG_H
#define BIG_H

#include "Character.h"
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
using namespace std;

class Big: public Character{
protected:
    string skill;
public:
    Big(string name, string size, string weight, string speed, string hairlen, string race, string special);
    virtual void print();
};

#endif /* BIG_H */

