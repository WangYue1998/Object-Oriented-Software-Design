/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "BubbleSortTemplate.h"
#include "SortableVector.h"
#include"BubbleSortDecreasing.h"
bool BubbleSortDecreasing::needSwap(SortableVector* sv, int i, int j){
        return sv->smaller(i,j);  
    }