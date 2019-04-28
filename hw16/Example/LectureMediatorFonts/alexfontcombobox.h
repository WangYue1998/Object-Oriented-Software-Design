#ifndef ALEXFONTCOMBOBOX_H
#define ALEXFONTCOMBOBOX_H
#include <QFontComboBox>

class AlexFontComboBox: public QFontComboBox{
    Q_OBJECT

public:
    AlexFontComboBox(QWidget* qw):QFontComboBox(qw){};

signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myCurrentFontChanged(const QFont&);//For receiving its predefined signal. In its implementation, I emit my own signal.
};

#endif // ALEXFONTCOMBOBOX_H
