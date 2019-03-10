 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SearchableVector.h
 * Author: wy
 *
 * Created on February 5, 2019, 3:30 PM
 */

#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
class SearchableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual string compareAt(int i) const = 0;
};

#endif /* SEARCHABLEVECTOR_H */

