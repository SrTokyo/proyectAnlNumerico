#ifndef SIMPLE_H
#define SIMPLE_H

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

namespace Ui {
class Simple;
}

class Simple : public QWidget
{
    Q_OBJECT

public:
    explicit Simple(QWidget *parent = nullptr);
    ~Simple();
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
    Ui::Simple *ui;
};

#endif // SIMPLE_H
