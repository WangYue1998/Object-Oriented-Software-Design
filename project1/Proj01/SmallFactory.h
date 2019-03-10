/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SmallFactory.h
 * Author: linjiach
 *
 * Created on February 18, 2019, 7:21 PM
 */

#ifndef SMALLFACTORY_H
#define SMALLFACTORY_H
#include "Character.h"
#include "Small.h"
#include "CharacterFactory.h"

class SmallFactory : public CharacterFactory{
public:
    virtual Character* createCharacter(string name, string size, string weight, string speed, string hairlen, string race, string special);
};

#endif /* SMALLFACTORY_H */

