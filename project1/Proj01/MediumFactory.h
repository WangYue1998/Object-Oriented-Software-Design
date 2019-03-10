/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MediumFactory.h
 * Author: L-Kingdom
 *
 * Created on February 19, 2019, 11:26 PM
 */

#ifndef MEDIUMFACTORY_H
#define MEDIUMFACTORY_H

#include "Character.h"
#include "Medium.h"
#include "CharacterFactory.h"

class MediumFactory : public CharacterFactory{
public:
    virtual Character* createCharacter(string name, string size, string weight, string speed, string hairlen, string race, string special);
};

#endif /* MEDIUMFACTORY_H */

