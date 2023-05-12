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
    //start = std::chrono::high_resolution_clock::now(); // count time
    filter();
    //end = std::chrono::high_resolution_clock::now(); // count time
    filtered = true;
   //duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
   //std::cout << "Czas wykonania filtracji: " << duration.count() * 1e-9 << std::endl;
    QMessageBox msgBox;
    msgBox.setText("These movies has been fitered. The result can be check in file rankingFiltered.csv.");
    msgBox.exec();

}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox msgBox;
    if(filtered)
            {
                read(1000, movies);
                enter = true;
                msgBox.setText("1 000 movies have been uploaded.");
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
                read(10000, movies);
                enter = true;
                msgBox.setText("10 000 movies have been uploaded.");
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
                read(100000, movies);
                enter = true;
                msgBox.setText("100 000 have been uploaded.");
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
               readAll(movies);
               enter = true;
               msgBox.setText("All movies have been uploaded.");
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
                //start = std::chrono::high_resolution_clock::now(); // count time
                quickSort(movies);
                //end = std::chrono::high_resolution_clock::now(); // count time
                //duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
                //std::cout << "Czas wykonania sortowania: " << duration.count() * 1e-9 << std::endl;
                msgBox.setText("Movies have been sorted. The result can be checked in Sorted.txt file");
                msgBox.exec();
            }else{
                msgBox.setText("Firstly upload movies from file.");
                msgBox.exec();
            }
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox msgBox;
    if(enter)
            {
                //start = std::chrono::high_resolution_clock::now(); // count time
                introspectiveSort(movies);
                //end = std::chrono::high_resolution_clock::now(); // count time
                //duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
                //std::cout << "Czas wykonania sortowania: " << duration.count() * 1e-9 << std::endl;
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
                //start = std::chrono::high_resolution_clock::now(); // count time
                mergeSort(movies);
                //end = std::chrono::high_resolution_clock::now(); // count time
                //duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
                //std::cout << "Czas wykonania sortowania: " << duration.count() * 1e-9 << std::endl;
                msgBox.setText("Movies have been sorted. The result can be checked in Sorted.txt file");
                msgBox.exec();
            }else{
                msgBox.setText("Firstly upload movies from file.");
                msgBox.exec();
            }
}

