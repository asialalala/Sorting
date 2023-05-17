#ifndef FILEREAD_H
#define FILEREAD_H

#include <QMainWindow>

namespace Ui {
class fileRead;
}

class fileRead : public QMainWindow
{
    Q_OBJECT

public:
    explicit fileRead(QWidget *parent = nullptr);
    ~fileRead();

private:
    Ui::fileRead *ui;
};
#endif // FILEREAD_H
