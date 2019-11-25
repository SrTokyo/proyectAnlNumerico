#include "simple.h"
#include "ui_simple.h"

Simple::Simple(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Simple)
{
    ui->setupUi(this);
}

Simple::~Simple()
{
    delete ui;
}
void Simple:: init(int m){
    n = m;
    ui->tabla_A->setRowCount(n);
    ui->tabla_A->setColumnCount(n);
    ui->tabla_b->setRowCount(n);
    ui->tabla_b->setColumnCount(1);
    ui->tabla_solve->setColumnCount(n+10);
    ui->tabla_solve->setRowCount(n*10);
    ui->table_resolut->setColumnCount(1);
    ui->table_resolut->setRowCount(10);

    matriz = new double* [n];
    for (int i = 0; i < n; i++)
        matriz[i] = new double[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
    vectorB = new double[n];
    for (int i = 0; i < n; i++)
        vectorB[i] = 1;
    solvX = new double[n];
    mult = new double[n];
    mAum = new double* [n];
    for (int i = 0; i < n; i++)
        mAum[i] = new double[n + 1];
    etapa_counter = 0;
    vez = 0;
}
void Simple::on_bt_setAb_clicked()
{
          for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                   matriz[i][j] = ui->tabla_A->item(i,j)->text().toDouble();

          for (int i = 0; i < n; i++)
                vectorB[i] = ui->tabla_b->item(i,0)->text().toDouble();
}
void Simple:: solve(){
    imp_etapa();
    double z, w;
        if (matriz[0][0] == 0.0) {
            for (int i = 1; i < n; i++)
            {
                w = vectorB[i];
                vectorB[i] = vectorB[0];
                vectorB[0] = w;
                if (matriz[i][0] != 0.0)
                {
                    for (int j = 0; j <= n; j++)
                    {
                        z = matriz[i][j];
                        matriz[i][j] = matriz[0][j];
                        matriz[0][j] = z;
                    }
                }
            }
        }
        else {
            int cont = 0;
            while (cont <= n-2)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i > cont) {
                        double m = matriz[i][cont] / matriz[cont][cont];
                        vectorB[i] = vectorB[i] - (m * vectorB[cont]);
                        for (int j = 0; j < n; j++)
                        {
                            if (matriz[i][j] != 0.0)
                            {
                                matriz[i][j] = matriz[i][j] - (m * matriz[cont][j]);
                            }
                        }
                    }
                }
                imp_etapa();
                cont++;
            }
        }
}
void Simple::escribir_solucion()
{
    for (int i = 0; i < n; i++){
        ui->table_resolut->setItem(i,0,new QTableWidgetItem(QString::number(solvX[i],'f',DECIMALS)));
    }
}
void Simple::extraer_matriz() {

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mAum[i][j] = matriz[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        mAum[i][n] = vectorB[i];
    }
}
void Simple::imp_etapa(){
        etapa_counter++;
        ui->tabla_solve->setItem((vez*n)+vez,0,new QTableWidgetItem(QString::fromStdString("Etapa")));
        ui->tabla_solve->setItem((vez*n)+vez,1,new QTableWidgetItem(QString::number(etapa_counter)));
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
void Simple::resolver_sistema()
{
    int i;
    for ( i = n - 1; i >= 0; i--) {
        double sumatoria = 0;
        for (int p = i + 1; p < n; p++)
        {
            sumatoria = sumatoria + (mAum[i][p] * solvX[p]);
        }
        solvX[i] = (mAum[i][n] - sumatoria )/mAum[i][i];
    }
}
void Simple::on_solve_clicked()
{
    solve();
    extraer_matriz();
    resolver_sistema();
    escribir_solucion();
}
