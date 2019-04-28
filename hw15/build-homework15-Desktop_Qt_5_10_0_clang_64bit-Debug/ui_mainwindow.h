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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <label.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    label *labelFox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *sizetype;
    QLabel *sizetype_2;
    QLabel *family;
    QLabel *fontsize;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *AcheckBox;
    QRadioButton *TcheckBox;
    QRadioButton *CcheckBox;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(773, 506);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelFox = new label(centralWidget);
        labelFox->setObjectName(QStringLiteral("labelFox"));
        labelFox->setGeometry(QRect(20, 10, 741, 201));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 230, 585, 126));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sizetype = new QLabel(layoutWidget);
        sizetype->setObjectName(QStringLiteral("sizetype"));

        verticalLayout->addWidget(sizetype);

        sizetype_2 = new QLabel(layoutWidget);
        sizetype_2->setObjectName(QStringLiteral("sizetype_2"));

        verticalLayout->addWidget(sizetype_2);

        family = new QLabel(layoutWidget);
        family->setObjectName(QStringLiteral("family"));

        verticalLayout->addWidget(family);

        fontsize = new QLabel(layoutWidget);
        fontsize->setObjectName(QStringLiteral("fontsize"));

        verticalLayout->addWidget(fontsize);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AcheckBox = new QRadioButton(layoutWidget);
        AcheckBox->setObjectName(QStringLiteral("AcheckBox"));

        horizontalLayout->addWidget(AcheckBox);

        TcheckBox = new QRadioButton(layoutWidget);
        TcheckBox->setObjectName(QStringLiteral("TcheckBox"));

        horizontalLayout->addWidget(TcheckBox);

        CcheckBox = new QRadioButton(layoutWidget);
        CcheckBox->setObjectName(QStringLiteral("CcheckBox"));

        horizontalLayout->addWidget(CcheckBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);


        horizontalLayout_2->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 773, 22));
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
        labelFox->setText(QApplication::translate("MainWindow", "The quick brown fox likes CSE 335", nullptr));
        sizetype->setText(QApplication::translate("MainWindow", "Font Size Type", nullptr));
        sizetype_2->setText(QApplication::translate("MainWindow", "Font Size Type", nullptr));
        family->setText(QApplication::translate("MainWindow", "Family", nullptr));
        fontsize->setText(QApplication::translate("MainWindow", "Font Size", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "small", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "medium", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "big", nullptr));

        AcheckBox->setText(QApplication::translate("MainWindow", "Arial", nullptr));
        TcheckBox->setText(QApplication::translate("MainWindow", "Times New Roman", nullptr));
        CcheckBox->setText(QApplication::translate("MainWindow", "Comic Sans MS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
