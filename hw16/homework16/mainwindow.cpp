#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QMessageBox>
#include "lineedit.h"
#include "combobox.h"
#include "checkbox.h"
#include "slider.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->horizontalSlider->setMinimum(10);
    ui->horizontalSlider->setMaximum(40);
    ui->horizontalSlider->setTickInterval(1);

    connect(ui->lineEdit,SIGNAL(editingFinished()),ui->lineEdit,SLOT(myEditingFinished()));
    connect(ui->lineEdit,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->comboBox,SIGNAL(currentTextChanged(QString)),ui->comboBox,SLOT(myCurrentFontChanged(QString)));
    connect(ui->comboBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));


    connect(ui->AcheckBox,SIGNAL(clicked(bool)),ui->AcheckBox,SLOT(myStateChanged(bool)));
    connect(ui->AcheckBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->CcheckBox,SIGNAL(clicked(bool)),ui->CcheckBox,SLOT(myStateChanged(bool)));
    connect(ui->CcheckBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->TcheckBox,SIGNAL(clicked(bool)),ui->TcheckBox,SLOT(myStateChanged(bool)));
    connect(ui->TcheckBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));


    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->horizontalSlider,SLOT(setslider(int)));
    connect(ui->horizontalSlider,SIGNAL(sliderChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));



}

void MainWindow::actByYourChange(QObject* senderObj){
    if(senderObj==ui->lineEdit){
        QFont font=ui->labelFox->font();
        QString size = ui->lineEdit->text();
        if(size=="small") font.setPointSize(10);
        if(size=="medium") font.setPointSize(20);
        if(size=="big") font.setPointSize(40);
        ui->labelFox->setFont(font);
        ui->comboBox->setCurrentText(ui->lineEdit->text());
    }

    else if(senderObj==ui->comboBox){
        QFont font=ui->labelFox->font();
        QString size = ui->comboBox->currentText();
        if(size=="small") {
            font.setPointSize(10);
            ui->horizontalSlider->setSliderPosition(10);
        }
        if(size=="medium") {
            font.setPointSize(20);
             ui->horizontalSlider->setSliderPosition(20);
        }
        if(size=="big") {
            font.setPointSize(40);
            ui->horizontalSlider->setSliderPosition(40);
        }
        ui->labelFox->setFont(font);
        ui->lineEdit->setText(size);
    }

    else if(senderObj==ui->AcheckBox){
        if (ui->AcheckBox->isChecked()){
            QFont font=ui->labelFox->font();
            QFont newfont("Arial",font.pointSize());
            ui->labelFox->setFont(newfont);
        }
    }

    else if(senderObj==ui->CcheckBox){
        if (ui->CcheckBox->isChecked()){
            QFont font=ui->labelFox->font();
            QFont newfont("Comic Sans MS",font.pointSize());
            ui->labelFox->setFont(newfont);
        }
    }

    else if(senderObj==ui->TcheckBox){
        if (ui->TcheckBox->isChecked()){
            QFont font=ui->labelFox->font();
            QFont newfont("Times New Roman",font.pointSize());
            ui->labelFox->setFont(newfont);
        }
    }

    else if(senderObj==ui->horizontalSlider){
        QFont font=ui->labelFox->font();
        int i = ui->horizontalSlider->value();
        font.setPointSize(i);
        //Get current font
        ui->labelFox->setFont(font);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


