/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_100000;
    QPushButton *pushButton_500000;
    QPushButton *pushButton_1000000;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *median;
    QLabel *mean;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 50, 131, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 100, 161, 24));
        pushButton_100000 = new QPushButton(centralwidget);
        pushButton_100000->setObjectName(QString::fromUtf8("pushButton_100000"));
        pushButton_100000->setGeometry(QRect(200, 100, 171, 24));
        pushButton_500000 = new QPushButton(centralwidget);
        pushButton_500000->setObjectName(QString::fromUtf8("pushButton_500000"));
        pushButton_500000->setGeometry(QRect(390, 100, 171, 24));
        pushButton_1000000 = new QPushButton(centralwidget);
        pushButton_1000000->setObjectName(QString::fromUtf8("pushButton_1000000"));
        pushButton_1000000->setGeometry(QRect(580, 100, 191, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 190, 201, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 190, 201, 24));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(540, 190, 201, 24));
        median = new QLabel(centralwidget);
        median->setObjectName(QString::fromUtf8("median"));
        median->setGeometry(QRect(100, 300, 181, 61));
        mean = new QLabel(centralwidget);
        mean->setObjectName(QString::fromUtf8("mean"));
        mean->setGeometry(QRect(530, 300, 171, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Upload 10 000 movies", nullptr));
        pushButton_100000->setText(QCoreApplication::translate("MainWindow", "Upload 100 000 movies", nullptr));
        pushButton_500000->setText(QCoreApplication::translate("MainWindow", "Upload 500 000 movies", nullptr));
        pushButton_1000000->setText(QCoreApplication::translate("MainWindow", "Upoload 1 000 000 movies", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Sort with quick sort", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Sort with introspective sort", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Sort with merge sort", nullptr));
        median->setText(QCoreApplication::translate("MainWindow", "Median", nullptr));
        mean->setText(QCoreApplication::translate("MainWindow", "Mean", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
