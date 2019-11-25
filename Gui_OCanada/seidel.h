#ifndef SEIDEL_H
#define SEIDEL_H

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
class Seidel;
}

class Seidel : public QWidget
{
    Q_OBJECT

public:
    int n;
    int iter;
    double tol;
    double** matriz;
    double* vectorB;
    double* vectorX0;
    double* vectorX;
    int etapa_counter;
    int vez;
    explicit Seidel(QWidget *parent = nullptr);
    ~Seidel();
    void init(int m);
    void gaussSeidel();
    double norma(double*, double*);
    void imp_etapa();
    void ingrese_matriz();

private slots:
    void on_bt_funcion_clicked();

    void on_bt_solve_clicked();

private:
    Ui::Seidel *ui;
};

#endif // SEIDEL_H
