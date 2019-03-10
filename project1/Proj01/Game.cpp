/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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
#include"Game.h"
using namespace std;

Game::Game(string s){
     ifstream myfile(s);
     string line;
     if(myfile.is_open()){
         while(getline(myfile, line)){
             createSisters(line);
         }
     }
     myfile.close();
 }
    
void Game::createSisters(string s){
    if(s.find("small") != string::npos){
        vector<string > ele_file;  // <name, size...>
        SmallFactory sf;
        size_t pos = 0;
        string temp_s;
        while ((pos = s.find(delimiter)) != string::npos){
            temp_s = s.substr(0, pos);
            s.erase(0,pos + delimiter.length());
            ele_file.push_back(temp_s);
        } 
        Character* m = sf.createCharacter(ele_file[0], ele_file[1], ele_file[2], ele_file[3], ele_file[4], ele_file[5], s);
        sis.push_back(m);

    }
    else if (s.find("med") != string::npos){
        vector<string > ele_file;
        MediumFactory mf;
        size_t pos = 0;
        string temp_s;
        while ((pos = s.find(delimiter)) != string::npos ){
            temp_s = s.substr(0, pos);
            s.erase(0,pos + delimiter.length());
            ele_file.push_back(temp_s);
        } 
        Character* m = mf.createCharacter(ele_file[0], ele_file[1], ele_file[2], ele_file[3], ele_file[4], ele_file[5], s);
        sis.push_back(m);
    }
    else{
        vector<string > ele_file;
        BigFactory bf;
        size_t pos = 0;
        string temp_s;
        while ((pos = s.find(delimiter)) != string::npos ){
            temp_s = s.substr(0, pos);
            s.erase(0,pos + delimiter.length());
            ele_file.push_back(temp_s);
        } 
        Character* m = bf.createCharacter(ele_file[0], ele_file[1], ele_file[2], ele_file[3], ele_file[4], ele_file[5], s);
        sis.push_back(m);
    }
}
    
void Game::printSisters(){
    for(auto e : sis){
        e->print();
    }
}
    
void Game::getCharacters(){
    cout<<"************ Printing Sisters ************"<<endl;
    sort("name");
    printSisters();
    cout<<"************ **************** ************"<<endl;
}
    
void Game::sort( string a ){
    bool sorted = false;
    int n = sis.size();
    while( !sorted ){
        sorted = true;
        for(int i=1; i<n; i++){ 
            if( a== "name"){
                if(!(sis[i-1]->getname() < sis[i]->getname())){
                    Character* temp = sis[i-1];
                    sis[i-1]= sis[i];
                    sis[i] = temp;
                    sorted = false;
                }  
            }
            else if(a=="race"){
                if(!(sis[i-1]->getrace() < sis[i]->getrace())){
                    Character* temp = sis[i-1];
                    sis[i-1]= sis[i];
                    sis[i] = temp;
                    sorted = false;
                }   
            }
            else if (a =="speed"){
                if(!(sis[i-1]->getspeed() < sis[i]->getspeed())){
                    Character* temp = sis[i-1];
                    sis[i-1]= sis[i];
                    sis[i] = temp;
                    sorted = false;
                }     
            }
            else if(a=="hair"){
                if(!(sis[i-1]->gethairlen() < sis[i]->gethairlen())){
                    Character* temp = sis[i-1];
                    sis[i-1]= sis[i];
                    sis[i] = temp;
                    sorted = false;
                }  
            }
        }
        n--;
    }

}
        
    
    
void Game::getCharactersByRace(){
    cout<<"************ Printing Sisters: Order by Race ************"<<endl;
    sort("race" );
    printSisters();
    cout<<"************ **************** ************"<<endl;
}
        
void Game::getCharactersBySpeed(){
    cout<<"************ Printing Sisters: Order by Speed ************"<<endl;
    sort("speed");
    printSisters();
    cout<<"************ **************** ************"<<endl;
}
void Game::getCharactersByHair(){
    cout<<"************ Printing Sisters: Order by Hair ************"<<endl;
    sort("hair");
    printSisters();
    cout<<"************ **************** ************"<<endl;    
}
    
    

