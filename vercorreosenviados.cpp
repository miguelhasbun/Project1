#include "vercorreosenviados.h"
#include "ui_vercorreosenviados.h"

VerCorreosEnviados::VerCorreosEnviados(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerCorreosEnviados)
{
    ui->setupUi(this);

}

VerCorreosEnviados::~VerCorreosEnviados()
{
    delete ui;
}


