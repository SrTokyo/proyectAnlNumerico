#include "metodos_abiertos.h"
#include "ui_metodos_abiertos.h"

Metodos_Abiertos::Metodos_Abiertos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Metodos_Abiertos)
{
    ui->setupUi(this);
}

Metodos_Abiertos::~Metodos_Abiertos()
{
    delete ui;
}

void Metodos_Abiertos::on_punto_Fijo_clicked()
{
    Punto_Fijo *w = new Punto_Fijo;
    w->show();
}
