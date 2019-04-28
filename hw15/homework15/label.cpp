#include "label.h"
#include <QFont>

void label::modifyFontBySize(QString size){
    //Get current font
    QFont font=this->font();
    //Modify the size of the font, keep other information of the font unchanged. int size=sizeString.toInt();
    if(size=="small") font.setPointSize(10);
    if(size=="medium") font.setPointSize(20);
    if(size=="big") font.setPointSize(40);
    //Use the modified font
    this->setFont(font);
}


void label::setFont(QFont qf){
    QLabel::setFont(qf);
}

void label::modifyFontByCheckboxA(bool b){
    if (b == true){
        QFont font=this->font();
        QFont newfont("Arial",font.pointSize());
        this->setFont(newfont);
    }
}
void label::modifyFontByCheckboxT(bool b){
    if (b == true){
        QFont font=this->font();
        QFont newfont("Times New Roman",font.pointSize());
        this->setFont(newfont);
    }
}
void label::modifyFontByCheckboxC(bool b){
    if (b == true){
        QFont font=this->font();
        QFont newfont("Comic Sans MS",font.pointSize());
        this->setFont(newfont);

    }
}

void label::modifyFontByslider(int i){
    //Get current font
    QFont font=this->font();
    font.setPointSize(i);


    //Use the modified font
    this->setFont(font);
}


