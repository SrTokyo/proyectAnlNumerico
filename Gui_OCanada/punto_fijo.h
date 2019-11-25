#ifndef PUNTO_FIJO_H
#define PUNTO_FIJO_H

#include <QWidget>
#include <cmath>
#include <cstring>
#include <QTableWidget>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QInputDialog>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <analizador/analizer.h>
#define DECIMALS 13

namespace Ui {
class Punto_Fijo;
}

class Punto_Fijo : public QWidget
{
    Q_OBJECT

public:
    double analizador(string f, double _X);
    string funcion , gfuncion;
    double x;
    int niter;
    double tol;
    char* eType;
    double solve();
    explicit Punto_Fijo(QWidget *parent = nullptr);
    ~Punto_Fijo();

private slots:
    void on_bt_funcion_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_bt_solve_clicked();

private:
    Ui::Punto_Fijo *ui;
};

#endif // PUNTO_FIJO_H
