#ifndef PIVOTE_PARCIAL_H
#define PIVOTE_PARCIAL_H

#include <QWidget>
#include <cstring>
#include <QTableWidget>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QInputDialog>
#include <math.h>
#include <stdlib.h>
#include <string>
#define DECIMALS 13

namespace Ui {
class Pivote_Parcial;
}

class Pivote_Parcial : public QWidget
{
    Q_OBJECT

public:
    explicit Pivote_Parcial(QWidget *parent = nullptr);
    ~Pivote_Parcial();
    int n;
    double** matriz;
    double* vectorB;
    double* solvX;
    double* mult;
    double** mAum;
    void escribir_solucion();
    void resolver_sistema();
    void extraer_matriz();
    void init(int m);
    void solve();
    void imp_etapa();
    int etapa_counter;
    int vez;

private slots:
    void on_bt_setAb_clicked();

    void on_solve_clicked();

private:
    Ui::Pivote_Parcial *ui;
};

#endif // PIVOTE_PARCIAL_H
