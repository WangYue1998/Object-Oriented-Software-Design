/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wy
 *
 * Created on January 8, 2019, 4:22 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
#include"student.h"
#define Constsize 500
        
using namespace std;

void printconstsize(unsigned int constsize ){
    cout<<constsize<<endl;
}

void printconstsizePointer(const unsigned int* constsizePtr){
    cout<<*constsizePtr<<endl;
}

bool bornEarlier(const Student& stu1, const Student& stu2){
    return stu1.getAge()<stu2.getAge();
}


int main(int argc, char** argv) {
    printconstsize(Constsize);
    
    const unsigned int constsize = 200;
    printconstsizePointer(&constsize);
    
    const Student Wendy("Wendy","ComputerScience","China",21);
    const Student John("John","Accounting","US",22);
    
    cout<< bornEarlier(Wendy,John)<<endl;
    
    cout<<Wendy.getCountry()<<endl;
    
    return 0;
}

