#include "metodos_cerrados.h"
#include "ui_metodos_cerrados.h"

Metodos_Cerrados::Metodos_Cerrados(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Metodos_Cerrados)
{
    ui->setupUi(this);
}

Metodos_Cerrados::~Metodos_Cerrados()
{
    delete ui;
}


void Metodos_Cerrados::on_Biseccion_clicked()
{
    Biseccion *w = new Biseccion;
    w->show();
}

void Metodos_Cerrados::on_regla_Falsa_clicked()
{

}

void Metodos_Cerrados::on_back_clicked()
{
    this->close();
}
