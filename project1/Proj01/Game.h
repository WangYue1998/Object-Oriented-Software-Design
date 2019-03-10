/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: linjiach
 *
 * Created on February 18, 2019, 6:58 PM
 */

#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>
#include <vector>
#include "Character.h"
#include "Big.h"
#include"Medium.h"
#include"Small.h"
#include "SmallFactory.h"
#include "BigFactory.h"
#include "MediumFactory.h"
#include <fstream>
using namespace std;

class Game{
protected:
    string delimiter = "\t"; // empty space
    vector <Character* > sis; 
public:
    Game(string s);
        
    
    void createSisters(string s);
    
    void printSisters();
    
    void getCharacters();
    
    void sort( string a );
        
    
    
    void getCharactersByRace();
        
    void getCharactersBySpeed();
    void getCharactersByHair();
      
};

#endif /* GAME_H */

