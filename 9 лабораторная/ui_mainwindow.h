/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QWidget *centralwidget;
    QWidget *widget;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(688, 392);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-OOP4-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build-OOP4-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/0.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon1);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build-OOP4-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon2);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/build-OOP4-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon3);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/build-OOP4-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 651, 301));
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 641, 271));
        tableView->setTextElideMode(Qt::ElideMiddle);
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setCascadingSectionResizes(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 688, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_2);
        toolBar->addAction(action_3);
        toolBar->addAction(action_4);
        toolBar->addAction(action);
        toolBar->addAction(action_5);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\275\321\205\321\200\320\276\320\275\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
