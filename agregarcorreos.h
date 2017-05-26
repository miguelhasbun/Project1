#ifndef AGREGARCORREOS_H
#define AGREGARCORREOS_H

#include <QMainWindow>

namespace Ui {
class agregarcorreos;
}

class agregarcorreos : public QMainWindow
{
    Q_OBJECT

public:
    explicit agregarcorreos(QWidget *parent = 0);
    ~agregarcorreos();

private:
    Ui::agregarcorreos *ui;
};

#endif // AGREGARCORREOS_H
