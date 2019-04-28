/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Phone.h
 * Author: wy
 *
 * Created on March 10, 2019, 2:44 PM
 */

#ifndef PHONE_H
#define PHONE_H
#include "Item.h"
#include <iostream>
#include <string>
class Phone : public Item{
public:
    Phone(string name, unsigned int price, unsigned int year);
    virtual void print() const;


};

#endif /* PHONE_H */

