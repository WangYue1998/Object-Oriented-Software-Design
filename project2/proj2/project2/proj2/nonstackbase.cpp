#include "nonstackbase.h"
#include <iostream>
#include "visitor.h"
#include "product.h"
#include "bundle.h"

void NonStackBase::VisitBundle(Bundle* bd){

    for(size_t i=0; i < bd->getSize();i++){
        bd->getBundle()[i]->Accept(this);
    }
    }
double NonStackBase::getResult(){
    double result = sum;
    sum = 0;
    return result;}
