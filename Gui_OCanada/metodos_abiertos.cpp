#include "metodos_abiertos.h"
#include "ui_metodos_abiertos.h"

Metodos_Abiertos::Metodos_Abiertos(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Metodos_Abiertos)
{
    ui->setupUi(this);
}

Metodos_Abiertos::~Metodos_Abiertos()
{
    delete ui;
}

void Metodos_Abiertos::on_mult_Raizes_clicked()
{

}

void Metodos_Abiertos::on_newton_clicked()
{

}

void Metodos_Abiertos::on_punto_Fijo_clicked()
{

}

void Metodos_Abiertos::on_secante_clicked()
{

}

void Metodos_Abiertos::on_back_clicked()
{
    this->close();
}
