#ifndef SLIDER_H
#define SLIDER_H
#include <QSlider>

class slider:public QSlider{
    Q_OBJECT

public:
    slider(QWidget* qw):QSlider (qw){}

signals:
    void sliderChanged(QObject*); //My own signal

public slots:
    void setslider(int size); // for the indirect signal-proxy-slot model
};

#endif // SLIDER_H
