#include "metodos_interpolacion.h"
#include "ui_metodos_interpolacion.h"

Metodos_Interpolacion::Metodos_Interpolacion(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Metodos_Interpolacion)
{
    ui->setupUi(this);
}

Metodos_Interpolacion::~Metodos_Interpolacion()
{
    delete ui;
}

void Metodos_Interpolacion::on_newton_Dif_clicked()
{

}

void Metodos_Interpolacion::on_lagrange_clicked()
{

}

void Metodos_Interpolacion::on_sp_Lineal_clicked()
{

}

void Metodos_Interpolacion::on_sp_Cuadratico_clicked()
{

}

void Metodos_Interpolacion::on_sp_Cubico_clicked()
{

}

void Metodos_Interpolacion::on_back_clicked()
{
    this->close();
}
