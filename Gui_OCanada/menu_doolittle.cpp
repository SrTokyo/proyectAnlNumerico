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
        int n = QInputDialog::getInt(this,"Entrada", "ingrese el valor de N * N  de la matriz");
        Doolittle *s1 = new Doolittle;
        s1->show();
        s1->init(n);
        //s1.ejecucion();
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


