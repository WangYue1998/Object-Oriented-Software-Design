/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CharacterFactory.h
 * Author: linjiach
 *
 * Created on February 18, 2019, 7:18 PM
 */

#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H
#include <string>

using namespace std;
class CharacterFactory{
public:
    virtual Character* createCharacter(string name, string size, string weight, string speed, string hairlen, string race, string special) = 0;
};

#endif /* CHARACTERFACTORY_H */

