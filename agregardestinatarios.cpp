#include "agregardestinatarios.h"
#include "ui_agregardestinatarios.h"
#include <QMessageBox>
#include<QString>


agregardestinatarios::agregardestinatarios(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::agregardestinatarios)
{
    ui->setupUi(this);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
}

agregardestinatarios::~agregardestinatarios()
{
    delete ui;
}

void agregardestinatarios::on_radioButton_clicked()
{
    if (ui->radioButton->isChecked()){
        ui->label_6->setVisible(false);
        ui->label_7->setVisible(true);

    }
}

void agregardestinatarios::on_radioButton_2_clicked()
{
    if (ui->radioButton_2->isChecked()){
            ui->label_6->setVisible(true);
            ui->label_7->setVisible(false);

     }
}

void agregardestinatarios::on_pushButton_clicked()
{
    string nombre,id,direccion;
    TipoDeSexo sexo;
    id=ui->textEdit->toPlainText().toUpper().toStdString();
    nombre=ui->textEdit_2->toPlainText().toStdString();
    direccion=ui->textEdit_3->toPlainText().toStdString();

    sexo=obtenerTipoDeSexo();
    Persona *newPersona=new Persona(id,nombre,sexo,direccion);
    MainWindow::personas.push_back(newPersona);
    Limpiar();
    for(Persona * tmp:MainWindow::personas){
         cout<<"ID: "<<tmp->getId()<<endl;
        cout<<"Nombre: "<<tmp->getNombre()<<endl;
        cout<<"Sexo: "<<obtenerNombreSexo(tmp->getSexo())<<endl;
        cout<<"Direccion: "<<tmp->getDireccion()<<endl;
    }

    QMessageBox::information(this, "Estado", "La persona ha sido agregada con éxito");
}

TipoDeSexo agregardestinatarios::obtenerTipoDeSexo(){
    if (ui->radioButton->isChecked()){
        return TipoDeSexo::HOMBRE;
    }else
        return TipoDeSexo::MUJER;
    }

void agregardestinatarios::Limpiar(){
    ui->textEdit->setText(NULL);
    ui->textEdit_2->setText(NULL);
    ui->textEdit_3->setText(NULL);
    ui->groupBox->setChecked(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
}

string agregardestinatarios::obtenerNombreSexo(TipoDeSexo n){
    if(n==TipoDeSexo::HOMBRE){
        return "HOMBRE";
    }else if(n==TipoDeSexo::MUJER){
        return "MUJER";
    }
}
