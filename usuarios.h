#ifndef USUARIOS_H
#define USUARIOS_H

#include <QMainWindow>

namespace Ui {
class Usuarios;
}

class Usuarios : public QMainWindow
{
    Q_OBJECT

public:
    explicit Usuarios(QWidget *parent = 0);
    ~Usuarios();

private:
    Ui::Usuarios *ui;
};

#endif // USUARIOS_H
