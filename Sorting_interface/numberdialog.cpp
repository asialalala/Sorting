#include "numberdialog.h"
#include "ui_numberdialog.h"

numberDialog::numberDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::numberDialog)
{
    ui->setupUi(this);
}

numberDialog::~numberDialog()
{
    delete ui;
}
