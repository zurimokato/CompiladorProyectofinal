#include "documentacion.h"
#include "ui_documentacion.h"

Documentacion::Documentacion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Documentacion)
{
    ui->setupUi(this);
}

Documentacion::~Documentacion()
{
    delete ui;
}
