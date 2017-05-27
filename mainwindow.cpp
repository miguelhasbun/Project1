#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregarcorreos.h"
#include "agregardestinatarios.h"
#include "enviarcorreo.h"
#include "vercorreosenviados.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    agregarcorreos * prueba= new agregarcorreos();
    prueba->show();
}

void MainWindow::on_pushButton_3_clicked()
{

    //Agregar persona.
    agregardestinatarios * prueba2= new agregardestinatarios();
    prueba2->show();

}

void MainWindow::on_pushButton_2_clicked()
{
  agregarcorreos* prueba3= new agregarcorreos();
  prueba3->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    VerCorreosEnviados * prueba4= new VerCorreosEnviados();
    prueba4->show();

}
