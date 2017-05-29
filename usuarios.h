#ifndef USUARIOS_H
#define USUARIOS_H

#include"persona.h"
#include"mainwindow.h"
#include<iostream>
#include <QMainWindow>
#include<QMessageBox>
using namespace std;
namespace Ui {
class Usuarios;
}

class Usuarios : public QMainWindow
{
    Q_OBJECT

public:
    explicit Usuarios(QWidget *parent = 0);
    void mostrarData(bool n);
    void mostrarPersonas();
    string obtenerNombreSexo(TipoDeSexo n);

    ~Usuarios();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Usuarios *ui;
};

#endif // USUARIOS_H
