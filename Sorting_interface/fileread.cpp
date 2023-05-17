#include "fileread.h"

fileRead::fileRead(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fileRead)
{
    ui->setupUi(this);
}

fileRead::~fileRead()
{
    delete ui;
}
