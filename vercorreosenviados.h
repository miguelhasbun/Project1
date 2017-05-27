#ifndef VERCORREOSENVIADOS_H
#define VERCORREOSENVIADOS_H

#include <QMainWindow>

namespace Ui {
class VerCorreosEnviados;
}

class VerCorreosEnviados : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerCorreosEnviados(QWidget *parent = 0);
    ~VerCorreosEnviados();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::VerCorreosEnviados *ui;
};

#endif // VERCORREOSENVIADOS_H
