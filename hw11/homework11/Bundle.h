/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bundle.h
 * Author: wy
 *
 * Created on March 10, 2019, 2:50 PM
 */

#ifndef BUNDLE_H
#define BUNDLE_H

#include "Item.h"
#include <vector>
#include <iostream>
#include <algorithm>

class Bundle : public Item {
protected:
    vector<Item*> items;
    double rate;
    unsigned int bundle_price;
public:
    Bundle(string name , double discount);
    virtual void addItem(Item* item);
    virtual unsigned int getPrice() const;
    virtual void print() const;

};

#endif /* BUNDLE_H */

