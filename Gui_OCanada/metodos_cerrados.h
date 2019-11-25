#ifndef METODOS_CERRADOS_H
#define METODOS_CERRADOS_H

#include <QFrame>

namespace Ui {
class Metodos_Cerrados;
}

class Metodos_Cerrados : public QFrame
{
    Q_OBJECT

public:
    explicit Metodos_Cerrados(QWidget *parent = nullptr);
    ~Metodos_Cerrados();

private slots:

    void on_Biseccion_clicked();

    void on_regla_Falsa_clicked();

    void on_back_clicked();

private:
    Ui::Metodos_Cerrados *ui;
};

#endif // METODOS_CERRADOS_H
