#ifndef REGLA_FALSA_H
#define REGLA_FALSA_H

#include <QWidget>
#include <math.h>
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
class Regla_Falsa;
}

class Regla_Falsa : public QWidget
{
    Q_OBJECT

public:
    double analizador(string f, double _X);
    string funcion;
    double xi,xu;
    int niter;
    double tol;
    char* eType;
    double bisection();
    explicit Regla_Falsa(QWidget *parent = nullptr);
    ~Regla_Falsa();

private slots:
    void on_bt_solve_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_bt_funcion_clicked();

private:
    Ui::Regla_Falsa *ui;
};

#endif // REGLA_FALSA_H
