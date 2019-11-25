#ifndef MENU_DOOLITTLE_H
#define MENU_DOOLITTLE_H

#include <QInputDialog>
#include <QFrame>
#include "doolittle.h"

namespace Ui {
class Menu_Doolittle;
}

class Menu_Doolittle : public QFrame
{
    Q_OBJECT

public:
    explicit Menu_Doolittle(QWidget *parent = nullptr);
    ~Menu_Doolittle();

private slots:

    void on_simple_clicked();

    void on_pv_Parcial_clicked();

    void on_pv_Total_clicked();

    void on_back_clicked();


private:
    Ui::Menu_Doolittle *ui;
};

#endif // MENU_DOOLITTLE_H
