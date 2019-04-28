#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H
#include <QComboBox>

class mycomboBox: public QComboBox{
    Q_OBJECT

public:
    mycomboBox(QWidget* qw):QComboBox(qw){}
signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myCurrentValueChanged(const QString&);
};


#endif // MYCOMBOBOX_H







