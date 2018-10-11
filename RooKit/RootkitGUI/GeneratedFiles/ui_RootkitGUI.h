/********************************************************************************
** Form generated from reading UI file 'RootkitGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOTKITGUI_H
#define UI_ROOTKITGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RootkitGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RootkitGUIClass)
    {
        if (RootkitGUIClass->objectName().isEmpty())
            RootkitGUIClass->setObjectName(QStringLiteral("RootkitGUIClass"));
        RootkitGUIClass->resize(600, 400);
        menuBar = new QMenuBar(RootkitGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        RootkitGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RootkitGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RootkitGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(RootkitGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RootkitGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RootkitGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RootkitGUIClass->setStatusBar(statusBar);

        retranslateUi(RootkitGUIClass);

        QMetaObject::connectSlotsByName(RootkitGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *RootkitGUIClass)
    {
        RootkitGUIClass->setWindowTitle(QApplication::translate("RootkitGUIClass", "RootkitGUI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RootkitGUIClass: public Ui_RootkitGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOTKITGUI_H
