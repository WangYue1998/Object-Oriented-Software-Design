#include "lineedit.h"

void LineEdit::myEditingFinished(){
    emit iChanged(this);
}
