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

void Metodos_Abiertos::on_newton_clicked()
{
    Newton *w = new Newton;
    w->show();
}

void Metodos_Abiertos::on_secante_clicked()
{
    Secante *w = new Secante;
    w->show();
}

void Metodos_Abiertos::on_mult_Raizes_clicked()
{
    Raizes_Multiples *w = new Raizes_Multiples;
    w->show();
}
