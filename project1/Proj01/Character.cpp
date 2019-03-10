/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
using namespace std;
#include "Character.h"

 string Character::getname(){
        return ch_name;
    }
 string  Character::getsize(){
        return ch_size;
    }
double Character::getweight(){
        return ch_weight;   
    }
int Character::getspeed(){
        return stoi(ch_speed);
    }
double Character::gethairlen(){
        return ch_hairlen;
    }
string Character::getrace(){
        return ch_race;
    }