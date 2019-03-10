/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSearchable.h
 * Author: wy
 *
 * Created on February 5, 2019, 3:32 PM
 */

#ifndef INTEGERVECTORSEARCHABLE_H
#define INTEGERVECTORSEARCHABLE_H
#include <vector>
#include <iostream>
#include "SearchableVector.h"

class IntegerVectorSearchable: public SearchableVector {
protected:
    vector <int> m_IntegerVector;
    int query;
public:    
    virtual unsigned int getSize() const {
        return m_IntegerVector.size();
    }
    
    virtual string compareAt(int i) const {
        if(getInteger(i) > query)
            return ">";
        else if(getInteger(i) == query)
            return "=";
        else
            return "<";
    }
    void setQuery(int q){
        query = q;
    }
    
    virtual void print() const {
        for(int i=0; i<getSize(); i++){
            if (i == getSize()-1){
                cout<<m_IntegerVector[i]<<"; "<<endl;
            }
            else
                cout<<m_IntegerVector[i]<<"; ";
        }
    }
    
    int getInteger(int i) const{
        return m_IntegerVector[i];
    }
    
    void insertInteger(int element) {
        m_IntegerVector.push_back(element);
    }
};

#endif /* INTEGERVECTORSEARCHABLE_H */

