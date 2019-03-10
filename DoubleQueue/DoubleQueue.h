/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoubleQueue.h
 * Author: alexliu
 *
 * Created on January 24, 2017, 6:13 PM
 */

#ifndef DOUBLEQUEUE_H
#define DOUBLEQUEUE_H

#include <vector>

class DoubleQueue{
protected:
    vector<int> m_Container;

public:
    DoubleQueue(){}
    
    virtual ~DoubleQueue(){}
    
    void insertL(int element){
        m_Container.insert(m_Container.begin(), element);
    }
    
    void insertR(int element){
        m_Container.insert(m_Container.end(), element);
    }
    
    int getLeft(){
        return m_Container.front();
    }
    
    int getRight(){
        return m_Container.back();
    }
    
    int removeL(){
        int left = getLeft();
        m_Container.erase(m_Container.begin());
        return left;
    }
    
    int removeR(){
        int right = getRight();
        m_Container.erase(m_Container.end()-1);
        return right;
    }
    
    void print(){
        for(int i=0; i<m_Container.size(); i++)
            cout<<m_Container[i]<<endl;
    }
    
    int size(){
        return m_Container.size();
    }
    
    bool isEmpty(){
        if(m_Container.size()==0) return true;
        else return false;
    }
   
};

#endif /* DOUBLEQUEUE_H */

