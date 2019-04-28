#ifndef VISITOR_H
#define VISITOR_H

class Product;
class Bundle;


class Visitor{
public:
    virtual void VisitProduct(Product*)=0;
    virtual void VisitBundle(Bundle*)=0;
};


#endif // VISITOR_H
