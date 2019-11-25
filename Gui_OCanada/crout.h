#ifndef CROUT_H
#define CROUT_H

#include <QWidget>
#include <math.h>
#include <QLabel>
#include <QLineEdit>
#include <QTableWidget>
#include <math.h>
#include <stdlib.h>
#include <string>
#define DECIMALS 13

namespace Ui {
class Crout;
}

class Crout : public QWidget
{
    Q_OBJECT

public:
    explicit Crout(QWidget *parent = nullptr);
    ~Crout();
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

private slots:
    void on_bt_setAb_clicked();

    void on_solve_clicked();

private:
    Ui::Crout *ui;
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
    int etapaConter;
    int vez;
};

#endif // CROUT_H
