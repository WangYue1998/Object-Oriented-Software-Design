/********************************************************************************
** Form generated from reading UI file 'observerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_observerdialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *ProgressLabel;
    QPushButton *ResetButton;

    void setupUi(QDialog *observerdialog)
    {
        if (observerdialog->objectName().isEmpty())
            observerdialog->setObjectName(QStringLiteral("observerdialog"));
        observerdialog->resize(400, 300);
        widget = new QWidget(observerdialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(130, 80, 119, 61));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        ProgressLabel = new QLabel(widget);
        ProgressLabel->setObjectName(QStringLiteral("ProgressLabel"));

        horizontalLayout->addWidget(ProgressLabel);


        verticalLayout->addLayout(horizontalLayout);

        ResetButton = new QPushButton(widget);
        ResetButton->setObjectName(QStringLiteral("ResetButton"));

        verticalLayout->addWidget(ResetButton);


        retranslateUi(observerdialog);

        QMetaObject::connectSlotsByName(observerdialog);
    } // setupUi

    void retranslateUi(QDialog *observerdialog)
    {
        observerdialog->setWindowTitle(QApplication::translate("observerdialog", "Dialog", nullptr));
        label->setText(QApplication::translate("observerdialog", "Value:", nullptr));
        ProgressLabel->setText(QApplication::translate("observerdialog", "TextLabel", nullptr));
        ResetButton->setText(QApplication::translate("observerdialog", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class observerdialog: public Ui_observerdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVERDIALOG_H
