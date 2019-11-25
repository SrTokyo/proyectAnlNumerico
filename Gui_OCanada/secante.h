#ifndef SECANTE_H
#define SECANTE_H

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
class Secante;
}

class Secante : public QWidget
{
    Q_OBJECT

public:
    double analizador(string f, double _X);
    string funcion;
    double x,x1;
    int niter;
    double tol;
    char* eType;
    double solve();
    explicit Secante(QWidget *parent = nullptr);
    ~Secante();
private slots:
    void on_bt_funcion_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_bt_solve_clicked();

private:
    Ui::Secante *ui;
};

#endif // SECANTE_H
