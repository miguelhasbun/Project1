#include "enviarcorreo.h"
#include "ui_enviarcorreo.h"

EnviarCorreo::EnviarCorreo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EnviarCorreo)
{
    ui->setupUi(this);
}

EnviarCorreo::~EnviarCorreo()
{
    delete ui;
}
