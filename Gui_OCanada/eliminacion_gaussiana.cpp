#include "eliminacion_gaussiana.h"
#include "ui_eliminacion_gaussiana.h"

Eliminacion_Gaussiana::Eliminacion_Gaussiana(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Eliminacion_Gaussiana)
{
    ui->setupUi(this);
}

Eliminacion_Gaussiana::~Eliminacion_Gaussiana()
{
    delete ui;
}

void Eliminacion_Gaussiana::on_back_clicked()
{
    this->close();
}

void Eliminacion_Gaussiana::on_p_total_clicked()
{

}

void Eliminacion_Gaussiana::on_p_parcial_clicked()
{

}

void Eliminacion_Gaussiana::on_simple_clicked()
{

}
