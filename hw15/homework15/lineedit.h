#ifndef LINEEDIT_H
#define LINEEDIT_H
#include <QLineEdit>

class LineEdit : public QLineEdit{
    Q_OBJECT
public:
    LineEdit(const QString& qstring):QLineEdit(qstring){}
    LineEdit(QWidget* qw):QLineEdit(qw){}
public slots:
    void showFont(QFont);

};

#endif // LINEEDIT_H
