#include "usuarios.h"
#include "ui_usuarios.h"

Usuarios::Usuarios(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Usuarios)
{
    ui->setupUi(this);
}

Usuarios::~Usuarios()
{
    delete ui;
}
