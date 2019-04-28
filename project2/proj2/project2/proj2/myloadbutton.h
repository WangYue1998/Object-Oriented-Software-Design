#ifndef MYLOADBUTTON_H
#define MYLOADBUTTON_H


#include <QPushButton>


class myloadbutton : public QPushButton
{
    Q_OBJECT
public:
    myloadbutton(QWidget* qw):QPushButton(qw){}
signals:
    void iChanged(QObject*);
public slots:
    void loaded(bool){
        emit iChanged(this);
    }
};

#endif // MYLOADBUTTON_H
