#include "resetbutton.h"

void ResetButton::setbutton(bool){
    emit reset(this);
}
