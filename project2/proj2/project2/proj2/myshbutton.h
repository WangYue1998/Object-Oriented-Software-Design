#ifndef MYSHBUTTON_H
#define MYSHBUTTON_H

#include <QPushButton>

class MyShButton : public QPushButton
{
    Q_OBJECT
public:
    MyShButton(QWidget* qw): QPushButton(qw){}
signals:
    void iChanged(QObject*);
public slots:
    void shown(bool){
        emit iChanged(this);
    }
};

#endif // MYSHBUTTON_H
