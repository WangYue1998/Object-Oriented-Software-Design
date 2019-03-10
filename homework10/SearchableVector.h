/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SearchableVector.h
 * Author: wy
 *
 * Created on February 14, 2019, 4:49 PM
 */

#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
# include <string>
using namespace std;
class SearchableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual string compareAt(int i) const = 0;
    virtual void print() const =0 ;
    
};



#endif /* SEARCHABLEVECTOR_H */

