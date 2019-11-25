#ifndef RAIZES_MULTIPLES_H
#define RAIZES_MULTIPLES_H

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
class Raizes_Multiples;
}

class Raizes_Multiples : public QWidget
{
    Q_OBJECT

public:
    double analizador(string f, double _X);
    string funcion,fprima, fprimaprima;
    double x;
    int niter;
    double tol;
    char* eType;
    double solve();
    double nextXn(double p);
    explicit Raizes_Multiples(QWidget *parent = nullptr);
    ~Raizes_Multiples();

private slots:
    void on_bt_funcion_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_bt_solve_clicked();

private:
    Ui::Raizes_Multiples *ui;
};

#endif // RAIZES_MULTIPLES_H
