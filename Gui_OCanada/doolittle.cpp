#include "doolittle.h"
#include "ui_doolittle.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <QGraphicsItem>
#include <QLabel>
#include <QTextEdit>
#include <QLayoutItem>
#include <QLayout>
#include <QGraphicsGridLayout>
#include <QGridLayout>
#include <QScrollBar>
#include <QLineEdit>

Doolittle::Doolittle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Doolittle)
{
    ui->setupUi(this);
}

Doolittle::~Doolittle()
{
    delete ui;
}

void Doolittle::init(int m)
    {
        vecQ = new QLineEdit* [n];
        ui->label->setText("Ingrese A");
        for (int i = 0; i < n; i++){
            vecQ[i] = new QLineEdit [n];
            for (int j = 0; j < n; j++){
                }
        }
        ui->gridLayoutWidget->repaint();
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
void Doolittle::ingrese_matriz()
    {   int k = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> matrizA[i][j];
        cout << "Ingrese el vector b :" << endl;
        for (int i = 0; i < n; i++)
            cin >> vectorB[i];
    }
void Doolittle::imp_Axb()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "|\t";
            for (int j = 0; j < n; j++)
                cout << matrizA[i][j] << "\t";
            cout << "|\t|\tx" << i + 1 << "\t|\t" << "|\t" << vectorB[i] << "\t|" << endl;
        }
    }
void Doolittle::imp_mAum() {
        for (int i = 0; i < n; i++)
        {
            cout << "|\t";
            for (int j = 0; j < n; j++)
                cout << mAum[i][j] << "\t | \t";
            cout << endl;
        }
    }
void Doolittle::resolver_LU()
    {
        for (int k = 0; k < n; k++)
        {
            matrizL[k][k] = 1;
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
            cout << endl << endl;
            cout << "\t Etapa " << k + 1 << endl;
            cout << endl << endl;
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
            cout << "Determinante 0, infinitas soluciones" << endl;
        }

    }
void Doolittle::definir_LU_total()
    {
        double z, w;
        if (matrizA[0][0] == 0) { //AQUI verifica si el primer elemento de la matriz es distinto
        //de cero si lo es cambia la fila por otra
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
                double maxElement = 0;
                for (int i = cont; i < n; i++) {
                    for (int j = cont; j < n; j++) {
                        if (matrizA[i][j] > maxElement) {
                            maxElement = matrizA[i][j];

                        }
                    }
                }
                matrizA[cont][cont] = maxElement;

                for (int i = 0; i < n; i++)
                {
                    if (i > cont) {
                        double m = matrizA[i][cont] / matrizA[cont][cont];
                        vectorB[i] = vectorB[i] - (m * vectorB[cont]);
                        for (int j = 0; j < n; j++)
                        {
                            matrizL[i][j] = m;
                            if (matrizA[i][j] != 0)
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
                matrizL[i][i] = 1;
            }
        }
    }
void Doolittle::gen_matrizAumentada() {
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
void Doolittle::definir_LU_simple()
    {
        double z, w;
        if (matrizA[0][0] == 0) { //AQUI verifica si el primer elemento de la matriz es distinto
        //de cero si lo es cambia la fila por otra
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
                            if (matrizA[i][j] != 0)
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
                matrizL[i][i] = 1;
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
            for (int j = 0; j < n; j++)
            {
                matrizU[i][j] = matrizA[i][j];
            }
        }
    }
void Doolittle::escribir_solucion()
    {
        cout << endl << endl;
        for (int i = 0; i < n; i++)
            cout << "x" << i + 1 << " = " << vectorX[i] << endl;
    }
void Doolittle::imp_etapaLU() {
        cout << "\t L = " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "|\t";
            for (int j = 0; j < n; j++)
                cout << matrizL[i][j] << "\t\t\t | \t";
            cout << endl;
        }
        cout << "\t U = " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "|\t";
            for (int j = 0; j < n; j++)
                cout << matrizU[i][j] << "\t\t\t | \t";
            cout << endl;
        }

    }
void Doolittle::generar_U() {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrizU[i][j] = matrizA[i][j];
            }
        }
    }
void Doolittle::ejecucion()
    {
        this->ingrese_matriz();
        this->gen_matrizAumentada();
        this->imp_mAum();
        this->definir_LU_simple();
        this->generar_U();
        this->imp_etapaLU();
        this->resolver_LU();
        this->escribir_solucion();
    }

