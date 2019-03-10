/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSortableSearchable.h
 * Author: wy
 *
 * Created on February 14, 2019, 4:39 PM
 */

#ifndef INTEGERVECTORSORTABLESEARCHABLE_H
#define INTEGERVECTORSORTABLESEARCHABLE_H
#include <vector>
#include <iostream>
#include "SearchableVector.h"
#include "IntegerVectorSortable.h"

class IntegerVectorSortableSearchable: public SearchableVector, public IntegerVectorSortable {
protected:
    int query;  
    
public: 
    
    virtual unsigned int getSize() const override;
    
    virtual string compareAt(int i) const override; 
    
    void setQuery(int q) ;

    virtual void print() const override;
   
    
};


#endif /* INTEGERVECTORSORTABLESEARCHABLE_H */

