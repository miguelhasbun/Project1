#ifndef ENVIARCORREO_H
#define ENVIARCORREO_H

#include <QMainWindow>

namespace Ui {
class EnviarCorreo;
}

class EnviarCorreo : public QMainWindow
{
    Q_OBJECT

public:
    explicit EnviarCorreo(QWidget *parent = 0);
    ~EnviarCorreo();

private:
    Ui::EnviarCorreo *ui;
};

#endif // ENVIARCORREO_H
