#include "menu_crout.h"
#include "ui_menu_crout.h"

Menu_Crout::Menu_Crout(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Menu_Crout)
{
    ui->setupUi(this);
}

Menu_Crout::~Menu_Crout()
{
    delete ui;
}

void Menu_Crout::on_simple_clicked()
{

}

void Menu_Crout::on_pv_Parcial_clicked()
{

}

void Menu_Crout::on_pv_Total_clicked()
{

}

void Menu_Crout::on_back_clicked()
{
    this->close();
}
