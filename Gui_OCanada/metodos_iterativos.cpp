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
    int n = QInputDialog::getInt(this,"Entrada", "ingrese el valor de N * N  de la matriz");
    Seidel *s1 = new Seidel;
    s1->init(n);
    s1->show();
}

void Metodos_Iterativos::on_back_clicked()
{
    this->close();
}
