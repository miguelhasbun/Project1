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

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::agregarcorreos *ui;
};

#endif // AGREGARCORREOS_H
