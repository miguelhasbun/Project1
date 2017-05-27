#include "agregarcorreos.h"
#include "ui_agregarcorreos.h"
#include <QMessageBox>


agregarcorreos::agregarcorreos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::agregarcorreos)
{
    ui->setupUi(this);
    ui->label_6->setVisible(false);
    ui->textEdit_3->setVisible(false);
}

agregarcorreos::~agregarcorreos()
{
    delete ui;
}

void agregarcorreos::on_radioButton_clicked()
{
    if (ui->radioButton->isCheckable()){
        ui->label_6->setVisible(false);
        ui->textEdit_3->setVisible(false);
        QMessageBox::information(this, "Información", "Todas las cartas pesan 1 gramo");
    }
}

void agregarcorreos::on_radioButton_2_clicked()
{
    if (ui->radioButton_2->isCheckable()){
        ui->label_6->setVisible(true);
        ui->textEdit_3->setVisible(true);
    }
}
