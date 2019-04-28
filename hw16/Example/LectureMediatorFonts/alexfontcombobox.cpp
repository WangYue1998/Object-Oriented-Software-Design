#include "alexfontcombobox.h"

void AlexFontComboBox::myCurrentFontChanged(const QFont&){
    emit iChanged(this);
}
