/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: wy
 *
 * Created on February 10, 2019, 4:10 PM
 */

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include "BubbleSortTemplate.h"
#include "SortableVector.h"

class BubbleSortDecreasing: public BubbleSortTemplate {
public:
    virtual bool needSwap(SortableVector* sv, int i, int j);
    
    
        
};

#endif /* BUBBLESORTDECREASING_H */

