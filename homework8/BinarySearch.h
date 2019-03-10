/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearch.h
 * Author: wy
 *
 * Created on February 5, 2019, 3:26 PM
 */

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
#include "SearchableVector.h"


class BinarySearch{
public:
    int search(SearchableVector* searchableVector){
        int right=searchableVector->getSize()-1;
        int left = 0;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (searchableVector->compareAt(middle) == "=")
                return middle;
            else if (searchableVector->compareAt(middle) == ">")
                right = middle - 1;
            else
                left = middle + 1;
         }
        return -1; 
    };
};
#endif /* BINARYSEARCH_H */