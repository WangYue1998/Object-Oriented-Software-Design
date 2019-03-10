/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: wy
 *
 * Created on February 14, 2019, 5:10 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include "BubbleSortTemplate.h"

class BubbleSortIncreasing: public BubbleSortTemplate {
public:
    virtual bool needSwap(SortableVector* sv, int i, int j);
    
        
};

#endif /* BUBBLESORTINCREASING_H */

