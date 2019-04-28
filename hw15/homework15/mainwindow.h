#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include "label.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
void setslider(QString size); // for the indirect signal-proxy-slot model

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
