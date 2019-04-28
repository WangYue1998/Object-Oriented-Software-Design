#include "myslider.h"

void MySlider::setslider(int){
    emit sliderChanged(this);
}

