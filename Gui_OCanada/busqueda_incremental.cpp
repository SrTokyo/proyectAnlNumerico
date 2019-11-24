#include "busqueda_incremental.h"
#include "ui_busqueda_incremental.h"

Busqueda_Incremental::Busqueda_Incremental(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Busqueda_Incremental)
{
    ui->setupUi(this);
}

Busqueda_Incremental::~Busqueda_Incremental()
{
    delete ui;
}

void Busqueda_Incremental::on_back_clicked()
{
    this->close();
}


