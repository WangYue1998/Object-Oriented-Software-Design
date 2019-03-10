/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Character.h
 * Author: linjiach
 *
 * Created on February 18, 2019, 7:00 PM
 */

#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
using namespace std;

class Character{   
protected:
    string  ch_name; 
    string ch_size;
    double ch_weight;
    string ch_speed;
    double ch_hairlen;
    string ch_race;
      
public:
    string getname();
    string getsize();
    double getweight();
    int getspeed();
    double gethairlen();
    string getrace();
    virtual void print() = 0;
};

#endif /* CHARACTER_H */

