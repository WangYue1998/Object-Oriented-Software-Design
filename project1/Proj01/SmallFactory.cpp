/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Character.h"
#include "Small.h"
#include "CharacterFactory.h"
#include "SmallFactory.h"

Character* SmallFactory::createCharacter(string name, string size, string weight, string speed, string hairlen, string race, string special){
      Character* sc = new Small(name,size,weight,speed,hairlen,race,special);
      return sc;
  }
