#ifndef MYADDBUTTON_H
#define MYADDBUTTON_H

#include <QPushButton>

class MyAddButton : public QPushButton{
    Q_OBJECT
public:
    MyAddButton(QWidget* qw):QPushButton(qw){}
signals:
    void iChanged(QObject*);
public slots:
    void added(bool){
        emit iChanged(this);
    }
};

#endif // MYADDBUTTON_H

