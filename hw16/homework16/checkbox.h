#ifndef CHECKBOX_H
#define CHECKBOX_H
#include <QRadioButton>

class checkbox: public QRadioButton{
    Q_OBJECT
public:
    checkbox(QWidget* qw):QRadioButton(qw){}
    checkbox(QString qs):QRadioButton(qs){}

signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myStateChanged(bool);//For receiving its predefined signal. In its implementation, I emit my own signal.
};

#endif // CHECKBOX_H



