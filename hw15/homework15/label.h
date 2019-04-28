#ifndef LABEL_H
#define LABEL_H
#include <QObject> 
#include <QLabel>

class label:public QLabel{ 
    Q_OBJECT

public:
    label(QWidget* qw):QLabel(qw){}
public slots:
    //For receiving signal QLineEdit for font size: void textChanged(const QString& text)
    void modifyFontBySize(QString);
    //For receiving signal from QFontComboBox: void currentFontChanged(const QFont& font)
    void setFont(QFont);
    //For receiving signal from CheckBox for  A check box: void clicked(bool)
    void modifyFontByCheckboxA(bool);
    //For receiving signal from CheckBox for T check box: void clicked(bool)
    void modifyFontByCheckboxT(bool);
    //For receiving signal from CheckBox for C check box: void clicked(bool)
    void modifyFontByCheckboxC(bool);
     //For receiving signal Horizontal slider
    void modifyFontByslider(int);
};

#endif // LABEL_H
