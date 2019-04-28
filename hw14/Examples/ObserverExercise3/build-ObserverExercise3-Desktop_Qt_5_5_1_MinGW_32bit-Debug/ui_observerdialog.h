/********************************************************************************
** Form generated from reading UI file 'observerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSERVERDIALOG_H
#define UI_OBSERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObserverDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QPushButton *ObserverDeleteButton;

    void setupUi(QDialog *ObserverDialog)
    {
        if (ObserverDialog->objectName().isEmpty())
            ObserverDialog->setObjectName(QStringLiteral("ObserverDialog"));
        ObserverDialog->resize(400, 300);
        layoutWidget = new QWidget(ObserverDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 70, 291, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        ObserverDeleteButton = new QPushButton(layoutWidget);
        ObserverDeleteButton->setObjectName(QStringLiteral("ObserverDeleteButton"));

        verticalLayout->addWidget(ObserverDeleteButton);


        retranslateUi(ObserverDialog);
        QObject::connect(ObserverDeleteButton, SIGNAL(clicked()), ObserverDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(ObserverDialog);
    } // setupUi

    void retranslateUi(QDialog *ObserverDialog)
    {
        ObserverDialog->setWindowTitle(QApplication::translate("ObserverDialog", "Dialog", 0));
        ObserverDeleteButton->setText(QApplication::translate("ObserverDialog", "Delete This Observer", 0));
    } // retranslateUi

};

namespace Ui {
    class ObserverDialog: public Ui_ObserverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVERDIALOG_H
