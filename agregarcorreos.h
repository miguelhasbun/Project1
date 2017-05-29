#ifndef AGREGARCORREOS_H
#define AGREGARCORREOS_H
#include"agregarcorreos.h"
#include"persona.h"
#include <QMainWindow>
#include<iostream>
#include"mainwindow.h"
#include"correo.h"
#include"QMovie"

using namespace std;
namespace Ui {
class agregarcorreos;
}

class agregarcorreos : public QMainWindow
{
    Q_OBJECT

public:
    explicit agregarcorreos(QWidget *parent = 0);
    ~agregarcorreos();
    Persona *obtenerPersona(string id);
    TipoDeEncomienda obtenerTipoDeEncomienda();
    void reset();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_pushButton_clicked();

    void on_txtPeso_textChanged();
    void cargarImagen(double n);

private:
    Ui::agregarcorreos *ui;
};

#endif // AGREGARCORREOS_H
