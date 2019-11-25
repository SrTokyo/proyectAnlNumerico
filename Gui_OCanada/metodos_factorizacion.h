#ifndef METODOS_FACTORIZACION_H
#define METODOS_FACTORIZACION_H

#include <QFrame>
#include "menu_cholesky.h"
#include "doolittle.h"
#include "menu_crout.h"
#include <QInputDialog>

namespace Ui {
class Metodos_Factorizacion;
}

class Metodos_Factorizacion : public QFrame
{
    Q_OBJECT

public:
    explicit Metodos_Factorizacion(QWidget *parent = nullptr);
    ~Metodos_Factorizacion();

private slots:
    void on_crout_clicked();

    void on_doolittle_clicked();

    void on_cholesky_clicked();

    void on_back_clicked();

private:
    Ui::Metodos_Factorizacion *ui;
};

#endif // METODOS_FACTORIZACION_H
