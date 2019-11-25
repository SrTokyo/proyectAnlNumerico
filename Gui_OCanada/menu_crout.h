#ifndef MENU_CROUT_H
#define MENU_CROUT_H

#include <QFrame>

namespace Ui {
class Menu_Crout;
}

class Menu_Crout : public QFrame
{
    Q_OBJECT

public:
    explicit Menu_Crout(QWidget *parent = nullptr);
    ~Menu_Crout();

private slots:
    void on_simple_clicked();

    void on_pv_Parcial_clicked();

    void on_pv_Total_clicked();

    void on_back_clicked();

private:
    Ui::Menu_Crout *ui;
};

#endif // MENU_CROUT_H
