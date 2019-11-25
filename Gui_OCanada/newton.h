#ifndef NEWTON_H
#define NEWTON_H


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
class Newton;
}

class Newton : public QWidget
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
    double nextXn(double n);
    explicit Newton(QWidget *parent = nullptr);
    ~Newton();
private slots:
    void on_bt_funcion_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_bt_solve_clicked();

private:
    Ui::Newton *ui;
};

#endif // NEWTON_H
