#include "mylineedit.h"

void MyLineEdit::myEditingFinished(){
    emit iChanged(this);
}
