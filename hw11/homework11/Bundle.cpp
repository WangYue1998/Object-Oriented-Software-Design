/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bundle.cpp
 * Author: wy
 * 
 * Created on March 10, 2019, 2:50 PM
 */

#include "Bundle.h"
#include "Item.h"
#include <vector>
#include <iostream>
#include <algorithm>

Bundle::Bundle(string name , double discount): Item(name,0){rate = discount;}
void Bundle::addItem(Item* item){
    items.push_back(item);
    bundle_price += item->getPrice()* rate;
}
unsigned int Bundle::getPrice() const{
   return bundle_price;
}
void Bundle::print() const{
    cout<<"Bundle "<<m_name<<" contains:(";
    for(int i=0; i<items.size(); i++){
        items[i]->print();
    }
    cout<<"; Bundle Price="<<bundle_price<<");";
}

