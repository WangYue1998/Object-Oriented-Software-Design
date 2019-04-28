#include "productbasebuilder.h"
#include "builder.h"
#include "bundle.h"
#include "product.h"
#include "item.h"
#include <string>
#include <vector>
using namespace std;


Product* ProductBaseBuilder::searchProduct(string name){
    for(size_t i = 0; i < p_vec.size(); i++){
        if(p_vec[static_cast<size_t>(i)]->getName() == name){
            return p_vec[i];
        }
    }
    return nullptr;
}


