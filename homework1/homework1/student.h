/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.h
 * Author: wy
 *
 * Created on January 8, 2019, 4:24 PM
 */

#ifndef STUDENT_H
#define STUDENT_H
class Student{
protected:
    string my_Name;
    string my_Major;
    string my_Country;
    unsigned short my_Age;
    
public:
    Student(const string& Name, const string& Major, const string& Country, const unsigned short Age){
        my_Name = Name;
        my_Major = Major;
        my_Country = Country;
        my_Age = Age;
    }
    string getName() const{
        return my_Name;
    }
    string getMajor() const{
        return my_Major;
    }
    string getCountry() const{
        return my_Country;
    }
    unsigned short getAge() const{
        return my_Age;
    }
    
    void setName(const string& Name){
        my_Name = Name;
    }
    void setMajor(const string& Major){
        my_Major = Major;
    }
    void setCountry(const string& Country){
        my_Country = Country;
    }
    void setAge(const unsigned short Age){
        my_Age = Age;
    }
};


#endif /* STUDENT_H */

