/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Laptop.cpp
 * Author: wy
 * 
 * Created on March 10, 2019, 2:47 PM
 */

#include "Laptop.h"
#include <iostream>
#include <string>
Laptop::Laptop(string name, unsigned int price, string type):Item(name,price){}
void Laptop::print() const{
    cout<<"(Laptop name="<<m_name<<", Laptop price="<<m_price<<");";
}

