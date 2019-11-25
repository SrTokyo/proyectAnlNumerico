#include "secante.h"
#include "ui_secante.h"

Secante::Secante(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Secante)
{
    ui->setupUi(this);
}

Secante::~Secante()
{
    delete ui;
}

double Secante::analizador(string f, double _X) {
    double resultado = analizar(f,_X);
    return resultado;
}

double Secante::solve() {
    double fx0;
    double x2, x2_denominator;
    fx0 = analizador(funcion,x);
    if (fx0 == 0.0) {
        string is = "Raiz en x0 ";
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
        ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(x,'f',DECIMALS)));
    }
    else {
        double fx1;
        fx1 = analizador(funcion,x1);
        int count = 0;
        double error = tol + 1;
        x2_denominator = fx1 - fx0;
        ui->table_solve->setItem(count,0,new QTableWidgetItem(QString::number(x1,'f',DECIMALS)));
        ui->table_solve->setItem(count,1,new QTableWidgetItem(QString::number(fx1,'f',DECIMALS)));
        ui->table_solve->setItem(count,3,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
        while (fx1 != 0.0 && error > tol && x2_denominator != 0.0  && count < niter) {
            x2 = x1 - (fx1 * (x1 - x) / x2_denominator);
            error = ((strcmp(eType, "abs") == 0) ? fabs(x2 - x1) : fabs((x2 - x1) / x2));
            x = x1;
            fx0 = fx1;
            x1 = x2;
            fx1 = analizador(funcion,x1);
            x2_denominator = fx1 - fx0;
            count++;
            ui->table_solve->setItem(count,0,new QTableWidgetItem(QString::number(x1,'f',DECIMALS)));
            ui->table_solve->setItem(count,1,new QTableWidgetItem(QString::number(fx1,'f',DECIMALS)));
            ui->table_solve->setItem(count,3,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
        }
        if (fx1 == 0.0) {
            string is = "Raiz con F(x) = 0 encontrada en ";
            ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(x1,'f',DECIMALS)));
            is = "con una tolerancia de ";
            ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
            return 0.0;
        }
        else if (error < tol) {
            string is = "Raiz aproximada a ";
            ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(x1,'f',DECIMALS)));
            is = "con una tolerancia de ";
            ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
            return 0.0;
        }else if (x2_denominator == 0.0) {
            string is = "La derivada de denominados de funcion g = 0 posilemente tenga raizes multiples";
            ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
            return 0.0;
        }else {
            string is = "El metodo fallo en niteraciones ";
            ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
            ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(niter)));
            return 0.0;
        }

    }
    string is = "Algun valor fue mal ingresado ";
    ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString(is)));
    return 0.0;

}


void Secante::on_bt_funcion_clicked()
{
    funcion = QInputDialog::getText(this,"Entrada", "Funcion de la forma descrita").toStdString();
    x = QInputDialog::getDouble(this,"Entrada", "Valor de X inicial x0");
    x1 = QInputDialog::getDouble(this,"Entrada", "Valor de X siguiente x1");
    do{
    niter = QInputDialog::getInt(this,"Entrada", " Numero maximo de iteraciones mayor a 0 y como entero");
    } while (niter <= 0);
    ui->table_solve->setRowCount(niter);
    ui->table_solve->setColumnCount(3);
    QStringList titulos;
    titulos << "X1" << "F(x1)" << "Error";
    ui->table_solve->setHorizontalHeaderLabels(titulos);
    eType = "abs";
    ui->table_resoult->setRowCount(4);
    ui->table_resoult->setColumnCount(1);
    ui->table_resoult->setColumnWidth(0,4);
}

void Secante::on_bt_solve_clicked()
{
    tol = ui->lineEdit->text().toDouble();
    solve();
}

void Secante::on_pushButton_2_clicked()
{
    eType = "otro";
}

void Secante::on_pushButton_clicked()
{
    eType = "abs";
}
