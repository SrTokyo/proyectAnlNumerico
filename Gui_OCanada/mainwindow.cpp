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
}

void MainWindow::on_bt_Metodos_Cerrados_clicked()
{
    Metodos_Cerrados *w = new Metodos_Cerrados;
    w->show();
}

void MainWindow::on_bt_Metodos_Abiertos_clicked()
{
    Metodos_Abiertos *w = new Metodos_Abiertos;
    w->show();
}

void MainWindow::on_bt_Metodos_Factorizacion_clicked()
{
    Metodos_Factorizacion *w = new Metodos_Factorizacion;
    w->show();
}

void MainWindow::on_bt_Eliminacion_Gaussiana_clicked()
{
    Eliminacion_Gaussiana *w = new Eliminacion_Gaussiana;
    w->show();
}

void MainWindow::on_bt_Metodos_Iterativos_clicked()
{
    Metodos_Iterativos *w = new Metodos_Iterativos;
    w->show();
}

void MainWindow::on_bt_Metodos_Interpolacion_clicked()
{
    Metodos_Interpolacion *w = new Metodos_Interpolacion;
    w->show();
}
