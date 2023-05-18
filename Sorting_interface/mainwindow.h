#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <vector>
#include "mergeSort.hh"
#include "quickSort.hh"
#include "introspectiveSort.hh"
#include "heapSort.hh"
#include "Elem.hh"
#include "Read.hh"
#include "filter.hh"
#include <chrono>
#include <QMessageBox>
#include <QFile>
#include <QDebug>
#include <QElapsedTimer>
#include "ststistics.hh"
#include "write.hh"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_100000_clicked();

    void on_pushButton_500000_clicked();

    void on_pushButton_1000000_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    bool enter;
    bool filtered;
    int n;
    std::vector <Elem>  movies;
};
#endif // MAINWINDOW_H
