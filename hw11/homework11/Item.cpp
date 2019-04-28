/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Item.cpp
 * Author: wy
 * 
 * Created on March 10, 2019, 2:37 PM
 */

#include "Item.h"
using namespace std;
#include <string>
#include <iostream>

Item::Item(string name, unsigned int price): m_name(name),m_price(price){}

unsigned int Item::getPrice() const {
    return m_price;
}

