#ifndef PRODUCTBASEBUILDER_H
#define PRODUCTBASEBUILDER_H
#include "builder.h"
#include "bundle.h"
#include "product.h"
#include "item.h"
#include <string>
#include <vector>
using namespace std;

class ProductBaseBuilder : public Builder{
protected:
    vector<Product*> p_vec;
public:
    virtual void addProduct(Product* p){p_vec.push_back(p);}

    virtual void addBundle(Bundle*){}

    vector<Product*> getDatabase() const{return p_vec;}

    Product* searchProduct(string);
};

#endif // PRODUCTBASEBUILDER_H
