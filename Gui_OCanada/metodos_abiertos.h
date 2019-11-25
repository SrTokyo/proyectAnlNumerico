#ifndef METODOS_ABIERTOS_H
#define METODOS_ABIERTOS_H

#include <QFrame>

namespace Ui {
class Metodos_Abiertos;
}

class Metodos_Abiertos : public QFrame
{
    Q_OBJECT

public:
    explicit Metodos_Abiertos(QWidget *parent = nullptr);
    ~Metodos_Abiertos();

private slots:
    void on_mult_Raizes_clicked();

    void on_newton_clicked();

    void on_punto_Fijo_clicked();

    void on_secante_clicked();

    void on_back_clicked();

private:
    Ui::Metodos_Abiertos *ui;
};

#endif // METODOS_ABIERTOS_H
