#ifndef LINEEDIT_H
#define LINEEDIT_H
#include <QLineEdit>

class LineEdit: public QLineEdit{
    Q_OBJECT

public:
    LineEdit(const QString& qstring):QLineEdit(qstring){}
    LineEdit(QWidget* qw):QLineEdit(qw){}

signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myEditingFinished();//For receiving its predefined signal. In its implementation, I emit my own signal.
};


#endif // LINEEDIT_H
