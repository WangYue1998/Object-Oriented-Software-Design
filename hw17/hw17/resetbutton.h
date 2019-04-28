#ifndef RESETBUTTON_H
#define RESETBUTTON_H
#include<QPushButton>


class ResetButton:public QPushButton{
Q_OBJECT
public:
    ResetButton(QWidget* qw):QPushButton(qw){}
signals:
    void reset(QObject*); //My own signal
private slots:
    void setbutton(bool); // for the indirect signal-proxy-slot model
};

#endif // RESETBUTTON_H
