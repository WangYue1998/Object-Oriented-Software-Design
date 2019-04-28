#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

namespace Ui {
class MyDialog;
}

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = nullptr);
    Ui::MyDialog* getUi() const {return ui;}
    ~MyDialog();
signals:
    void deleted(bool);
    //void deleted(QString);
private slots:
    void reject();
    void on_DeleteButton_clicked();

    void on_CheckoutButton_clicked();

private:
    Ui::MyDialog *ui;
};

#endif // MYDIALOG_H
