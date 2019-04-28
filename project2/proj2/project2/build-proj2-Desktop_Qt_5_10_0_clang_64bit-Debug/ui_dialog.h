/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableWidget *tableWidget_C;
    QPushButton *DeleteButton;
    QPushButton *DeleteButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(674, 542);
        tableWidget_C = new QTableWidget(Dialog);
        if (tableWidget_C->columnCount() < 2)
            tableWidget_C->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_C->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_C->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_C->setObjectName(QStringLiteral("tableWidget_C"));
        tableWidget_C->setGeometry(QRect(100, 50, 491, 301));
        DeleteButton = new QPushButton(Dialog);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(100, 380, 111, 32));
        DeleteButton_2 = new QPushButton(Dialog);
        DeleteButton_2->setObjectName(QStringLiteral("DeleteButton_2"));
        DeleteButton_2->setGeometry(QRect(480, 380, 111, 32));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_C->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_C->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog", "Price", nullptr));
        DeleteButton->setText(QApplication::translate("Dialog", "Delete", nullptr));
        DeleteButton_2->setText(QApplication::translate("Dialog", "Checkout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
