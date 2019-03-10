/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSortable.h
 * Author: wy
 *
 * Created on February 10, 2019, 4:01 PM
 */

#ifndef INTEGERVECTORSORTABLE_H
#define INTEGERVECTORSORTABLE_H
#include <vector>
#include <iostream>
#include "SortableVector.h"
using namespace std;


class IntegerVectorSortable: public SortableVector {
protected:
    vector <int> m_IntegerVector;
public:    
    virtual unsigned int getSize() const ;
    
    virtual bool smaller(int i, int j) const;
    
    virtual void swap(int i, int j);
    
    virtual void print() const ;
    
    int getInteger(int i) const;
    
    void insertInteger(int element);
};


#endif /* INTEGERVECTORSORTABLE_H */

