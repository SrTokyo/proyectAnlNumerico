#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "busqueda_incremental.h"
#include "metodos_cerrados.h"
#include "metodos_abiertos.h"
#include "metodos_factorizacion.h"
#include "metodos_iterativos.h"
#include "metodos_interpolacion.h"
#include "eliminacion_gaussiana.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bt_Busqueda_Incremental_clicked();

    void on_bt_Metodos_Cerrados_clicked();

    void on_bt_Metodos_Abiertos_clicked();

    void on_bt_Metodos_Factorizacion_clicked();

    void on_bt_Eliminacion_Gaussiana_clicked();

    void on_bt_Metodos_Iterativos_clicked();

    void on_bt_Metodos_Interpolacion_clicked();

public:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
