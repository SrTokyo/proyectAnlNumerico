#ifndef METODOS_ITERATIVOS_H
#define METODOS_ITERATIVOS_H

#include <QFrame>

namespace Ui {
class Metodos_Iterativos;
}

class Metodos_Iterativos : public QFrame
{
    Q_OBJECT

public:
    explicit Metodos_Iterativos(QWidget *parent = nullptr);
    ~Metodos_Iterativos();

private slots:
    void on_jacobi_clicked();

    void on_seidel_clicked();

    void on_back_clicked();

private:
    Ui::Metodos_Iterativos *ui;
};

#endif // METODOS_ITERATIVOS_H
