#ifndef NONSTACKBASE_H
#define NONSTACKBASE_H
#include <iostream>
#include "visitor.h"
#include "product.h"
#include "bundle.h"

class NonStackBase: public Visitor{
protected:
    double sum;
public:
    NonStackBase(){sum = 0;}

    virtual void VisitProduct(Product* pd){sum += pd->getPrice();}
    virtual void VisitBundle(Bundle* );
    double getResult();

};



#endif // NONSTACKBASE_H
