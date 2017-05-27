#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregarcorreos.h"
#include "agregardestinatarios.h"


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
vector<Persona*> MainWindow::personas;

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
