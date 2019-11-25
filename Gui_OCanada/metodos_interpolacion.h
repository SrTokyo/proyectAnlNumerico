#ifndef METODOS_INTERPOLACION_H
#define METODOS_INTERPOLACION_H

#include <QFrame>

namespace Ui {
class Metodos_Interpolacion;
}

class Metodos_Interpolacion : public QFrame
{
    Q_OBJECT

public:
    explicit Metodos_Interpolacion(QWidget *parent = nullptr);
    ~Metodos_Interpolacion();

private slots:
    void on_newton_Dif_clicked();

    void on_lagrange_clicked();

    void on_sp_Lineal_clicked();

    void on_sp_Cuadratico_clicked();

    void on_sp_Cubico_clicked();

    void on_back_clicked();

private:
    Ui::Metodos_Interpolacion *ui;
};

#endif // METODOS_INTERPOLACION_H
