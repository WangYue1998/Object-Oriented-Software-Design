#ifndef BUILDER_H
#define BUILDER_H
#include "product.h"
#include "bundle.h"
#include <string>
using namespace std;

class Builder
{
public:
    virtual void addProduct(Product* p) =0;
    virtual void addBundle(Bundle* b)=0;
};

#endif // BUILDER_H
