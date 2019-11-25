#ifndef METODOS_ABIERTOS_H
#define METODOS_ABIERTOS_H

#include <QWidget>
#include <punto_fijo.h>
#include <newton.h>
#include <secante.h>
#include <raizes_multiples.h>

namespace Ui {
class Metodos_Abiertos;
}

class Metodos_Abiertos : public QWidget
{
    Q_OBJECT

public:
    explicit Metodos_Abiertos(QWidget *parent = nullptr);
    ~Metodos_Abiertos();

private slots:
    void on_punto_Fijo_clicked();

    void on_newton_clicked();

    void on_secante_clicked();

    void on_mult_Raizes_clicked();

private:
    Ui::Metodos_Abiertos *ui;
};

#endif // METODOS_ABIERTOS_H
