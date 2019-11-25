#include "metodos_factorizacion.h"
#include "ui_metodos_factorizacion.h"

Metodos_Factorizacion::Metodos_Factorizacion(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Metodos_Factorizacion)
{
    ui->setupUi(this);
}

Metodos_Factorizacion::~Metodos_Factorizacion()
{
    delete ui;
}

void Metodos_Factorizacion::on_crout_clicked()
{
    Menu_Crout *w = new Menu_Crout;
    w->show();
}

void Metodos_Factorizacion::on_doolittle_clicked()
{
    int n = QInputDialog::getInt(this,"Entrada", "ingrese el valor de N * N  de la matriz");
    Doolittle *s1 = new Doolittle;
    s1->init(n);
    s1->show();
}

void Metodos_Factorizacion::on_cholesky_clicked()
{
    Menu_Cholesky *w = new Menu_Cholesky;
    w->show();
}

void Metodos_Factorizacion::on_back_clicked()
{
    this->close();
}
