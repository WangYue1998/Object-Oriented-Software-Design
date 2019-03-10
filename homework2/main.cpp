/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wy
 *
 * Created on January 12, 2019, 9:59 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class World{
public:
    int publicDataInWorld;
    void a(int x=0){
        cout<< publicDataInWorld<<endl;
    }
protected:
    int protectedDataInWorld;
    void b(int x=0){
        cout<< protectedDataInWorld<<endl;
    }
private:
    int privateDataInWorld;
    void c(int x=0){
        cout<< privateDataInWorld<<endl;
    }
public:
    World(int a,int b,int c):publicDataInWorld(a),protectedDataInWorld(b),privateDataInWorld(c){
    }
};
class PublicJapan: public World{
public:
    PublicJapan(int a,int b,int c):World(a,b,c){
    }
    
    void print(){
        cout<<publicDataInWorld<<endl;
        cout<<protectedDataInWorld<<endl;
        a(publicDataInWorld);
        b(protectedDataInWorld);
        //c(privateDataInWorld);   //error: 'c' is a private member of 'World'
        //cout<<privateDataInWorld<<endl;  
        //error: 'privateDataInWorld' is a private member of 'World'
    }
};
class ProtectedJapan: protected World{
public:
    ProtectedJapan(int a,int b,int c):World(a,b,c){
    }
    
    void print(){
        cout<<publicDataInWorld<<endl;
        cout<<protectedDataInWorld<<endl;
        a(publicDataInWorld);
        b(protectedDataInWorld);
        //c(privateDataInWorld); //error: 'c' is a private member of 'World'
        //cout<<privateDataInWorld<<endl; 
        //error: 'privateDataInWorld' is a private member of 'World'
    }
};
class PrivateJapan: private World{
public:
    PrivateJapan(int a,int b,int c):World(a,b,c){
    }
    
    void print(){
        cout<<publicDataInWorld<<endl;
        cout<<protectedDataInWorld<<endl;
        a(publicDataInWorld);
        b(protectedDataInWorld);
        //c(privateDataInWorld); //error: 'c' is a private member of 'World'
        //cout<<privateDataInWorld<<endl;
        //error: 'privateDataInWorld' is a private member of 'World'
    }
};
class China: public PublicJapan{
public:
    China(int a,int b,int c):PublicJapan(a,b,c){
    };
    void print(){
        cout<<publicDataInWorld<<endl;
        cout<<protectedDataInWorld<<endl;
        a(publicDataInWorld);
        b(protectedDataInWorld);
        //c(privateDataInWorld);   //error: 'c' is a private member of 'World'
        //cout<<privateDataInWorld<<endl;
        //error: 'privateDataInWorld' is a private member of 'World'
    }
};
class ProtectedChina: protected ProtectedJapan{
public:
    ProtectedChina(int a,int b,int c):ProtectedJapan(a,b,c){
    };
    
    void print(){
        cout<<publicDataInWorld<<endl;
        cout<<protectedDataInWorld<<endl;
        a(publicDataInWorld);
        b(protectedDataInWorld);
        //c(privateDataInWorld); //error: 'c' is a private member of 'World'
        //cout<<privateDataInWorld<<endl;
        //error: 'privateDataInWorld' is a private member of 'World'
    }
};

class PrivateChina: private PrivateJapan{
public:
    PrivateChina(int a,int b,int c):PrivateJapan(a,b,c){
    };
    
    void print(){
        //cout<<publicDataInWorld<<endl;//error: 'publicDataInWorld' is a private member of 'World'
        //cout<<protectedDataInWorld<<endl; //error: 'protectedDataInWorld' is a private member of 'World'
        //a(publicDataInWorld);//error: 'a' is a private member of 'World'
        //b(protectedDataInWorld);//error: 'b' is a private member of 'World'
        //c(privateDataInWorld);//error: 'c' is a private member of 'World'
        //cout<<privateDataInWorld<<endl;
        //error: 'privateDataInWorld' is a private member of 'World'
    }
};

int main(int argc, char** argv) {

    World objA(4,5,6);
    cout<<objA.publicDataInWorld<<endl;
    objA.a();
    
 
    
    
    PublicJapan objPublicB(40,50,60);
    cout<<objPublicB.publicDataInWorld<<endl;
    objPublicB.a();
    
   
    
    ProtectedJapan objProtectedB(40,50,60);
    //objProtectedB.publicDataInWorld<<endl;
    
    
    
    
    PrivateJapan objPrivateD(40,50,60);
    //cout<<objPrivateD.publicDataInWorld<<endl; //error: 'publicDataInWorld' is a private member of 'World'
    //cout<<objPrivateD.protectedDataInWorld<<endl;//error: 'protectedDataInWorld' is a private member of 'World'
    
    
    China objC(400,500,600);
    cout<<objC.publicDataInWorld<<endl; 
    objC.a();
    
    
    return 0; 
}




