#include "combobox.h"

void combobox::myCurrentFontChanged(const QString&){
    emit iChanged(this);
}

