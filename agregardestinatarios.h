#ifndef AGREGARDESTINATARIOS_H
#define AGREGARDESTINATARIOS_H

#include <QMainWindow>

namespace Ui {
class agregardestinatarios;
}

class agregardestinatarios : public QMainWindow
{
    Q_OBJECT

public:
    explicit agregardestinatarios(QWidget *parent = 0);
    ~agregardestinatarios();

private:
    Ui::agregardestinatarios *ui;
};

#endif // AGREGARDESTINATARIOS_H
