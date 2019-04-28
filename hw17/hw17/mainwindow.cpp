#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);
    ui->horizontalSlider->setValue(0);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->lineEdit->setText("0");



    connect(ui->comboBox,SIGNAL(currentTextChanged(QString)),ui->comboBox,SLOT(myCurrentValueChanged(QString)));
    connect(ui->comboBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->lineEdit,SIGNAL(editingFinished()),ui->lineEdit,SLOT(myEditingFinished()));
    connect(ui->lineEdit,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->horizontalSlider,SLOT(setslider(int)));
    connect(ui->horizontalSlider,SIGNAL(sliderChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->pushButton,SIGNAL(clicked(bool)),ui->pushButton,SLOT(setbutton(bool)));
    connect(ui->pushButton,SIGNAL(reset(QObject*)),this,SLOT(actByYourChange(QObject*)));

}

void MainWindow::actByYourChange(QObject* senderObj){
    if(senderObj==ui->comboBox){
        QString size = ui->comboBox->currentText();
        if(size=="0") {
            ui->horizontalSlider->setSliderPosition(0);
            ui->lineEdit->setText(size);
            ui->progressBar->setValue(0);
        }
        if(size=="50") {
             ui->horizontalSlider->setSliderPosition(50);
             ui->lineEdit->setText(size);
             ui->progressBar->setValue(50);
        }
        if(size=="100") {
            ui->horizontalSlider->setSliderPosition(100);
            ui->lineEdit->setText(size);
            ui->progressBar->setValue(100);
        }
    }
    else if(senderObj==ui->lineEdit){
        QString size = ui->lineEdit->text();
        ui->comboBox->setCurrentText(ui->lineEdit->text());
        ui->horizontalSlider->setSliderPosition(size.toInt());
        ui->progressBar->setValue(size.toInt());
    }

    else if(senderObj==ui->horizontalSlider){
        int i = ui->horizontalSlider->value();
        ui->comboBox->setCurrentText(QString::number(i));
        ui->progressBar->setValue(i);
        ui->lineEdit->setText(QString::number(i));

    }
    else if(senderObj == ui->pushButton){
        ui->comboBox->setCurrentText(QString::number(0));
        ui->progressBar->setValue(0);
        ui->lineEdit->setText(QString::number(0));
        ui->horizontalSlider->setslider(0);

    }

    ui->centralWidget->adjustSize();
}

MainWindow::~MainWindow()
{
    delete ui;
}
