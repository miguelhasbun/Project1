#include "agregarcorreos.h"
#include "ui_agregarcorreos.h"
#include <QMessageBox>


agregarcorreos::agregarcorreos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::agregarcorreos)
{
    ui->setupUi(this);
    ui->label_6->setVisible(false);
    ui->txtPeso->setVisible(false);
}

agregarcorreos::~agregarcorreos()
{
    delete ui;
}

void agregarcorreos::on_radioButton_clicked()
{
    if (ui->radioButton->isCheckable()){
        ui->label_6->setVisible(false);
        ui->txtPeso->setVisible(false);
        ui->label->setVisible(true);
        ui->label->setFixedHeight(100);
        ui->label->setFixedWidth(100);
        QPixmap p("C:/Users/max/Documents/GitHub/Project1/correo.png");

        ui->label->setPixmap(p);
        QMessageBox::information(this, "Información", "Todas las cartas pesan 1 gramo");
    }
}

void agregarcorreos::on_radioButton_2_clicked()
{
    if (ui->radioButton_2->isCheckable()){
        ui->label_6->setVisible(true);
        ui->txtPeso->setVisible(true);
        ui->label->setVisible(true);
        QPixmap p("C:/Users/max/Documents/GitHub/Project1/paquete 1.png");

        ui->label->setPixmap(p);
    }
}

void agregarcorreos::on_pushButton_clicked()
{

    string dest=ui->txtDestinatario->toPlainText().toUpper().toStdString();
    string remi=ui->txtRemitente->toPlainText().toUpper().toStdString();
    if(!MainWindow::exist(dest)){
      QMessageBox::information(this, "Información", "El destinatario no existe");
      return;
    }

     if(!MainWindow::exist(remi)){
         QMessageBox::information(this, "Información", "El remitente no existe");
         return;
     }
     double masa;

     if(dest!=remi){

            Persona*destinario,*remitente;
            remitente=obtenerPersona(remi);
            destinario=obtenerPersona(dest);
            TipoDeEncomienda tipo=obtenerTipoDeEncomienda();
            if(tipo==TipoDeEncomienda::CARTA){
                masa=1;
            }else if(tipo==TipoDeEncomienda::ENCOMIENDA){
                masa=ui->txtPeso->toPlainText().toDouble(false);
                if(masa<=0){
                    QMessageBox::information(this, "Información", "El peso del paquete no debe ser menor o igual a 0");
                    return;
                }
            }
            Correo *tmp=new Correo(remitente,destinario,tipo,masa);
            MainWindow::oficinaPostal.add(tmp);
            QMessageBox::information(this, "Información", "Correo Agregado");

            reset();

        }else{
           QMessageBox::information(this, "Información", "Lo siento no es posible enviar un correo a ti mismo");
     }
}


Persona * agregarcorreos::obtenerPersona(string id){
    for(Persona* tmp:MainWindow::personas){
        if(tmp->getId()==id){
            return tmp;
        }
    }
    return 0;
}

TipoDeEncomienda agregarcorreos::obtenerTipoDeEncomienda(){
    if (ui->radioButton->isChecked()){
        return TipoDeEncomienda::CARTA;
    }else
        return TipoDeEncomienda::ENCOMIENDA;
}

void agregarcorreos::reset(){
    ui->txtDestinatario->clear();
    ui->txtPeso->clear();
    ui->txtRemitente->clear();
    ui->txtPeso->setVisible(false);
    ui->label->setVisible(false);
    ui->label->setVisible(false);
    ui->label_6->setVisible(false);
}

void agregarcorreos::on_txtPeso_textChanged()
{
    double masa=ui->txtPeso->toPlainText().toDouble(false);
    cargarImagen(masa);

}
void agregarcorreos::cargarImagen(double n){
    if(n<9){
        ui->label->setFixedHeight(100);
        ui->label->setFixedWidth(100);

      }else if(n<50){
      ui->label->setFixedHeight(150);
      ui->label->setFixedWidth(150);

    }else if(n>=50){
        ui->label->setFixedHeight(300);
        ui->label->setFixedWidth(300);

    }
}

