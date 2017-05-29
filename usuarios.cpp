#include "usuarios.h"
#include "ui_usuarios.h"

Usuarios::Usuarios(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Usuarios)
{
    ui->setupUi(this);
    mostrarData(false);
    mostrarPersonas();

}

Usuarios::~Usuarios()
{
    delete ui;


}

void Usuarios::on_pushButton_clicked()
{
    if(ui->textEdit->toPlainText()==NULL){
        QMessageBox::information(this, "Información", "Porfavor ingrese el Id de la persona");
    }
    else if(MainWindow::personas.size()<=0){
         QMessageBox::information(this, "Información", "No hay ninguna persona registrada en nuesta base de datoos");

     }else{
        string tmpId;
        tmpId=ui->textEdit->toPlainText().toUpper().toStdString();

        if(MainWindow::exist(tmpId)){
             mostrarData(true);
            for(Persona* tmp:MainWindow::personas){
                if(tmp->getId()==tmpId){
                    mostrarData(true);
                    ui->lblId->setText(QString::fromStdString(tmp->getId()));
                    ui->lblnombre->setText(QString::fromStdString(tmp->getNombre()));
                    ui->lblDireccion->setText(QString::fromStdString(tmp->getDireccion()));
                    ui->lblSexo->setText(QString::fromStdString(obtenerNombreSexo(tmp->getSexo())));
                    ui->lblCorreosE->setText(QString::number(tmp->correosenviados));
                    ui->lblCorreosR->setText(QString::number(tmp->correosRecibidos()));
                }
            }
        }else{
            QMessageBox::information(this, "Información", "No existe una persona con ese ID");
        }
    }


}
void Usuarios::mostrarData(bool n){
    ui->lblId->setVisible(n);
    ui->lblnombre->setVisible(n);
    ui->lblDireccion->setVisible(n);
    ui->lblSexo->setVisible(n);
    ui->lblCorreosE->setVisible(n);
    ui->lblCorreosR->setVisible(n);
}


string Usuarios::obtenerNombreSexo(TipoDeSexo n){
    if(n==TipoDeSexo::HOMBRE){
        return "HOMBRE";
    }else if(n==TipoDeSexo::MUJER){
        return "MUJER";
    }
}


void Usuarios::mostrarPersonas(){
    for(Persona* tmp:MainWindow::personas){
        string data="ID: "+tmp->getId()+"           Nombre: "+tmp->getNombre();
        ui->listWidgetPersonas->addItem(QString::fromStdString(data));
    }
}
