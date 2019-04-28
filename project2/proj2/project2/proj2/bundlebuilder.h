#ifndef BUNDLEBUILDER_H
#define BUNDLEBUILDER_H
#include "builder.h"
#include "bundle.h"
#include <vector>
using namespace std;

class BundleBuilder: public Builder
{
protected:
    vector<Bundle*> b_vec;
public:
    virtual void addBundle(Bundle* b){b_vec.push_back(b);}

    vector<Bundle*> getBundleBase() const {return b_vec;}

    virtual void addProduct(Product*){}

};
#endif // BUNDLEBUILDER_H
