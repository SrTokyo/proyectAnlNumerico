/********************************************************************************
** Form generated from reading UI file 'pivote_parcial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIVOTE_PARCIAL_H
#define UI_PIVOTE_PARCIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pivote_Parcial
{
public:
    QPushButton *solve;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *table_resolut;
    QTableWidget *tabla_b;
    QLabel *label_3;
    QTableWidget *tabla_A;
    QPushButton *bt_setAb;
    QTableWidget *tabla_solve;

    void setupUi(QWidget *Pivote_Parcial)
    {
        if (Pivote_Parcial->objectName().isEmpty())
            Pivote_Parcial->setObjectName(QString::fromUtf8("Pivote_Parcial"));
        Pivote_Parcial->resize(1017, 610);
        solve = new QPushButton(Pivote_Parcial);
        solve->setObjectName(QString::fromUtf8("solve"));
        solve->setGeometry(QRect(470, 10, 75, 24));
        label = new QLabel(Pivote_Parcial);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 55, 16));
        label_2 = new QLabel(Pivote_Parcial);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 10, 55, 16));
        table_resolut = new QTableWidget(Pivote_Parcial);
        table_resolut->setObjectName(QString::fromUtf8("table_resolut"));
        table_resolut->setGeometry(QRect(460, 340, 531, 192));
        tabla_b = new QTableWidget(Pivote_Parcial);
        tabla_b->setObjectName(QString::fromUtf8("tabla_b"));
        tabla_b->setGeometry(QRect(310, 60, 101, 241));
        label_3 = new QLabel(Pivote_Parcial);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(690, 20, 55, 16));
        tabla_A = new QTableWidget(Pivote_Parcial);
        tabla_A->setObjectName(QString::fromUtf8("tabla_A"));
        tabla_A->setEnabled(true);
        tabla_A->setGeometry(QRect(10, 60, 261, 241));
        bt_setAb = new QPushButton(Pivote_Parcial);
        bt_setAb->setObjectName(QString::fromUtf8("bt_setAb"));
        bt_setAb->setGeometry(QRect(110, 430, 191, 24));
        tabla_solve = new QTableWidget(Pivote_Parcial);
        tabla_solve->setObjectName(QString::fromUtf8("tabla_solve"));
        tabla_solve->setGeometry(QRect(460, 50, 531, 271));

        retranslateUi(Pivote_Parcial);

        QMetaObject::connectSlotsByName(Pivote_Parcial);
    } // setupUi

    void retranslateUi(QWidget *Pivote_Parcial)
    {
        Pivote_Parcial->setWindowTitle(QApplication::translate("Pivote_Parcial", "Form", nullptr));
        solve->setText(QApplication::translate("Pivote_Parcial", "Solucionar", nullptr));
        label->setText(QApplication::translate("Pivote_Parcial", "Matriz A", nullptr));
        label_2->setText(QApplication::translate("Pivote_Parcial", "Vector b", nullptr));
        label_3->setText(QApplication::translate("Pivote_Parcial", "Soluci\303\263n", nullptr));
        bt_setAb->setText(QApplication::translate("Pivote_Parcial", "agregar Matriz A y vectos B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pivote_Parcial: public Ui_Pivote_Parcial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIVOTE_PARCIAL_H
