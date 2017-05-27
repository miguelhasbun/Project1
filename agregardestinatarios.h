#ifndef AGREGARDESTINATARIOS_H
#define AGREGARDESTINATARIOS_H

#include <QMainWindow>
#include<mainwindow.h>
#include<iostream>

using namespace std;
namespace Ui {
class agregardestinatarios;
}

class agregardestinatarios : public QMainWindow
{
    Q_OBJECT

public:
    explicit agregardestinatarios(QWidget *parent = 0);
    TipoDeSexo obtenerTipoDeSexo();
    string obtenerNombreSexo(TipoDeSexo n);
    void Limpiar();
    ~agregardestinatarios();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::agregardestinatarios *ui;
};

#endif // AGREGARDESTINATARIOS_H
