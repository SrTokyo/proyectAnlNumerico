/********************************************************************************
** Form generated from reading UI file 'seidel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEIDEL_H
#define UI_SEIDEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seidel
{
public:
    QTableWidget *tabla_solve;
    QLabel *resultado;
    QTableWidget *table_resoult;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_funcion;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *bt_solve;
    QTableWidget *tabla_A;
    QTableWidget *tabla_b;
    QTableWidget *tabla_X;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Seidel)
    {
        if (Seidel->objectName().isEmpty())
            Seidel->setObjectName(QString::fromUtf8("Seidel"));
        Seidel->resize(1189, 742);
        tabla_solve = new QTableWidget(Seidel);
        tabla_solve->setObjectName(QString::fromUtf8("tabla_solve"));
        tabla_solve->setGeometry(QRect(30, 390, 631, 321));
        resultado = new QLabel(Seidel);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(444, 160, 171, 20));
        table_resoult = new QTableWidget(Seidel);
        table_resoult->setObjectName(QString::fromUtf8("table_resoult"));
        table_resoult->setGeometry(QRect(690, 390, 441, 311));
        layoutWidget = new QWidget(Seidel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 161, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bt_funcion = new QPushButton(layoutWidget);
        bt_funcion->setObjectName(QString::fromUtf8("bt_funcion"));

        verticalLayout->addWidget(bt_funcion);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        bt_solve = new QPushButton(layoutWidget);
        bt_solve->setObjectName(QString::fromUtf8("bt_solve"));

        verticalLayout->addWidget(bt_solve);

        tabla_A = new QTableWidget(Seidel);
        tabla_A->setObjectName(QString::fromUtf8("tabla_A"));
        tabla_A->setGeometry(QRect(220, 40, 431, 321));
        tabla_b = new QTableWidget(Seidel);
        tabla_b->setObjectName(QString::fromUtf8("tabla_b"));
        tabla_b->setGeometry(QRect(730, 40, 161, 321));
        tabla_X = new QTableWidget(Seidel);
        tabla_X->setObjectName(QString::fromUtf8("tabla_X"));
        tabla_X->setGeometry(QRect(960, 40, 161, 321));
        label = new QLabel(Seidel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 20, 55, 16));
        label_2 = new QLabel(Seidel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(730, 10, 55, 21));
        label_3 = new QLabel(Seidel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(960, 10, 55, 16));

        retranslateUi(Seidel);

        QMetaObject::connectSlotsByName(Seidel);
    } // setupUi

    void retranslateUi(QWidget *Seidel)
    {
        Seidel->setWindowTitle(QApplication::translate("Seidel", "Form", nullptr));
        resultado->setText(QString());
        bt_funcion->setText(QApplication::translate("Seidel", "Ingresar Valores", nullptr));
        lineEdit->setText(QApplication::translate("Seidel", "Tolerancia", nullptr));
        lineEdit_2->setText(QApplication::translate("Seidel", "niteraciones", nullptr));
        bt_solve->setText(QApplication::translate("Seidel", "Solucionar", nullptr));
        label->setText(QApplication::translate("Seidel", "Matriz A", nullptr));
        label_2->setText(QApplication::translate("Seidel", "Matriz b", nullptr));
        label_3->setText(QApplication::translate("Seidel", "verctor X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seidel: public Ui_Seidel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEIDEL_H
