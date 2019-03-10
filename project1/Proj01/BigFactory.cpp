/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Character.h"
#include "Big.h"
#include "CharacterFactory.h"
#include "BigFactory.h"

Character* BigFactory::createCharacter(string name, string size, string weight, string speed, string hairlen, string race, string special){
    Character* sc = new Big(name,size,weight,speed,hairlen,race,special);
    return sc;
}
