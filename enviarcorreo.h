#ifndef ENVIARCORREO_H
#define ENVIARCORREO_H
#include"correo.h"
#include<vector>
#include"mainwindow.h"
#include <QMainWindow>
#include<QMessageBox>
#include<iostream>
#include<QMovie>

using namespace std;


namespace Ui {
class EnviarCorreo;
}

class EnviarCorreo : public QMainWindow
{
    Q_OBJECT

public:
    explicit EnviarCorreo(QWidget *parent = 0);
    string obtenerNombreDeEncomienda(TipoDeEncomienda n);

    void mostrarDatos(bool n);
    void setDatos(Correo * n);
    void cargarCorreos();
    ~EnviarCorreo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EnviarCorreo *ui;
};

#endif // ENVIARCORREO_H
