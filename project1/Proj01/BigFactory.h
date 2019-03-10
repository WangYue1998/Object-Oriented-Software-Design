/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BigFactory.h
 * Author: L-Kingdom
 *
 * Created on February 19, 2019, 11:27 PM
 */

#ifndef BIGFACTORY_H
#define BIGFACTORY_H

#include "Character.h"
#include "Big.h"
#include "CharacterFactory.h"

class BigFactory : public CharacterFactory{
public:
    virtual Character* createCharacter(string name, string size, string weight, string speed, string hairlen, string race, string special);
};

#endif /* BIGFACTORY_H */

