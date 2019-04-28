#ifndef PRODUCT_H
#define PRODUCT_H
#include "item.h"
#include "visitor.h"

class Product : public Item
{
protected:
    string p_type;
    string p_fact;
public:
    Product(string name, string type, double price, string fact): Item (name, price){
        p_type = type;
        p_fact = fact;
    }
    void setType(string type){p_type = type;}
    void setFact(string fact){p_fact = fact;}
    string getType() const {return p_type;}
    string getFact() const {return p_fact;}
    virtual void Accept(Visitor* v){v->VisitProduct(this);}

};

#endif // PRODUCT_H
