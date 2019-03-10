/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 *
/* 
 * File:   main.cpp
 * Author: alexliu
 *
 * Created on January 13, 2016, 11:55 PM
 */

#include <cstdlib>
#include <vector>
#include "Employee.h"
#include "Manager.h"
using namespace std;

void printCallByReference(Employee& emp){
    emp.print();
}
void printCallByValue(Employee emp){
    emp.print();
}
/*
 * 
 */
int main(int argc, char** argv) {
    Employee JohnSmith1("John","Smith1","Sales",2010);
    Employee JohnSmith2("John","Smith2","Sales",2011);
    Employee JohnSmith3("John","Smith3","Sales", 2012);
    
    vector<Employee*> salesEmployees;
    salesEmployees.push_back(&JohnSmith1);
    salesEmployees.push_back(&JohnSmith2);
    salesEmployees.push_back(&JohnSmith3);
    
    Manager TomCruiseManager("Tom","Cruise","Sales", 2000, salesEmployees, 2);
    
    Employee JohnDoe1("John","Doe1","Human Resources",2010);
    Employee JohnDoe2("John","Doe2","Human Resources",2011);
    Employee JohnDoe3("John","Doe3","Human Resources", 2012);
    
    vector<Employee*> hrEmployees;
    hrEmployees.push_back(&JohnDoe1);
    hrEmployees.push_back(&JohnDoe2);
    hrEmployees.push_back(&JohnDoe3);
    
    Manager AliceCooperManager("Alice","Cooper","Sales", 2000, hrEmployees, 2);
    
    vector<Employee*> allEmployees;// vector's element is pointer
    allEmployees.push_back(&JohnSmith1);// address
    allEmployees.push_back(&JohnSmith2);
    allEmployees.push_back(&JohnSmith3);
    allEmployees.push_back(&TomCruiseManager);
    allEmployees.push_back(&JohnDoe1);
    allEmployees.push_back(&JohnDoe2);
    allEmployees.push_back(&JohnDoe3);
    allEmployees.push_back(&AliceCooperManager);
    
    cout<<"***********"<<endl;
    for(int i=0;i<allEmployees.size();i++)
        allEmployees[i]->print();
    cout<<"***********"<<endl;
    
    /*
    JohnDoe3.print();
    AliceCooperManager.print();
    Employee* ePtr;
    ePtr=&JohnDoe3;
    ePtr->print();
    ePtr=&AliceCooperManager;
    ePtr->print();
    cout<<"printCallByReference:";
    printCallByReference(AliceCooperManager);
    cout<<endl;
    cout<<"printCallByValue:";
    printCallByValue(AliceCooperManager);
    cout<<endl;
    */
    return 0;
}

