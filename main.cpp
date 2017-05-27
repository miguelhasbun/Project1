#include "mainwindow.h"
#include "oficina.h"
#include"persona.h"
#include <iostream>
#include<vector>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    vector<Persona*>per;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}
