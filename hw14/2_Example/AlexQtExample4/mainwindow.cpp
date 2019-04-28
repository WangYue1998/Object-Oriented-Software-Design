#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    QTableWidgetItem *FirstNameCell = new QTableWidgetItem;
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,FirstNameCell);
    FirstNameCell->setText("Alex");
    QTableWidgetItem *LastNameCell = new QTableWidgetItem;
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,LastNameCell);
    LastNameCell->setText("Liu");
    ui->tableWidget->resizeColumnsToContents();
    setCentralWidget(ui->tableWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
