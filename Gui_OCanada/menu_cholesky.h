#ifndef MENU_CHOLESKY_H
#define MENU_CHOLESKY_H

#include <QFrame>

namespace Ui {
class Menu_Cholesky;
}

class Menu_Cholesky : public QFrame
{
    Q_OBJECT

public:
    explicit Menu_Cholesky(QWidget *parent = nullptr);
    ~Menu_Cholesky();
    int size_N;

private slots:

    void on_back_clicked();

    void on_pv_Total_clicked();

    void on_pv_Parcial_clicked();

    void on_simple_clicked();

    void on_matriz_N_textEdited(const QString &arg1);

private:
    Ui::Menu_Cholesky *ui;
};

#endif // MENU_CHOLESKY_H
