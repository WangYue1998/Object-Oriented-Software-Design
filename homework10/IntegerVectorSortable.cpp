/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "IntegerVectorSortable.h"
#include <vector>
#include <iostream>
#include "SortableVector.h"
using namespace std;

unsigned int  IntegerVectorSortable:: getSize() const {
    return m_IntegerVector.size();
}

bool IntegerVectorSortable::smaller(int i, int j) const{
        if(getInteger(i) < getInteger(j))
            return true;
        else
            return false;
    }
void IntegerVectorSortable::swap(int i, int j){
        int temp = m_IntegerVector[i];
        m_IntegerVector[i]=m_IntegerVector[j];
        m_IntegerVector[j]=temp;
    }

void IntegerVectorSortable::print() const {
        for(int i=0; i<getSize(); i++){
            if (i == getSize()-1){
                cout<<m_IntegerVector[i]<<"; "<<endl;
            }
            else
                cout<<m_IntegerVector[i]<<"; ";
        }
    }

int IntegerVectorSortable::getInteger(int i) const{
        return m_IntegerVector[i];
    }

void IntegerVectorSortable::insertInteger(int element) {
        m_IntegerVector.push_back(element);
    }