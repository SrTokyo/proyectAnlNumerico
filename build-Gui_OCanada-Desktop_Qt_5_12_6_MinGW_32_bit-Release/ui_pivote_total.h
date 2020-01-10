/********************************************************************************
** Form generated from reading UI file 'pivote_total.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIVOTE_TOTAL_H
#define UI_PIVOTE_TOTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pivote_Total
{
public:
    QLabel *label_2;
    QPushButton *bt_setAb;
    QTableWidget *tabla_b;
    QTableWidget *tabla_A;
    QLabel *label;
    QPushButton *solve;
    QLabel *label_3;
    QTableWidget *table_resolut;
    QTableWidget *tabla_solve;

    void setupUi(QWidget *Pivote_Total)
    {
        if (Pivote_Total->objectName().isEmpty())
            Pivote_Total->setObjectName(QString::fromUtf8("Pivote_Total"));
        Pivote_Total->resize(1016, 565);
        label_2 = new QLabel(Pivote_Total);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 10, 55, 16));
        bt_setAb = new QPushButton(Pivote_Total);
        bt_setAb->setObjectName(QString::fromUtf8("bt_setAb"));
        bt_setAb->setGeometry(QRect(110, 430, 191, 24));
        tabla_b = new QTableWidget(Pivote_Total);
        tabla_b->setObjectName(QString::fromUtf8("tabla_b"));
        tabla_b->setGeometry(QRect(310, 60, 101, 241));
        tabla_A = new QTableWidget(Pivote_Total);
        tabla_A->setObjectName(QString::fromUtf8("tabla_A"));
        tabla_A->setEnabled(true);
        tabla_A->setGeometry(QRect(10, 60, 256, 241));
        label = new QLabel(Pivote_Total);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 55, 16));
        solve = new QPushButton(Pivote_Total);
        solve->setObjectName(QString::fromUtf8("solve"));
        solve->setGeometry(QRect(470, 10, 75, 24));
        label_3 = new QLabel(Pivote_Total);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(690, 20, 55, 16));
        table_resolut = new QTableWidget(Pivote_Total);
        table_resolut->setObjectName(QString::fromUtf8("table_resolut"));
        table_resolut->setGeometry(QRect(460, 340, 531, 192));
        tabla_solve = new QTableWidget(Pivote_Total);
        tabla_solve->setObjectName(QString::fromUtf8("tabla_solve"));
        tabla_solve->setGeometry(QRect(460, 50, 531, 271));

        retranslateUi(Pivote_Total);

        QMetaObject::connectSlotsByName(Pivote_Total);
    } // setupUi

    void retranslateUi(QWidget *Pivote_Total)
    {
        Pivote_Total->setWindowTitle(QApplication::translate("Pivote_Total", "Form", nullptr));
        label_2->setText(QApplication::translate("Pivote_Total", "Vector b", nullptr));
        bt_setAb->setText(QApplication::translate("Pivote_Total", "agregar Matriz A y vectos B", nullptr));
        label->setText(QApplication::translate("Pivote_Total", "Matriz A", nullptr));
        solve->setText(QApplication::translate("Pivote_Total", "Solucionar", nullptr));
        label_3->setText(QApplication::translate("Pivote_Total", "Soluci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pivote_Total: public Ui_Pivote_Total {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIVOTE_TOTAL_H
