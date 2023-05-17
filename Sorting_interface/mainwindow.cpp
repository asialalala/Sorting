#include "mainwindow.h"
#include "./ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    filtered = false;
    enter= false;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QElapsedTimer timer;
    timer.start();
    filter();
    qDebug() << "Czas wykonania filtracji: "  << timer.elapsed() << "ms. \n";
    filtered = true;
    QMessageBox msgBox;
    msgBox.setText("These movies has been fitered. The result can be checked in file rankingFiltered.csv.");
    msgBox.exec();

}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox msgBox;
    if(filtered)
            {
                QElapsedTimer timer;
                timer.start();
                read(10000, movies);
                qDebug() << "Czas wczytania 10 000 filmów: "  << timer.elapsed() << "ms. \n";
                enter = true;
                msgBox.setText("10 000 movies have been uploaded.");
                msgBox.exec();
            }
            else{

                msgBox.setText("Firstly filer the movies.");
                msgBox.exec();
            }
}


void MainWindow::on_pushButton_100000_clicked()
{
    QMessageBox msgBox;
    if(filtered)
            {
                QElapsedTimer timer;
                timer.start();
                read(100000, movies);
                qDebug() << "Czas wczytania 100 000 filmów: "  << timer.elapsed() << "ms. \n";
                enter = true;
                msgBox.setText("100 000 movies have been uploaded.");
                msgBox.exec();
            }
            else{
                msgBox.setText("Firstly filer the movies.");
                msgBox.exec();
            }
}


void MainWindow::on_pushButton_500000_clicked()
{
     QMessageBox msgBox;
    if(filtered)
            {
                QElapsedTimer timer;
                timer.start();
                read(500000, movies);
                qDebug() << "Czas wczytania 500 000 filmów: "  << timer.elapsed() << "ms. \n";
                enter = true;
                msgBox.setText("500 000 have been uploaded.");
                msgBox.exec();
            }
            else{
                msgBox.setText("Firstly filer the movies.");
                msgBox.exec();
            }
}


void MainWindow::on_pushButton_1000000_clicked()
{
    QMessageBox msgBox;
   if(filtered)
           {
               QElapsedTimer timer;
               timer.start();
               read(1000000, movies);
               qDebug() << "Czas wczytania 1 000 000 filmów: "  << timer.elapsed() << "ms. \n";
               enter = true;
               msgBox.setText("1 000 000 have been uploaded.");
               msgBox.exec();
           }
           else{
               msgBox.setText("Firstly filer the movies.");
               msgBox.exec();
           }
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox msgBox;
    if(enter)
            {
                QElapsedTimer timer;
                timer.start();
                quickSort(movies);
                qDebug() << "Czas wykonania sortowania przez szybkie sortowanie:  "  << timer.elapsed() << "ms. \n";
                msgBox.setText("Movies have been sorted. The result can be checked in Sorted.txt file");
                msgBox.exec();
            }else{
                msgBox.setText("Firstly upload movies from file.");
                msgBox.exec();
            }
            //for(int i=0; i < movies.size(); i++)
            //{
             //   qDebug() << movies[i].getGrade() << "\n";
            //}
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox msgBox;
    if(enter)
            {
                QElapsedTimer timer;
                timer.start();
                introspectiveSort(movies);
                qDebug() << "Czas wykonania sortowania przez sortowanie introspektywne:  "  << timer.elapsed() << "ms. \n";
                msgBox.setText("Movies have been sorted. The result can be checked in Sorted.txt file");
                msgBox.exec();
            }else{
                msgBox.setText("Firstly upload movies from file.");
                msgBox.exec();
            }
}


void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox msgBox;
    if(enter)
            {
                QElapsedTimer timer;
                timer.start();
                mergeSort(movies);
                qDebug() << "Czas wykonania sortowania przez scalanie:  "  << timer.elapsed() << "ms. \n";
                qDebug() << "Rozmiar"  << movies.size();
                msgBox.setText("Movies have been sorted. The result can be checked in Sorted.txt file");
                msgBox.exec();
            }else{
                msgBox.setText("Firstly upload movies from file.");
                msgBox.exec();
            }
}


