#include "seidel.h"
#include "ui_seidel.h"

Seidel::Seidel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Seidel)
{
    ui->setupUi(this);
}

Seidel::~Seidel()
{
    delete ui;
}
    void Seidel::init(int m)
    {   ui->tabla_A->setColumnCount(m);
        ui->tabla_A->setRowCount(m);
        ui->tabla_b->setColumnCount(1);
        ui->tabla_b->setRowCount(m);
        ui->tabla_X->setColumnCount(1);
        ui->tabla_X->setRowCount(m);
        ui->tabla_solve->setColumnCount(m*10);
        ui->tabla_solve->setRowCount(m*10);
        ui->table_resoult->setColumnCount(m);
        ui->table_resoult->setRowCount(5);
        n = m;
        matriz = new double* [n];
        for (int i = 0; i < n; i++)
            matriz[i] = new double[n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) // creamos la matriz identidad
                if (i == j)
                    matriz[i][j] = 1;
                else
                    matriz[i][j] = 0;
        vectorB = new double[n];
        for (int i = 0; i < n; i++) // vector b de unos
            vectorB[i] = 1;
        vectorX0 = new double[n];
        for (int i = 0; i < n; i++) // vector vectorX0 de unos
            vectorX0[i] = 1;
        vez = 1;
        etapa_counter = 1;
    }
    void Seidel::imp_etapa(){
            etapa_counter++;
            ui->tabla_solve->setItem(0,0,new QTableWidgetItem(QString::fromStdString("Solucion")));

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++){
                     ui->tabla_solve->setItem((i+(etapa_counter)+ (vez*n)),j,new QTableWidgetItem(QString::number(matriz[i][j],'f',DECIMALS)));
                }
            }
            for (int j = 0; j < n; j++){
                ui->tabla_solve->setItem(j+(etapa_counter)+ (vez*n),n+2,new QTableWidgetItem(QString::number(vectorB[j],'f',DECIMALS)));
            }
            vez++;
        }
    void Seidel::ingrese_matriz()
        {   for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                   matriz[i][j] = ui->tabla_A->item(i,j)->text().toDouble();

            for (int i = 0; i < n; i++)
                vectorB[i] = ui->tabla_b->item(i,0)->text().toDouble();

            for (int i = 0; i < n; i++)
                vectorX0[i] = ui->tabla_X->item(i,0)->text().toDouble();
        }

double Seidel::norma(double* vectorX, double* vectorX0){
    double mayor = 0;
    for (int i = 0; i < n; i++) {
        if( (vectorX[i]-vectorX0[i])>mayor ){
            mayor = vectorX[i]-vectorX0[i];
        }
    }
    double max = 0;
    for (int i = 0; i < (n-1); i++) {
        if( vectorX[i]>vectorX[i+1] ){
            max = vectorX[i];
        }else{
            max = vectorX[i+1];
        }
    }
    mayor = mayor/max;
    return mayor;
}
void Seidel::gaussSeidel(){
    int contador = 1;
    double error = tol +1;
    vectorX = new double[n];
    while( error > tol && contador < iter){
        error = 0;
        for(int i = 1;i<n+1;i++){
            vectorX[i-1] = vectorX0[i-1];
        }
        for(int i=1;i<n+1;i++){
            double suma = 0;
            for(int j=1;j<n+1;j++){
                if(i!=j){
                    suma = suma + matriz[i-1][j-1]*vectorX[j-1];
                }
            }
            vectorX[i-1] = (vectorB[i-1]-suma)/matriz[i-1][i-1];
        }
        error = norma(vectorX, vectorX0);
        for(int i = 1;i<n+1;i++){
            vectorX0[i-1] = vectorX[i-1];
        }
        contador = contador+1;
    }
    if(error<tol){
        ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString("Vector X")));
        for(int i = 0; i <n; i++){
            ui->table_resoult->setItem(1,i,new QTableWidgetItem(QString::number(vectorX[i],'f',DECIMALS)));
        }
        ui->table_resoult->setItem(2,0,new QTableWidgetItem(QString::fromStdString("es una aproximacion con una tolerancia de ")));
        ui->table_resoult->setItem(3,0,new QTableWidgetItem(QString::number(error,'f',DECIMALS)));
    }else{
       ui->table_resoult->setItem(0,0,new QTableWidgetItem(QString::fromStdString("Metodo fallo en niteraciones")));
       ui->table_resoult->setItem(1,0,new QTableWidgetItem(QString::number(iter)));
    }

}

void Seidel::on_bt_funcion_clicked()
{
    ingrese_matriz();
}

void Seidel::on_bt_solve_clicked()
{
    iter = ui->lineEdit_2->text().toInt();
    tol = ui->lineEdit->text().toDouble();
    gaussSeidel();
    imp_etapa();
}
