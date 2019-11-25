#include "menu_cholesky.h"
#include "ui_menu_cholesky.h"

Menu_Cholesky::Menu_Cholesky(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Menu_Cholesky)
{
    ui->setupUi(this);
}

Menu_Cholesky::~Menu_Cholesky()
{
    delete ui;
}

void Menu_Cholesky::on_back_clicked()
{
    this->close();
}

void Menu_Cholesky::on_pv_Total_clicked()
{

}

void Menu_Cholesky::on_pv_Parcial_clicked()
{

}

void Menu_Cholesky::on_simple_clicked()
{

}

void Menu_Cholesky::on_matriz_N_textEdited(const QString &arg1)
{
    size_N = arg1.toInt();
}
