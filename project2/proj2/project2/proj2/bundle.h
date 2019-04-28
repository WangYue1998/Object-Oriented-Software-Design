#ifndef BUNDLE_H
#define BUNDLE_H
#include "item.h"
#include "product.h"
#include "visitor.h"
#include <string>
#include <vector>

using namespace std;

class Bundle : public Item{
protected:
    double b_savings;
    vector<Item*> bund;
public:
    Bundle(string name, double price, double savings):Item(name,price){b_savings = savings;}

    double getSavings() const{ return b_savings;}

    size_t getSize() const {return bund.size();}

    vector<Item*> getBundle() const{return bund;}

    void setSaving(double num){b_savings = num;}

    void addBundle(Product* p){bund.push_back(p);}

    virtual void Accept(Visitor* v){v->VisitBundle(this);}

};

#endif // BUNDLE_H
