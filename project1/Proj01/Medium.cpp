/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Character.h"
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
using namespace std;
#include"Medium.h"

Medium::Medium(string name, string size, string weight, string speed, string hairlen, string race, string special){
    ch_name = name;
    ch_size = size;
    ch_weight = stod(weight);
    ch_speed = speed;
    ch_hairlen = stod(hairlen);
    ch_race = race;
    weapon = special;
}
    
  
void Medium::print(){
    ostringstream oss;
    oss << "Name: " << left <<setw(10)<< ch_name 
            << "Size: " << left <<setw(10) << ch_size
            << "Weight: " << left <<setw(10) << ch_weight
            << "Speed: " << left <<setw(10) << ch_speed
            << "HairLen: "  << left << setw(10) << ch_hairlen
            << "Race: " << left <<setw(10) << ch_race
            << "Weapon: " << left << setw(5) << weapon << endl;
    cout <<left << setw(10)<<oss.str();
}
