#ifndef MAINWINDOWFULL_H
#define MAINWINDOWFULL_H

#include <QMainWindow>

namespace Ui {
class MainWindowFull;
}

class MainWindowFull : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowFull(QWidget *parent = 0);
    ~MainWindowFull();

private:
    Ui::MainWindowFull *ui;
};

#endif // MAINWINDOWFULL_H