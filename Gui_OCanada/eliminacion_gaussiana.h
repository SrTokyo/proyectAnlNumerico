#ifndef ELIMINACION_GAUSSIANA_H
#define ELIMINACION_GAUSSIANA_H

#include <QFrame>
#include <QInputDialog>
#include "simple.h"
#include "pivote_parcial.h"

namespace Ui {
class Eliminacion_Gaussiana;
}

class Eliminacion_Gaussiana : public QFrame
{
    Q_OBJECT

public:
    explicit Eliminacion_Gaussiana(QWidget *parent = nullptr);
    ~Eliminacion_Gaussiana();

private slots:
    void on_back_clicked();

    void on_p_total_clicked();

    void on_p_parcial_clicked();

    void on_simple_clicked();

private:
    Ui::Eliminacion_Gaussiana *ui;
};

#endif // ELIMINACION_GAUSSIANA_H
