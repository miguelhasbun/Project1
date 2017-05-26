#include "agregardestinatarios.h"
#include "ui_agregardestinatarios.h"

agregardestinatarios::agregardestinatarios(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::agregardestinatarios)
{
    ui->setupUi(this);
}

agregardestinatarios::~agregardestinatarios()
{
    delete ui;
}
