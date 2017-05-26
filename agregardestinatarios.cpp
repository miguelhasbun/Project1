#include "agregardestinatarios.h"
#include "ui_agregardestinatarios.h"
#include <QMessageBox>

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
    if (ui->radioButton->isCheckable()){
        ui->label_6->setVisible(false);
        ui->label_7->setVisible(true);

    }
}

void agregardestinatarios::on_radioButton_2_clicked()
{
    if (ui->radioButton_2->isCheckable()){
            ui->label_6->setVisible(true);
            ui->label_7->setVisible(false);

     }
}

void agregardestinatarios::on_pushButton_clicked()
{
    QMessageBox::information(this, "Estado", "La persona ha sido agregada con éxito");
}
