#ifndef BISECCION_H
#define BISECCION_H

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

using namespace std;

namespace Ui {
class Biseccion;
}

class Biseccion : public QWidget
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
    explicit Biseccion(QWidget *parent = nullptr);
    ~Biseccion();

private slots:
    void on_bt_funcion_clicked();

    void on_bt_solve_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Biseccion *ui;
};

#endif // BISECCION_H
