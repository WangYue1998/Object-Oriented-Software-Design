#include "alexcheckbox.h"

void AlexCheckBox::myStateChanged(int){
    emit iChanged(this);
}
