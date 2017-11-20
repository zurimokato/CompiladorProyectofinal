#ifndef DOCUMENTACION_H
#define DOCUMENTACION_H

#include <QWidget>

namespace Ui {
class Documentacion;
}

class Documentacion : public QWidget
{
    Q_OBJECT

public:
    explicit Documentacion(QWidget *parent = 0);
    ~Documentacion();

private:
    Ui::Documentacion *ui;
};

#endif // DOCUMENTACION_H
