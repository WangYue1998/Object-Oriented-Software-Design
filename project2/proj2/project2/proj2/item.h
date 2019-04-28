#ifndef ITEM_H
#define ITEM_H
#include "visitor.h"
#include <string>
using namespace std;
class Item{
protected:
    string p_name;
    double p_price;
public:
    Item(string name, double price){p_name = name; p_price = price;}

    void setPrice(double p){p_price = p;}
    void setName(string n){p_name = n;}
    double getPrice()const{return p_price;}
    string getName()const{return p_name;}

    virtual void Accept(Visitor* v) = 0;

};

#endif // ITEM_H
