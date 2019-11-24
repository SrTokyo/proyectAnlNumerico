#ifndef BUSQUEDA_INCREMENTAL_H
#define BUSQUEDA_INCREMENTAL_H

#include <QFrame>

namespace Ui {
class Busqueda_Incremental;
}

class Busqueda_Incremental : public QFrame
{
    Q_OBJECT

public:
    explicit Busqueda_Incremental(QWidget *parent = nullptr);
    ~Busqueda_Incremental();

private slots:

    void on_back_clicked();

public:
    Ui::Busqueda_Incremental *ui;
};

#endif // BUSQUEDA_INCREMENTAL_H
