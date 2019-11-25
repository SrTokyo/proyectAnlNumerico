#include "punto_fijo.h"
#include "ui_punto_fijo.h"

Punto_Fijo::Punto_Fijo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Punto_Fijo)
{
    ui->setupUi(this);
}

Punto_Fijo::~Punto_Fijo()
{
    delete ui;
}

double Punto_Fijo::analizador(string f, double _X) {
    double resultado = analizar(f,_X);
    return resultado;
}

double Punto_Fijo::solve() {
    double fx = analizador(funcion,x);
    int count = 0;
    double error = tol + 1;
    double xn = 0;
    printf("Metodo Punto Fijo\n");
    printf("%20s | %20s | %20s | %20s |\n", "n", "Xn_G(x)", "f(Xn)", "Error");
    ui->table_solve->setItem(count,0,new QTableWidgetItem(QString::number(x)));
    ui->table_solve->setItem(count,1,new QTableWidgetItem(QString::number(fx)));
    ui->table_solve->setItem(count,2,new QTableWidgetItem(QString::number(error)));
    while (fx != 0.0 && error > tol && count < niter) {
        xn = analizador(gfuncion,x);
        fx = analizador(funcion,xn);
        error = ((strcmp(eType, "abs") == 0) ? fabs(xn - x) : fabs((xn - x) / xn));
        x = xn;
        count++;
        ui->table_solve->setItem(count,0,new QTableWidgetItem(QString::number(x)));
        ui->table_solve->setItem(count,1,new QTableWidgetItem(QString::number(fx)));
        ui->table_solve->setItem(count,2,new QTableWidgetItem(QString::number(error)));
    }
    if (fx == 0.0) {
        string is = "Raiz con F(x) = 0 encontrada en ";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(x)));
        is = "con una tolerancia de ";
        ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error)));
        return 0.0;
    }
    else if (error < tol) {
        string is = "Raiz aproximada a ";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(x)));
        is = "con una tolerancia de ";
        ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error)));
        return 0.0;
    }
    else {
        string is = "El metodo fallo en niteraciones ";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(niter)));
        return 0.0;
    }
    string is = "Algun valor fue mal ingresado ";
    ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
    return 0.0;

}


void Punto_Fijo::on_bt_funcion_clicked()
{
    funcion = QInputDialog::getText(this,"Entrada", "Funcion de la forma descrita").toStdString();
    x = QInputDialog::getDouble(this,"Entrada", "Valor de X inicial");
    gfuncion = QInputDialog::getText(this,"Entrada", "Funcion G de la forma descrita").toStdString();
    do{
    niter = QInputDialog::getInt(this,"Entrada", " Numero maximo de iteraciones mayor a 0 y como entero");
    } while (niter <= 0);
    ui->table_solve->setRowCount(niter);
    ui->table_solve->setColumnCount(3);
    QStringList titulos;
    titulos << "X" << "F(x)" << "Error";
    ui->table_solve->setHorizontalHeaderLabels(titulos);
    eType = "abs";
    ui->table_resoult->setRowCount(4);
    ui->table_resoult->setColumnCount(1);
    ui->table_resoult->setColumnWidth(0,4);
}

void Punto_Fijo::on_bt_solve_clicked()
{
    tol = ui->lineEdit->text().toDouble();
    solve();
}

void Punto_Fijo::on_pushButton_2_clicked()
{
    eType = "otro";
}

void Punto_Fijo::on_pushButton_clicked()
{
    eType = "abs";
}









