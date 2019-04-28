#ifndef COMBOBOX_H
#define COMBOBOX_H
#include <QComboBox>

class combobox: public QComboBox{
    Q_OBJECT

public:
    combobox(QWidget* qw):QComboBox(qw){}

signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myCurrentFontChanged(const QString&);//For receiving its predefined signal. In its implementation, I emit my own signal.
};

#endif // COMBOBOX_H


