#include "menu_doolittle.h"
#include "ui_menu_doolittle.h"


Menu_Doolittle::Menu_Doolittle(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Menu_Doolittle)
{
    ui->setupUi(this);
}

Menu_Doolittle::~Menu_Doolittle()
{
    delete ui;
}

void Menu_Doolittle::on_simple_clicked()
{

}

void Menu_Doolittle::on_pv_Parcial_clicked()
{

}

void Menu_Doolittle::on_pv_Total_clicked()
{

}

void Menu_Doolittle::on_back_clicked()
{
    this->close();
}


