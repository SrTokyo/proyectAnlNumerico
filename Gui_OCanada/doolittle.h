#ifndef DOOLITTLE_H
#define DOOLITTLE_H

#include <QWidget>
#include <iostream>
#include <stdlib.h>
#include <QLineEdit>
using namespace std;
namespace Ui {
class Doolittle;
}

class Doolittle : public QWidget
{
    Q_OBJECT

public:
    explicit Doolittle(QWidget *parent = nullptr);
    ~Doolittle();
    void imp_Axb();
    void ingrese_matriz();
    void definir_LU_simple();
    void escribir_solucion();
    void generar_U();
    void gen_matrizAumentada();
    void imp_mAum();
    void resolver_LU();
    void definir_LU_total();
    void imp_etapaLU();
    void ejecucion();
    void init(int m);

private:
    Ui::Doolittle *ui;
    int n;
    double** matrizA;
    double* vectorB;
    double* vectorZ;
    double* vectorX;
    double** matrizL;
    double** matrizU;
    double detL;
    double detU;
    double** mAum;
    QLineEdit** vecQ;



};

#endif // DOOLITTLE_H
