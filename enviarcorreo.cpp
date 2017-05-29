#include "enviarcorreo.h"
#include "ui_enviarcorreo.h"

EnviarCorreo::EnviarCorreo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EnviarCorreo)
{
    ui->setupUi(this);
    mostrarDatos(false);
    cargarCorreos();

}

EnviarCorreo::~EnviarCorreo()
{
    delete ui;
}

void EnviarCorreo::cargarCorreos(){
    vector<Correo*>oficinadecorreos;
    oficinadecorreos=MainWindow::oficinaPostal.mostrarCorreos();

    for(Correo*temp:oficinadecorreos){
       string data="De: "+temp->remitente->getNombre()+"\nPara: "+temp->destinatario->getNombre()+"\nDireccion: "+temp->destinatario->getDireccion()+"\nTipo: "+obtenerNombreDeEncomienda(temp->tipo);
        ui->lWidget->addItem(QString::fromStdString(data));
        ///
    }
}

string EnviarCorreo::obtenerNombreDeEncomienda(TipoDeEncomienda n){
    if(n==TipoDeEncomienda::CARTA){
        return "CARTA";
    }else if(n==TipoDeEncomienda::ENCOMIENDA){
        return "ENCOMIENDA";
    }
}

void EnviarCorreo::on_pushButton_clicked()
{
    if(MainWindow::oficinaPostal.getCant()>0){
        Correo *temp;
        temp=MainWindow::oficinaPostal.firstMail();
        MainWindow::oficinaPostal.eliminarUltimo();
        ui->lWidget->clear();
        cargarCorreos();
        mostrarDatos(true);
        setDatos(temp);
        temp->destinatario->correosrecibidos++;
        temp->remitente->correosenviados++;
        QMessageBox::information(this, "Información", "El mensaje a sido enviado con exito");
        QMovie *mmovie=new QMovie("C:/Users/max/Documents/GitHub/Project1/enviado.gif");
        ui->lblmovie->setMovie(mmovie);
        mmovie->start();

      }else{
        QMessageBox::information(this, "Información", "No hay correos para enviar");
    }


}


void EnviarCorreo::mostrarDatos(bool n){
    ui->lblDestinatario->setVisible(n);
    ui->lblRemitenete->setVisible(n);
    ui->lblDireccion->setVisible(n);
    ui->lblTipoDPaquete->setVisible(n);
    ui->lblPeso->setVisible(n);
    ui->lblTotal->setVisible(n);
    ui->lblmovie->setVisible(n);

}

void EnviarCorreo::setDatos(Correo * c){
    ui->lblDestinatario->setText(QString::fromStdString(c->destinatario->getNombre()));
    ui->lblRemitenete->setText(QString::fromStdString(c->remitente->getNombre()));
    ui->lblDireccion->setText(QString::fromStdString(c->destinatario->getDireccion()));
    ui->lblTipoDPaquete->setText(QString::fromStdString(obtenerNombreDeEncomienda(c->tipo)));
    ui->lblPeso->setText(QString::number(c->getMasa())+"g");
    ui->lblTotal->setText(QString::number(c->getTotal())+" Lps.");
}

void EnviarCorreo::on_pushButton_2_clicked()
{
    if(MainWindow::oficinaPostal.getCant()>0){
        while(MainWindow::oficinaPostal.getCant()>0){
            Correo *temp;
            temp=MainWindow::oficinaPostal.firstMail();
            MainWindow::oficinaPostal.eliminarUltimo();
            ui->lWidget->clear();
            cargarCorreos();
            mostrarDatos(true);
            setDatos(temp);
            temp->destinatario->correosrecibidos++;
            temp->remitente->correosenviados++;
        }
        QMessageBox::information(this, "Información", "Todos los mensajes han sido enviados con exito");
      }else{
        QMessageBox::information(this, "Información", "No hay correos para enviar");
    }
}
