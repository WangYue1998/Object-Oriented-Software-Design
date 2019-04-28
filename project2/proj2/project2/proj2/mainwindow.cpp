#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include "ui_mydialog.h"
#include "productbasebuilder.h"
#include "nonstackbase.h"
#include "bundlebuilder.h"


#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTableWidget>
#include <QStandardItem>
#include <vector>
#include <math.h>
#include <iostream>
#include <utility>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->addbutton->setEnabled(false);
    ui->shbutton->setEnabled(false);

    ui->tableWidget_P->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
    ui->tableWidget_B->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);


    ShopDialog->getUi()->tableWidget_C->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ShopDialog->getUi()->tableWidget_C->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

    connect(ui->load_button,SIGNAL(clicked(bool)), ui->load_button,SLOT(loaded(bool)));
    connect(ui->load_button,SIGNAL(iChanged(QObject*)),this,SLOT(actByMyChange(QObject*)));

    connect(ui->load_button,SIGNAL(clicked(bool)), ui->load_button, SLOT(setEnabled(bool)));


    ui->tableWidget_B->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_P->setSelectionBehavior(QAbstractItemView::SelectRows);
    ShopDialog->getUi()->tableWidget_C->setSelectionBehavior(QAbstractItemView::SelectRows);

    connect(ui->shbutton,SIGNAL(clicked(bool)), ui->shbutton,SLOT(shown(bool)));
    connect(ui->shbutton,SIGNAL(iChanged(QObject*)),this,SLOT(actByMyChange(QObject*)));

    connect(ui->addbutton,SIGNAL(clicked(bool)), ui->addbutton,SLOT(added(bool)));
    connect(ui->addbutton,SIGNAL(iChanged(QObject*)),this,SLOT(actByMyChange(QObject*)));


    connect(ShopDialog, SIGNAL(deleted(bool)), this,SLOT(hide(bool)));




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::hide(bool s){
    if (s){
         ui->shbutton->setText("Show Cart");
    }
}

void MainWindow::actByMyChange(QObject *sender){
      if (sender == ui->shbutton){
            if (ui->shbutton->text() == "Show Cart"){
                ui->shbutton->setText("Hide Cart");
                ShopDialog->show();
            }
            else{
                ui->shbutton->setText("Show Cart");
                ShopDialog->close();
            }

      }

      else if (sender == ui->load_button){
            ui->addbutton->setEnabled(true);
            ui->shbutton->setEnabled(true);
            ProductBaseBuilder pbb;
            QFile pfile("/Users/wy/Desktop/proj2_ver2/build-proj2-Desktop_Qt_5_10_0_clang_64bit-Debug/proj2.app/Contents/MacOS/Technology.csv");
            if ( !pfile.open(QFile::ReadOnly | QFile::Text)){
                qDebug() << "File Not Exists";
            }
            else {
                QTextStream in(&pfile);
                while (!in.atEnd()) {
                    QString line = in.readLine();
                    vector<QString> vec;
                    for (QString item : line.split(",")) {
                        vec.push_back(item);
                    }
                    Product* p = new Product(vec[1].toStdString(), vec[0].toStdString(),vec[4].toDouble(),vec[5].toStdString());
                    pbb.addProduct(p);
                }
                PBB = pbb;
                vector<Product*> prod = PBB.getDatabase();
                size_t s = prod.size();
                size_t row = 0;
                while (row < s){
                    ui->tableWidget_P->insertRow(static_cast<int>(row));
                    ui->tableWidget_P->setItem(static_cast<int>(row),0,new QTableWidgetItem(QString::fromStdString(prod[row]->getName())));
                    ui->tableWidget_P->setItem(static_cast<int>(row),1,new QTableWidgetItem(QString::fromStdString(prod[row]->getType())));
                    ui->tableWidget_P->setItem(static_cast<int>(row),2,new QTableWidgetItem(QString::number(prod[row]->getPrice())));
                    ui->tableWidget_P->setItem(static_cast<int>(row),3,new QTableWidgetItem(QString::fromStdString(prod[row]->getFact())));
                    row ++;
                }
            }
            pfile.close();
            BundleBuilder bdb;
            QFile bfile("/Users/wy/Desktop/proj2_ver2/build-proj2-Desktop_Qt_5_10_0_clang_64bit-Debug/proj2.app/Contents/MacOS/Bundles.csv");
            if ( !bfile.open(QFile::ReadOnly | QFile::Text)){
                qDebug() << "File Not Exists";
            }
            else{
                QTextStream in(&bfile);
                while (!in.atEnd()) {
                    QString line = in.readLine();
                    vector<QString> vec;
                    for (QString item : line.split(",")) {
                        vec.push_back(item);
                    }
                    string name = vec[0].toStdString();
                    double b_price = vec[1].toDouble();
                    Bundle* bun = new Bundle(name, b_price, 0);
                    for(vector<QString>::iterator it = vec.begin()+2; it != vec.end(); it++){
                        Product* p = pbb.searchProduct((*it).toStdString());
                        bun->addBundle(p);
                    }
                    bdb.addBundle(bun);
                }
                bfile.close();
            }
            size_t num_row = bdb.getBundleBase().size();
            size_t counter = 0;
            NonStackBase nsb;
            while(counter < num_row){
                ui->tableWidget_B->insertRow(static_cast<int>(counter));
                ui->tableWidget_B->setItem(static_cast<int>(counter),0,new QTableWidgetItem(QString::fromStdString(bdb.getBundleBase()[counter]->getName())));
                ui->tableWidget_B->setItem(static_cast<int>(counter),1,new QTableWidgetItem(QString::number(bdb.getBundleBase()[counter]->getPrice())));
                bdb.getBundleBase()[counter]->Accept(&nsb);
                double total = nsb.getResult();
                double price = bdb.getBundleBase()[counter]->getPrice();
                double input = ((total - price) / (total));
                bdb.getBundleBase()[counter]->setSaving(input);

                ui->tableWidget_B->setItem(static_cast<int>(counter),2,new QTableWidgetItem(QString::number(round(bdb.getBundleBase()[counter]->getSavings()*100)).append('%')));
                counter++;
            }
        }
          else if (sender == ui->addbutton) {
              QList<QTableWidgetItem*> P_list = ui->tableWidget_P->selectedItems();
              QList<QTableWidgetItem*> B_list = ui->tableWidget_B->selectedItems();
              vector<pair<QString,QString>> tw_vec;


              int count = 0;

              while(count < P_list.count()/4){

                  pair<QString,QString> prod_pair;
                  prod_pair.first = P_list[count*4]->text();

                  prod_pair.second = P_list[count*4+2]->text();

                  tw_vec.push_back(prod_pair);
                  count ++;
              }


              int b_count = 0;
              while(b_count < B_list.count()/3){

                  pair<QString,QString> prod_pair;
                  prod_pair.first = B_list[b_count*3]->text();

                  prod_pair.second = B_list[b_count*3+1]->text();

                  tw_vec.push_back(prod_pair);
                  b_count ++;
              }

              size_t num_row = tw_vec.size();
              size_t counter = 0;
              while (counter < num_row) {
                  ShopDialog->getUi()->tableWidget_C->insertRow(static_cast<int>(counter));
                  ShopDialog->getUi()->tableWidget_C->setItem(static_cast<int>(counter),0,new QTableWidgetItem(tw_vec[counter].first));
                  ShopDialog->getUi()->tableWidget_C->setItem(static_cast<int>(counter),1,new QTableWidgetItem(tw_vec[counter].second));
                  counter++;
              }
              ui->tableWidget_B->selectionModel()->clearSelection();
              ui->tableWidget_P->selectionModel()->clearSelection();

          }

}
