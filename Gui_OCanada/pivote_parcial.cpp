#include "pivote_parcial.h"
#include "ui_pivote_parcial.h"

Pivote_Parcial::Pivote_Parcial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pivote_Parcial)
{
    ui->setupUi(this);
}

Pivote_Parcial::~Pivote_Parcial()
{
    delete ui;
}
