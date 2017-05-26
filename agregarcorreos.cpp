#include "agregarcorreos.h"
#include "ui_agregarcorreos.h"

agregarcorreos::agregarcorreos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::agregarcorreos)
{
    ui->setupUi(this);
}

agregarcorreos::~agregarcorreos()
{
    delete ui;
}
