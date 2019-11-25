#ifndef PIVOTE_PARCIAL_H
#define PIVOTE_PARCIAL_H

#include <QWidget>

namespace Ui {
class Pivote_Parcial;
}

class Pivote_Parcial : public QWidget
{
    Q_OBJECT

public:
    explicit Pivote_Parcial(QWidget *parent = nullptr);
    ~Pivote_Parcial();

private:
    Ui::Pivote_Parcial *ui;
};

#endif // PIVOTE_PARCIAL_H
