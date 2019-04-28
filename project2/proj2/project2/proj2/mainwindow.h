#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "item.h"
#include <QMainWindow>
#include <QDebug>
#include <QFile>
#include <QObject>
#include <vector>
#include <QList>
#include <QDir>
#include "builder.h"
#include "productbasebuilder.h"
#include "mydialog.h"

using namespace std;

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
   void actByMyChange(QObject*);
   void hide(bool);

private:
    Ui::MainWindow *ui;
    ProductBaseBuilder PBB;
    MyDialog* ShopDialog = new MyDialog();

};

#endif // MAINWINDOW_H
