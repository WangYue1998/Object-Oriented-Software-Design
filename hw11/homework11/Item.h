/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Item.h
 * Author: wy
 *
 * Created on March 10, 2019, 2:37 PM
 */

#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;

class Item {
protected:
    string m_name;
    unsigned int m_price;
    Item(string name, unsigned int price);
    
public:
    virtual void print() const=0;
    virtual unsigned int getPrice() const;
};

#endif /* ITEM_H */

