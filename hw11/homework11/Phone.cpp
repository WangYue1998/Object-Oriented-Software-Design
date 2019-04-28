/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Phone.cpp
 * Author: wy
 * 
 * Created on March 10, 2019, 2:44 PM
 */

#include "Phone.h"
#include "Item.h"
#include <iostream>
#include <string>

 Phone::Phone(string name, unsigned int price, unsigned int year):Item(name,price){}
 void Phone::print() const{
        cout<<"(Phone name="<<m_name<<", Phone price="<<m_price<<");";
    }

