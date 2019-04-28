#ifndef MYSLIDER_H
#define MYSLIDER_H
#include <QSlider>

class MySlider:public QSlider{
    Q_OBJECT

public:
    MySlider(QWidget* qw):QSlider (qw){}

signals:
    void sliderChanged(QObject*); //My own signal

public slots:
    void setslider(int size); // for the indirect signal-proxy-slot model

};

#endif // MYSLIDER_H


