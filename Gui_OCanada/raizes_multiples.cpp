#include "raizes_multiples.h"
#include "ui_raizes_multiples.h"

Raizes_Multiples::Raizes_Multiples(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Raizes_Multiples)
{
    ui->setupUi(this);
}

Raizes_Multiples::~Raizes_Multiples()
{
    delete ui;
}
double Raizes_Multiples::analizador(string f, double _X) {
    double resultado = analizar(f,_X);
    return resultado;
}
double Raizes_Multiples::nextXn(double p) {
    return x-(analizador(funcion,p)*analizador(fprima,p))/(pow(analizador(fprima,p),2)-analizador(funcion,p)*analizador(fprimaprima,p));
}

double Raizes_Multiples::solve() {
    double fx = analizador(funcion,x);
    int count = 0;
    double error = tol + 1;
    double xn;
    double fder1 = analizador(fprima,x);
    double fder2 = analizador(fprimaprima,x);
    double den = pow(analizador(fprima,x),2)-analizador(funcion,x)*analizador(fprimaprima,x);
        ui->table_solve->setItem(count,0,new QTableWidgetItem(QString::number(x,'f',DECIMALS)));
        ui->table_solve->setItem(count,1,new QTableWidgetItem(QString::number(fx,'f',DECIMALS)));
        ui->table_solve->setItem(count,3,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
        while (fx != 0.0 && error > tol && den != 0.0  && count < niter) {
            xn = nextXn(x);
            fx = analizador(funcion,xn);
            fder1 = analizador(fprima,xn);
            fder2 = analizador (fprimaprima,xn);
            den = pow(analizador(fprima,xn),2)-analizador(funcion,xn)*analizador(fprimaprima,xn);
            error = ((strcmp(eType, "absoluto") == 0) ? fabs(xn - x) : fabs((xn - x) / xn));
            x = xn;
            count++;
            ui->table_solve->setItem(count,0,new QTableWidgetItem(QString::number(x,'f',DECIMALS)));
            ui->table_solve->setItem(count,1,new QTableWidgetItem(QString::number(fx,'f',DECIMALS)));
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
        }else if (den == 0.0) {
            string is = "Una de las derivadas de la funcion es 0, probablemente tenga raices multiple aproximada a";
            ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(x,'f',DECIMALS)));
            is = "con una tolerancia de ";
            ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
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


void Raizes_Multiples::on_bt_funcion_clicked()
{
    funcion = QInputDialog::getText(this,"Entrada", "Funcion de la forma descrita").toStdString();
    fprima = QInputDialog::getText(this,"Entrada", "Funcion derivada de la anterios, en el formato descrito").toStdString();
    fprimaprima = QInputDialog::getText(this,"Entrada", "Segunda derivada de la funcion original, en el formato descrito").toStdString();
    x = QInputDialog::getDouble(this,"Entrada", "Valor de X inicial");
    do{
    niter = QInputDialog::getInt(this,"Entrada", " Numero maximo de iteraciones mayor a 0 y como entero");
    } while (niter <= 0);
    ui->table_solve->setRowCount(niter);
    ui->table_solve->setColumnCount(5);
    QStringList titulos;
    titulos << "X" << "F(x)" << "F'(Xn)" << "F''(Xn)" << "Error";
    ui->table_solve->setHorizontalHeaderLabels(titulos);
    eType = "abs";
    ui->table_resoult->setRowCount(4);
    ui->table_resoult->setColumnCount(1);
    ui->table_resoult->setColumnWidth(0,4);
}

void Raizes_Multiples::on_bt_solve_clicked()
{
    tol = ui->lineEdit->text().toDouble();
    solve();
}

void Raizes_Multiples::on_pushButton_2_clicked()
{
    eType = "otro";
}

void Raizes_Multiples::on_pushButton_clicked()
{
    eType = "abs";
}
