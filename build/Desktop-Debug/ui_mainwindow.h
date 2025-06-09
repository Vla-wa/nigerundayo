/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *example;
    QLineEdit *a;
    QLineEdit *b;
    QLineEdit *c;
    QLineEdit *X1;
    QLineEdit *X2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 130, 16, 18));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 180, 66, 18));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 230, 66, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 290, 21, 18));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 290, 21, 18));
        example = new QLabel(centralwidget);
        example->setObjectName(QString::fromUtf8("example"));
        example->setGeometry(QRect(120, 60, 131, 18));
        a = new QLineEdit(centralwidget);
        a->setObjectName(QString::fromUtf8("a"));
        a->setGeometry(QRect(80, 130, 113, 26));
        b = new QLineEdit(centralwidget);
        b->setObjectName(QString::fromUtf8("b"));
        b->setGeometry(QRect(80, 180, 113, 26));
        c = new QLineEdit(centralwidget);
        c->setObjectName(QString::fromUtf8("c"));
        c->setGeometry(QRect(80, 230, 113, 26));
        X1 = new QLineEdit(centralwidget);
        X1->setObjectName(QString::fromUtf8("X1"));
        X1->setGeometry(QRect(100, 290, 113, 26));
        X1->setReadOnly(true);
        X2 = new QLineEdit(centralwidget);
        X2->setObjectName(QString::fromUtf8("X2"));
        X2->setGeometry(QRect(270, 290, 113, 26));
        X2->setReadOnly(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 210, 88, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "X2", nullptr));
        example->setText(QCoreApplication::translate("MainWindow", "ax^2 + bx + c = 0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "solve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
