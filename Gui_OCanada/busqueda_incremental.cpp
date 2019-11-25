#include "busqueda_incremental.h"
#include "ui_busqueda_incremental.h"

Busqueda_Incremental::Busqueda_Incremental(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Busqueda_Incremental)
{
    ui->setupUi(this);
}

Busqueda_Incremental::~Busqueda_Incremental()
{
    delete ui;
}

void Busqueda_Incremental::on_bt_funcion_clicked()
{
     funcion = QInputDialog::getText(this,"Entrada", "Funcion de la forma descrita").toStdString();
     x = QInputDialog::getDouble(this,"Entrada", "Valor de X inicial");
     do{
     delta = QInputDialog::getDouble(this,"Entrada", "Valor de delta mayor a 0");
     } while (niter <= 0);
     do{
     niter = QInputDialog::getInt(this,"Entrada", " Numero maximo de iteraciones mayor a 0 y como entero");
     } while (niter <= 0);
     ui->table_solve->setRowCount(3);
     ui->table_solve->setColumnCount(2);

}


double Busqueda_Incremental::analizador(string f, double _X) {
    double resultado = analizar(f,_X);
    return resultado;
}
void Busqueda_Incremental::on_bt_solve_clicked()
{
    double fx0 = analizador(funcion,x);
    if (fx0 == 0.0) {
        ui->table_solve->setItem(0,0,new QTableWidgetItem(QString::fromStdString("X0 es una raiz")));
    }
    else {
        double x1 = x + delta;
        double fx1 = analizador(funcion,x1);
        int i = 1;
        while (fx0 * fx1 > 0 && i < niter) {
            x = x1;
            fx0 = fx1;
            x1 = x + delta;
            fx1 = analizador(funcion,x1);
            i += 1;
        }
        if (fx1 == 0.0) {
            ui->table_solve->setItem(0,0,new QTableWidgetItem(QString::fromStdString("x1 es una raiz")));
            ui->table_solve->setItem(1,0,new QTableWidgetItem(QString::number(x1)));
        }
        else if (fx0 * fx1 < 0) {
            ui->table_solve->setItem(0,0,new QTableWidgetItem(QString::fromStdString("Hay una reiz en el intervalo entre x1 y x0")));
            ui->table_solve->setItem(1,0,new QTableWidgetItem(QString::number(x)));
            ui->table_solve->setItem(2,0,new QTableWidgetItem(QString::number(x1)));
            ui->table_solve->setItem(1,1,new QTableWidgetItem(QString::fromStdString("x0")));
            ui->table_solve->setItem(2,1,new QTableWidgetItem(QString::fromStdString("x1")));
        }
        else {
            ui->table_solve->setItem(0,0,new QTableWidgetItem(QString::fromStdString("se ha alcansado el numero maximo de iteraciones sin exito")));
        }
    }
}
