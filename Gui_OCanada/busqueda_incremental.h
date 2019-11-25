#ifndef BUSQUEDA_INCREMENTAL_H
#define BUSQUEDA_INCREMENTAL_H

#include <QWidget>
#include <analizador/analizer.h>
#include <QTableWidget>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QInputDialog>
#include <math.h>
#include <stdlib.h>
#include <string>


namespace Ui {
class Busqueda_Incremental;
}

class Busqueda_Incremental : public QWidget
{
    Q_OBJECT

public:
    double x ;
    string funcion;
    double delta;
    int niter;
    double analizador(string f , double _X);
    void ejecucion();
    explicit Busqueda_Incremental(QWidget *parent = nullptr);
    ~Busqueda_Incremental();

private slots:
    void on_bt_funcion_clicked();

    void on_bt_solve_clicked();

private:
    Ui::Busqueda_Incremental *ui;
};

#endif // BUSQUEDA_INCREMENTAL_H
