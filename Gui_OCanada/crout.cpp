#include "crout.h"
#include "ui_crout.h"

Crout::Crout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Crout)
{
    ui->setupUi(this);
}

Crout::~Crout()
{
    delete ui;
}

void Crout::init(int m)
    {
    etapaConter= 0;
    vez = 0;
        ui->tabla_A->setRowCount(m);
        ui->tabla_A->setColumnCount(m);
        ui->tabla_b->setColumnCount(1);
        ui->tabla_b->setRowCount(m);
        ui->tabla_solve->setColumnCount(m*10);
        ui->tabla_solve->setRowCount(m*10);
        ui->table_resolut->setColumnCount(1);
        ui->table_resolut->setRowCount(10);
        n = m;
        matrizA = new double* [n];
        for (int i = 0; i < n; i++)
            matrizA[i] = new double[n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) // creamos la matriz identidad
                if (i == j)
                    matrizA[i][j] = 1;
                else
                    matrizA[i][j] = 0;
        vectorB = new double[n];
        vectorZ = new double[n];
        vectorX = new double[n];
        for (int i = 0; i < n; i++) // vector b de unos
            vectorB[i] = 1;
        matrizU = new double* [n];
        for (int i = 0; i < n; i++)
            matrizU[i] = new double[n + 1];
        matrizL = new double* [n];
        for (int i = 0; i < n; i++)
            matrizL[i] = new double[n + 1];
        detL = 1;
        detU = 1;
        mAum = new double* [n];
        for (int i = 0; i < n; i++)
            mAum[i] = new double[n + 1];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) // creamos la matriz identidad
                if (i == j)
                    mAum[i][j] = 1;
                else
                    mAum[i][j] = 0;
    }
void Crout::ingrese_matriz()
    {   for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
               matrizA[i][j] = ui->tabla_A->item(i,j)->text().toDouble();

        for (int i = 0; i < n; i++)
            vectorB[i] = ui->tabla_b->item(i,0)->text().toDouble();
    }
void Crout::resolver_LU()
    {for (int k = 0; k < n; k++)
    {
        matrizU[k][k] = 1;
        double sum = 0;
        for (int p = 1; p < k - 1; p++)
        {
            sum = sum + matrizL[k][p] * matrizU[p][k];
        }
        matrizU[k][k] = (matrizA[k][k] - sum);
        for (int i = k + 1; i < n; i++)
        {
            sum = 0;
            for (int r = 0; r < k - 1; r++)
            {
                sum = sum + matrizL[i][r] * matrizU[r][k];
            }
            matrizL[i][k] = (matrizA[i][k] - sum) / matrizU[k][k];
        }
        for (int j = k + 1; j < n; j++)
        {
            sum = 0;
            for (int s = 0; s < k - 1; s++)
            {
                sum = sum + matrizL[k][s] * matrizU[s][j];
            }
            matrizU[k][j] = matrizA[k][j] - sum;
        }
        imp_etapaLU();
    }

    for (int i = 0; i < n; i++)
    {
        detU = detU * matrizU[i][i];
    }

    double producto = detL * detU;

    if (producto != 0)
    {
        for (int i = 0; i < n; i++)
        {
            double sum = 0;
            for (int p = 0; p < i - 1; p++)
            {
                sum = sum + matrizL[i][p] * vectorZ[p];
            }
            vectorZ[i] = (vectorB[i] - sum) / matrizL[i][i];
        }
        for (int i = n - 1; i > -1; i--)
        {
            double sum = 0;
            for (int p = i + 1; p < n; p++)
            {
                sum = sum + matrizU[i][p] * vectorX[p];
            }
            vectorX[i] = (vectorZ[i] - sum) / matrizU[i][i];
        }
    }
    else
    {
         ui->tabla_solve->setItem(0,1,new QTableWidgetItem(QString::fromStdString("Determinante 0, infinitas soluciones")));
    }
}
void Crout::gen_matrizAumentada() {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mAum[i][j] = matrizA[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            mAum[i][n] = vectorB[i];
        }
    }
void Crout::definir_LU_simple()
    {
        double z, w;
        if (matrizA[0][0] == 0.0) {
            for (int i = 1; i < n; i++)
            {
                w = vectorB[i];
                vectorB[i] = vectorB[0];
                vectorB[0] = w;
                if (matrizA[i][0] != 0)
                {
                    for (int j = 0; j <= n; j++)
                    {
                        z = matrizA[i][j];
                        matrizA[i][j] = matrizA[0][j];
                        matrizA[0][j] = z;
                    }
                }
            }
        }
        else {
            int cont = 0;
            while (cont <= n - 2)
            {
                for (int i = 0; i < n; i++)
                {
                    matrizL[i][i] = 1;
                    if (i > cont) {
                        double m = matrizA[i][cont] / matrizA[cont][cont];
                        vectorB[i] = vectorB[i] - (m * vectorB[cont]);
                        for (int j = 0; j < n; j++)
                        {
                            matrizL[i][j] = m;
                            if (matrizA[i][j] != 0.0)
                            {
                                matrizA[i][j] = matrizA[i][j] - (m * matrizA[cont][j]);
                            }
                        }
                    }
                }
                cont++;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i < j) {
                        matrizL[i][j] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            matrizU[i][i] = 0;
            for (int j = 0; j < n; j++)
            {
                matrizU[i][j] = matrizA[i][j];
            }
        }
    }
void Crout::escribir_solucion()
    {
    for (int j = 0; j < n; j++)
         ui->table_resolut->setItem(j,0,new QTableWidgetItem(QString::number(vectorX[j],'f',DECIMALS)));
    }
void Crout::imp_etapaLU() {
    etapaConter++;
    ui->tabla_solve->setItem((vez*n)+vez,0,new QTableWidgetItem(QString::fromStdString("Etapa")));
     ui->tabla_solve->setItem((vez*n)+vez,1,new QTableWidgetItem(QString::number(etapaConter)));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                 ui->tabla_solve->setItem(i+(etapaConter)+ (vez*n),j,new QTableWidgetItem(QString::number(matrizL[i][j],'f',DECIMALS)));
        }

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
                ui->tabla_solve->setItem(i+(etapaConter)+ (vez*n),j+n+1,new QTableWidgetItem(QString::number(matrizU[i][j],'f',DECIMALS)));

        }
        vez++;

    }
void Crout::generar_U() {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrizU[i][j] = matrizA[i][j];
            }
        }
    }

void Crout::on_bt_setAb_clicked()
{
    ingrese_matriz();
}

void Crout::on_solve_clicked()
{
    gen_matrizAumentada();
    definir_LU_simple();
    generar_U();
    imp_etapaLU();
    resolver_LU();
    escribir_solucion();
}

