/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: alexliu
 *
 * Created on January 13, 2016, 11:56 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee{
protected:
    string m_FirstName;
    string m_LastName;
    string m_DepartmentName;
    unsigned short m_HiringYear;
    
public:
    Employee(const string& firstName,
                          const string& lastName,
                          const string& departmentName,
                          const unsigned short& hireYear){
        m_FirstName=firstName;
        m_LastName=lastName;
        m_DepartmentName=departmentName;
        m_HiringYear=hireYear;
    }
    Employee(){
        m_FirstName="";
        m_LastName="";
        m_DepartmentName="";
        m_HiringYear=0;
    }
    virtual void print() const {
        cout<<"Employee: "<<m_FirstName<<m_LastName<<";"<<m_DepartmentName<<";"<<m_HiringYear<<endl;
    }
    string getFirstName() const{
        return m_FirstName;
    }
    string getLastName() const{
        return m_LastName;
    }
    string getDepartmentName() const{
        return m_DepartmentName;
    }
    unsigned short getHiringYear() const{
        return m_HiringYear;
    }
    void setFirstName(const string& firstName){
        m_FirstName=firstName;
    }
    void setLastName(const string& lastName){
        m_LastName=lastName;
    }
    void setDepartmentName(const string& departmentName){
        m_DepartmentName=departmentName;
    }
    void setHiringYear(const unsigned int& hiringYear){
        m_HiringYear=hiringYear;
    }
};

#endif /* EMPLOYEE_H */

