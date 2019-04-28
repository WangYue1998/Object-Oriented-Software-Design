/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "myaddbutton.h"
#include "myloadbutton.h"
#include "myshbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget_P;
    QTableWidget *tableWidget_B;
    myloadbutton *load_button;
    MyAddButton *addbutton;
    MyShButton *shbutton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(690, 524);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget_P = new QTableWidget(centralWidget);
        if (tableWidget_P->columnCount() < 4)
            tableWidget_P->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_P->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_P->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_P->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_P->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_P->setObjectName(QStringLiteral("tableWidget_P"));
        tableWidget_P->setGeometry(QRect(60, 30, 571, 191));
        tableWidget_B = new QTableWidget(centralWidget);
        if (tableWidget_B->columnCount() < 3)
            tableWidget_B->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_B->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_B->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_B->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        tableWidget_B->setObjectName(QStringLiteral("tableWidget_B"));
        tableWidget_B->setGeometry(QRect(60, 240, 571, 151));
        load_button = new myloadbutton(centralWidget);
        load_button->setObjectName(QStringLiteral("load_button"));
        load_button->setGeometry(QRect(60, 421, 121, 31));
        addbutton = new MyAddButton(centralWidget);
        addbutton->setObjectName(QStringLiteral("addbutton"));
        addbutton->setGeometry(QRect(280, 420, 111, 32));
        shbutton = new MyShButton(centralWidget);
        shbutton->setObjectName(QStringLiteral("shbutton"));
        shbutton->setGeometry(QRect(510, 420, 111, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 690, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_P->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_P->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_P->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_P->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Special Attribute", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_B->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Bundle Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_B->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_B->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Savings", nullptr));
        load_button->setText(QApplication::translate("MainWindow", "Load Database", nullptr));
        addbutton->setText(QApplication::translate("MainWindow", "Add to Cart", nullptr));
        shbutton->setText(QApplication::translate("MainWindow", "Show Cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
