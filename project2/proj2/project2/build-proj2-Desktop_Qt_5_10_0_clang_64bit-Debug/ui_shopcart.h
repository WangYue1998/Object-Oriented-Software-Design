/********************************************************************************
** Form generated from reading UI file 'shopcart.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPCART_H
#define UI_SHOPCART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ShopCart
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ShopCart)
    {
        if (ShopCart->objectName().isEmpty())
            ShopCart->setObjectName(QStringLiteral("ShopCart"));
        ShopCart->resize(689, 333);
        tableWidget = new QTableWidget(ShopCart);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(70, 30, 441, 271));
        pushButton = new QPushButton(ShopCart);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 310, 111, 32));
        pushButton_2 = new QPushButton(ShopCart);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 310, 111, 32));

        retranslateUi(ShopCart);

        QMetaObject::connectSlotsByName(ShopCart);
    } // setupUi

    void retranslateUi(QDialog *ShopCart)
    {
        ShopCart->setWindowTitle(QApplication::translate("ShopCart", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ShopCart", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ShopCart", "Price", nullptr));
        pushButton->setText(QApplication::translate("ShopCart", "Delete", nullptr));
        pushButton_2->setText(QApplication::translate("ShopCart", "CheakOut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShopCart: public Ui_ShopCart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPCART_H
