#include "biseccion.h"
#include "ui_biseccion.h"

Biseccion::Biseccion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Biseccion)
{
    ui->setupUi(this);
}

Biseccion::~Biseccion()
{
    delete ui;
}

double Biseccion::analizador(string f, double _X) {
    double resultado = analizar(f,_X);
    return resultado;
}

double Biseccion::bisection() {
    double fxi = analizador(funcion,xi);
    double fxu = analizador(funcion,xu);
    if (fxi == 0.0) {
        string is = "Raiz exactamente en";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
         ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(xi)));
    }
    else if (fxu == 0.0) {
        string is = "Raiz exactamente en";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
         ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(xu)));
    }
    else if (fxi * fxu < 0.0) {
        double xm = (xi + xu) / 2;
        double fxm = analizador(funcion,xm);
        int count = 1;
        double error = tol + 1;
        ui->table_solve->setItem(count-1,0,new QTableWidgetItem(QString::number(xi)));
        ui->table_solve->setItem(count-1,1,new QTableWidgetItem(QString::number(xm)));
         ui->table_solve->setItem(count-1,2,new QTableWidgetItem(QString::number(xu)));
         ui->table_solve->setItem(count-1,3,new QTableWidgetItem(QString::number(fxm)));
          ui->table_solve->setItem(count-1,4,new QTableWidgetItem(QString::number(error)));

        while (fxm != 0.0 &&  error > tol && count < niter) {
            if (fxi * fxm < 0) {
                xu = xm;
                fxu = fxm;
            }
            else {
                xi = xm;
                fxi = fxm;
            }
            double lastXm = xm;
            xm = (xi + xu) / 2;
            fxm = analizador(funcion,xm);
            error = ((strcmp(eType, "abs") == 0) ? fabs(xm - lastXm) : fabs((xm - lastXm) / xm));
            count++;
            ui->table_solve->setItem(count-1,0,new QTableWidgetItem(QString::number(xi)));
            ui->table_solve->setItem(count-1,1,new QTableWidgetItem(QString::number(xm)));
             ui->table_solve->setItem(count-1,2,new QTableWidgetItem(QString::number(xu)));
             ui->table_solve->setItem(count-1,3,new QTableWidgetItem(QString::number(fxm)));
              ui->table_solve->setItem(count-1,4,new QTableWidgetItem(QString::number(error)));
        }
        if (fxm == 0.0) {
            string is = "Raiz con Fm(x) = 0 encontrada en ";
            ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(xm)));
            is = "con una tolerancia de ";
            ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error)));
             return 0.0;
        }
        else if (error < tol) {
            string is = "Raiz Aproximada a";
            ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
             ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(xm)));
              is = "con tolerancia de";
             ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
              ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error)));
              return 0.0;
        }
        else {
            string is = "Raiz no alcanzada en niteraciones ";
            ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
             ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(niter)));
             return 0.0;

        }
    }
    string is = "Intervalo no valido, no contien una raiz ";
    ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
    return 0.0;

}


void Biseccion::on_bt_funcion_clicked()
{
    funcion = QInputDialog::getText(this,"Entrada", "Funcion de la forma descrita").toStdString();
    xi = QInputDialog::getDouble(this,"Entrada", "Valor de Xi inicial");
    xu = QInputDialog::getDouble(this,"Entrada", "Valor de Xu inicial");
    do{
    niter = QInputDialog::getInt(this,"Entrada", " Numero maximo de iteraciones mayor a 0 y como entero");
    } while (niter <= 0);
    ui->table_solve->setRowCount(niter);
    ui->table_solve->setColumnCount(5);
    QStringList titulos;
    titulos << "Xi" << "Xu" << "Xm" << "f(Xm)" << "Error";
    ui->table_solve->setHorizontalHeaderLabels(titulos);
    eType = "abs";
    ui->table_resoult->setRowCount(4);
    ui->table_resoult->setColumnCount(1);
    ui->table_resoult->setColumnWidth(0,4);
}

void Biseccion::on_bt_solve_clicked()
{
    tol = ui->lineEdit->text().toDouble();
    bisection();
}

void Biseccion::on_pushButton_2_clicked()
{
    eType = "otro";
}

void Biseccion::on_pushButton_clicked()
{
    eType = "abs";
}
