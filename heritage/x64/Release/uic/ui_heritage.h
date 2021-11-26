/********************************************************************************
** Form generated from reading UI file 'heritage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HERITAGE_H
#define UI_HERITAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_heritageClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *heritageClass)
    {
        if (heritageClass->objectName().isEmpty())
            heritageClass->setObjectName(QString::fromUtf8("heritageClass"));
        heritageClass->resize(600, 400);
        menuBar = new QMenuBar(heritageClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        heritageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(heritageClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        heritageClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(heritageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        heritageClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(heritageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        heritageClass->setStatusBar(statusBar);

        retranslateUi(heritageClass);

        QMetaObject::connectSlotsByName(heritageClass);
    } // setupUi

    void retranslateUi(QMainWindow *heritageClass)
    {
        heritageClass->setWindowTitle(QCoreApplication::translate("heritageClass", "heritage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class heritageClass: public Ui_heritageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HERITAGE_H
