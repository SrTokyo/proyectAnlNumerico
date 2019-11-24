#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bt_Busqueda_Incremental_clicked()
{
    Busqueda_Incremental *w = new Busqueda_Incremental;
    w->show();
    this->hide();

}

void MainWindow::on_bt_Metodos_Cerrados_clicked()
{

}

void MainWindow::on_bt_Metodos_Abiertos_clicked()
{

}

void MainWindow::on_bt_Metodos_Factorizacion_clicked()
{

}

void MainWindow::on_bt_Eliminacion_Gaussiana_clicked()
{

}

void MainWindow::on_bt_Metodos_Iterativos_clicked()
{

}

void MainWindow::on_bt_Metodos_Interpolacion_clicked()
{

}
