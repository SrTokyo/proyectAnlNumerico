#include "newton.h"
#include "ui_newton.h"

Newton::Newton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Newton)
{
    ui->setupUi(this);
}

Newton::~Newton()
{
    delete ui;
}


double Newton::analizador(string f, double _X) {
    double resultado = analizar(f,_X);
    return resultado;
}

double Newton::nextXn(double x) {
    return x - (analizador(funcion,x) / analizador(gfuncion,x));
}
double Newton::solve() {
    double fx = analizador(funcion,x);
    double fder = analizador(gfuncion,x);
    int count = 0;
    double error = tol + 1;
    double xn = 0;
    ui->table_solve->setItem(count,0,new QTableWidgetItem(QString::number(x,'f',DECIMALS)));
    ui->table_solve->setItem(count,1,new QTableWidgetItem(QString::number(fx,'f',DECIMALS)));
    ui->table_solve->setItem(count,2,new QTableWidgetItem(QString::number(fder,'f',DECIMALS)));
    ui->table_solve->setItem(count,3,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
    while (fx != 0.0 && error > tol && fder != 0  && count < niter) {
        xn = nextXn(x);
        fx = analizador(funcion,xn);
        error = ((strcmp(eType, "abs") == 0) ? fabs(xn - x) : fabs((xn - x) / xn));
        fder = analizador(gfuncion,x);
        x = xn;
        count++;
        ui->table_solve->setItem(count,0,new QTableWidgetItem(QString::number(x,'f',DECIMALS)));
        ui->table_solve->setItem(count,1,new QTableWidgetItem(QString::number(fx,'f',DECIMALS)));
        ui->table_solve->setItem(count,2,new QTableWidgetItem(QString::number(fder,'f',DECIMALS)));
        ui->table_solve->setItem(count,3,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
    }
    if (fx == 0.0) {
        string is = "Raiz con F(x) = 0 encontrada en ";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(x,'f',DECIMALS)));
        is = "con una tolerancia de ";
        ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
        return 0.0;
    }
    else if (error < tol) {
        string is = "Raiz aproximada a ";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(x,'f',DECIMALS)));
        is = "con una tolerancia de ";
        ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
        return 0.0;
    }else if (fder == 0.0) {
        string is = "La derivada de f'(x) = 0 posilemente tenga raizes multiples";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
        return 0.0;
    }else {
        string is = "El metodo fallo en niteraciones ";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(niter)));
        return 0.0;
    }
    string is = "Algun valor fue mal ingresado ";
    ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
    return 0.0;

}


void Newton::on_bt_funcion_clicked()
{
    funcion = QInputDialog::getText(this,"Entrada", "Funcion de la forma descrita").toStdString();
    x = QInputDialog::getDouble(this,"Entrada", "Valor de X inicial");
    gfuncion = QInputDialog::getText(this,"Entrada", "Funcion G como la derivada de la funcion original, en el formato descrito").toStdString();
    do{
    niter = QInputDialog::getInt(this,"Entrada", " Numero maximo de iteraciones mayor a 0 y como entero");
    } while (niter <= 0);
    ui->table_solve->setRowCount(niter);
    ui->table_solve->setColumnCount(4);
    QStringList titulos;
    titulos << "X" << "F(x)" << "F'(x)" << "Error";
    ui->table_solve->setHorizontalHeaderLabels(titulos);
    eType = "abs";
    ui->table_resoult->setRowCount(4);
    ui->table_resoult->setColumnCount(1);
    ui->table_resoult->setColumnWidth(0,4);
}

void Newton::on_bt_solve_clicked()
{
    tol = ui->lineEdit->text().toDouble();
    solve();
}

void Newton::on_pushButton_2_clicked()
{
    eType = "otro";
}

void Newton::on_pushButton_clicked()
{
    eType = "abs";
}

