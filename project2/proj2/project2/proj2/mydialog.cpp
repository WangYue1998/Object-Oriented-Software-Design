#include "mydialog.h"
#include "ui_mydialog.h"
#include <iostream>
#include <qdebug.h>
using namespace std;

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    //ui->tableWidget_C->setSelectionBehavior(QAbstractItemView::SelectRows);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::reject(){
    this->hide();
    emit deleted(true);
}


void MyDialog::on_DeleteButton_clicked()
{

    if (ui->tableWidget_C->currentRow() != -1) {
        string a = "Selection:";
        QModelIndexList selection = ui->tableWidget_C->selectionModel()->selectedRows();
        std::sort(selection.begin(),selection.end(),[](const QModelIndex& a, const QModelIndex& b)->bool{return a.row()>b.row();});

        for (int i=0; i < selection.count();i++){
            QModelIndex index = selection.at(i);

            ui->tableWidget_C->removeRow(index.row());
        }

    }
}

void MyDialog::on_CheckoutButton_clicked()
{
    double sum=0;
    for (int i=0;i< ui->tableWidget_C->rowCount();i++) {
        QTableWidgetItem *item =  ui->tableWidget_C->item(i,1);
        sum+=item->text().toDouble();
    }
    ui->Checklabel->setText("TOTAL: $"+QString::number(sum));
    ui->Checklabel->setStyleSheet("QLabel { color : red; }");
    ui->DeleteButton->setEnabled(false);
    ui->CheckoutButton->setEnabled(false);
}
