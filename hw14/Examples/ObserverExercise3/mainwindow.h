#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <vector>
#include "observerdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void deleteObserver(unsigned int);

private slots:
    void on_CreateButton_clicked();
    void on_DeleteButton_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<ObserverDialog*> listeners;
    unsigned int observerID;
};

#endif // MAINWINDOW_H
