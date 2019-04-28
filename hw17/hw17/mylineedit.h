#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H
#include <QLineEdit>


class MyLineEdit: public QLineEdit{
    Q_OBJECT
public:
    MyLineEdit(const QString& qstring):QLineEdit(qstring){}
    MyLineEdit(QWidget* qw):QLineEdit(qw){}
signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myEditingFinished();//For receiving its predefined signal. In its implementation, I emit my own signal.
};

#endif // MYLINEEDIT_H


