#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "label.h"
#include <QtGui>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(10);
    ui->horizontalSlider->setMaximum(40);
    ui->horizontalSlider->setTickInterval(1);
    connect(ui->lineEdit,SIGNAL(textChanged(QString)),ui->labelFox,SLOT( modifyFontBySize(QString)));
    connect(ui->lineEdit,SIGNAL(textChanged(QString)),ui->comboBox,SLOT( setCurrentText(QString)));

    connect(ui->comboBox, SIGNAL(currentTextChanged(QString)), ui->labelFox, SLOT( modifyFontBySize(QString)));
    connect(ui->comboBox, SIGNAL(currentTextChanged(QString)), ui->lineEdit, SLOT(  setText(QString)));

    connect(ui->AcheckBox,SIGNAL(clicked(bool)), ui->labelFox, SLOT( modifyFontByCheckboxA(bool)));
    connect(ui->CcheckBox,SIGNAL(clicked(bool)), ui->labelFox, SLOT( modifyFontByCheckboxC(bool)));
    connect(ui->TcheckBox,SIGNAL(clicked(bool)), ui->labelFox, SLOT( modifyFontByCheckboxT(bool)));
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->labelFox, SLOT(modifyFontByslider(int)));

    connect(ui->comboBox, SIGNAL(currentTextChanged(QString)), this, SLOT(setslider(QString)));
}

void MainWindow::setslider(QString size){
    if(size == "small"){
        ui->horizontalSlider->setSliderPosition(10);
    }
    if(size == "medium"){
        ui->horizontalSlider->setSliderPosition(20);
    }
    if(size == "big"){
        ui->horizontalSlider->setSliderPosition(40);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
