/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Laptop.h
 * Author: wy
 *
 * Created on March 10, 2019, 2:47 PM
 */

#ifndef LAPTOP_H
#define LAPTOP_H
#include "Item.h"
#include <iostream>
#include <string>
class Laptop : public Item{
public:
    Laptop(string name, unsigned int price, string type);
    virtual void print() const;
};

#endif /* LAPTOP_H */

