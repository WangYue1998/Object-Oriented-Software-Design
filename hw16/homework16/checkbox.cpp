#include "checkbox.h"

void checkbox::myStateChanged(bool){
    emit iChanged(this);
}


