#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregarcorreos.h"
#include "agregardestinatarios.h"
#include "enviarcorreo.h"
#include "vercorreosenviados.h"
#include "usuarios.h"


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
Oficina MainWindow::oficinaPostal;

void MainWindow::on_pushButton_clicked()
{
    if(personas.size()>=2){
        agregarcorreos * prueba= new agregarcorreos();
        prueba->show();

    }else{
        QMessageBox::information(this, "Información", "No hay suficiente personas para realizar esta operacion\nPor favor registre la persona involucradas para esta transaccion");
    }


}

void MainWindow::on_pushButton_3_clicked()
{

    //Agregar persona.
    agregardestinatarios * prueba2= new agregardestinatarios();
    prueba2->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    if(oficinaPostal.getCant()<=0){
        QMessageBox::information(this, "Información", "No hay correos para enviar");
    }else{
      EnviarCorreo * prueba3= new EnviarCorreo;
      prueba3->show();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    VerCorreosEnviados * prueba4= new VerCorreosEnviados();
    prueba4->show();

}

void MainWindow::on_pushButton_6_clicked()
{
     Usuarios * prueba5= new Usuarios();
     prueba5->show();
}

bool MainWindow::exist(string id){
    for(Persona* tmp:personas){
        if(tmp->getId()==id){
            return true;
        }
    }
    return false;

}
