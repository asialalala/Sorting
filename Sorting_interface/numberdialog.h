#ifndef NUMBERDIALOG_H
#define NUMBERDIALOG_H

#include <QDialog>

namespace Ui {
class numberDialog;
}

class numberDialog : public QDialog
{
    Q_OBJECT

public:
    explicit numberDialog(QWidget *parent = nullptr);
    ~numberDialog();

private:
    Ui::numberDialog *ui;
};

#endif // NUMBERDIALOG_H
