/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <vector>
#include <iostream>
#include "SearchableVector.h"
#include "IntegerVectorSortable.h"
# include "IntegerVectorSortableSearchable.h"

unsigned int IntegerVectorSortableSearchable::getSize() const {
            return m_IntegerVector.size();
        }
    
string IntegerVectorSortableSearchable::compareAt(int i) const {
        if(IntegerVectorSortable::getInteger(i) > query)
            return ">";
        else if(IntegerVectorSortable::getInteger(i) == query)
            return "=";
        else
            return "<";
    }

void IntegerVectorSortableSearchable::setQuery(int q){
    query = q;
}

void IntegerVectorSortableSearchable::print() const {
    for(int i=0; i<getSize(); i++){
    if (i == getSize()-1){
        cout<<m_IntegerVector[i]<<"; "<<endl;
    }
    else
        cout<<m_IntegerVector[i]<<"; ";
    }
}

   