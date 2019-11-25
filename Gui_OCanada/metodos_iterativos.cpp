#include "metodos_iterativos.h"
#include "ui_metodos_iterativos.h"

Metodos_Iterativos::Metodos_Iterativos(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Metodos_Iterativos)
{
    ui->setupUi(this);
}

Metodos_Iterativos::~Metodos_Iterativos()
{
    delete ui;
}

void Metodos_Iterativos::on_jacobi_clicked()
{

}

void Metodos_Iterativos::on_seidel_clicked()
{

}

void Metodos_Iterativos::on_back_clicked()
{
    this->close();
}
