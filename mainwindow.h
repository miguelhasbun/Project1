#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"oficina.h"
//#include"persist.h"
#include<vector>
#include<iostream>
#include <QMainWindow>

using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    static vector<Persona*>personas;
    static Oficina oficinaPostal;
    ~MainWindow();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
