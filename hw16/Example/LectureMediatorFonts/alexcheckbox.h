#ifndef ALEXCHECKBOX_H
#define ALEXCHECKBOX_H
#include <QCheckBox>

class AlexCheckBox: public QCheckBox{
    Q_OBJECT

public:
    AlexCheckBox(QWidget* qw):QCheckBox(qw){};
    AlexCheckBox(QString qs):QCheckBox(qs){};

signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myStateChanged(int);//For receiving its predefined signal. In its implementation, I emit my own signal.
};
#endif // ALEXCHECKBOX_H
