/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_Busqueda_Incremental;
    QPushButton *bt_Metodos_Cerrados;
    QPushButton *bt_Metodos_Abiertos;
    QPushButton *bt_Eliminacion_Gaussiana;
    QPushButton *bt_Metodos_Factorizacion;
    QPushButton *bt_Metodos_Iterativos;
    QPushButton *bt_Metodos_Interpolacion;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 120, 751, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bt_Busqueda_Incremental = new QPushButton(verticalLayoutWidget);
        bt_Busqueda_Incremental->setObjectName(QString::fromUtf8("bt_Busqueda_Incremental"));

        verticalLayout->addWidget(bt_Busqueda_Incremental);

        bt_Metodos_Cerrados = new QPushButton(verticalLayoutWidget);
        bt_Metodos_Cerrados->setObjectName(QString::fromUtf8("bt_Metodos_Cerrados"));

        verticalLayout->addWidget(bt_Metodos_Cerrados);

        bt_Metodos_Abiertos = new QPushButton(verticalLayoutWidget);
        bt_Metodos_Abiertos->setObjectName(QString::fromUtf8("bt_Metodos_Abiertos"));

        verticalLayout->addWidget(bt_Metodos_Abiertos);

        bt_Eliminacion_Gaussiana = new QPushButton(verticalLayoutWidget);
        bt_Eliminacion_Gaussiana->setObjectName(QString::fromUtf8("bt_Eliminacion_Gaussiana"));

        verticalLayout->addWidget(bt_Eliminacion_Gaussiana);

        bt_Metodos_Factorizacion = new QPushButton(verticalLayoutWidget);
        bt_Metodos_Factorizacion->setObjectName(QString::fromUtf8("bt_Metodos_Factorizacion"));

        verticalLayout->addWidget(bt_Metodos_Factorizacion);

        bt_Metodos_Iterativos = new QPushButton(verticalLayoutWidget);
        bt_Metodos_Iterativos->setObjectName(QString::fromUtf8("bt_Metodos_Iterativos"));

        verticalLayout->addWidget(bt_Metodos_Iterativos);

        bt_Metodos_Interpolacion = new QPushButton(verticalLayoutWidget);
        bt_Metodos_Interpolacion->setObjectName(QString::fromUtf8("bt_Metodos_Interpolacion"));

        verticalLayout->addWidget(bt_Metodos_Interpolacion);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 381, 81));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Elephant\";"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "O'Canada Proyecto Analisis Numerico", nullptr));
        bt_Busqueda_Incremental->setText(QApplication::translate("MainWindow", "Busqueda incremental", nullptr));
        bt_Metodos_Cerrados->setText(QApplication::translate("MainWindow", "Metodos cerrados", nullptr));
        bt_Metodos_Abiertos->setText(QApplication::translate("MainWindow", "Metodos abiertos", nullptr));
        bt_Eliminacion_Gaussiana->setText(QApplication::translate("MainWindow", "Eliminacion Gaussiana", nullptr));
        bt_Metodos_Factorizacion->setText(QApplication::translate("MainWindow", "Metodos de factorizaci\303\263n", nullptr));
        bt_Metodos_Iterativos->setText(QApplication::translate("MainWindow", "Metodos Iterativos", nullptr));
        bt_Metodos_Interpolacion->setText(QApplication::translate("MainWindow", "Metodos Interpolacion", nullptr));
        label->setText(QApplication::translate("MainWindow", "                     \302\241\302\241 Bienvenidos !!\n"
"       Selecione un metodo por favor.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
