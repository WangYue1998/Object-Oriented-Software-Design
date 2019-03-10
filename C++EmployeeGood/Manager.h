/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 *
/* 
 * File:   Manager.h
 * Author: alexliu
 *
 * Created on January 13, 2016, 11:56 PM
 */

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

class Manager: public Employee{
protected:
    vector<Employee*> m_Group;
    unsigned short m_Level;
public:
    Manager(const string& firstName,const string& lastName,const string& departmentName,const unsigned short& hireYear,const vector<Employee*>& group, const unsigned short& level):Employee(firstName,lastName,departmentName,hireYear){
        m_Group=group;
        m_Level=level;
    }
    virtual void print() const {
        cout<<"Manager: "<<m_FirstName<<m_LastName<<";"<<m_DepartmentName<<";"<<m_HiringYear<<";"<<m_Level<<endl;
    }
};

#endif /* MANAGER_H */

