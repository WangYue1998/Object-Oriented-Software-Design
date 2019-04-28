#include "mycombobox.h"

void mycomboBox::myCurrentValueChanged(const QString&){
     emit iChanged(this);
}
