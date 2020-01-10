/********************************************************************************
** Form generated from reading UI file 'doolittle.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOOLITTLE_H
#define UI_DOOLITTLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Doolittle
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tabla_A;
    QPushButton *bt_setAb;
    QTableWidget *tabla_b;
    QTableWidget *tabla_solve;
    QLabel *label_3;
    QPushButton *solve;
    QTableWidget *table_resolut;

    void setupUi(QWidget *Doolittle)
    {
        if (Doolittle->objectName().isEmpty())
            Doolittle->setObjectName(QString::fromUtf8("Doolittle"));
        Doolittle->resize(1045, 578);
        label = new QLabel(Doolittle);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 55, 16));
        label_2 = new QLabel(Doolittle);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 20, 55, 16));
        tabla_A = new QTableWidget(Doolittle);
        tabla_A->setObjectName(QString::fromUtf8("tabla_A"));
        tabla_A->setEnabled(true);
        tabla_A->setGeometry(QRect(20, 70, 256, 241));
        bt_setAb = new QPushButton(Doolittle);
        bt_setAb->setObjectName(QString::fromUtf8("bt_setAb"));
        bt_setAb->setGeometry(QRect(120, 440, 191, 24));
        tabla_b = new QTableWidget(Doolittle);
        tabla_b->setObjectName(QString::fromUtf8("tabla_b"));
        tabla_b->setGeometry(QRect(320, 70, 101, 241));
        tabla_solve = new QTableWidget(Doolittle);
        tabla_solve->setObjectName(QString::fromUtf8("tabla_solve"));
        tabla_solve->setGeometry(QRect(470, 60, 531, 271));
        label_3 = new QLabel(Doolittle);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(700, 30, 55, 16));
        solve = new QPushButton(Doolittle);
        solve->setObjectName(QString::fromUtf8("solve"));
        solve->setGeometry(QRect(480, 20, 75, 24));
        table_resolut = new QTableWidget(Doolittle);
        table_resolut->setObjectName(QString::fromUtf8("table_resolut"));
        table_resolut->setGeometry(QRect(470, 350, 531, 192));

        retranslateUi(Doolittle);

        QMetaObject::connectSlotsByName(Doolittle);
    } // setupUi

    void retranslateUi(QWidget *Doolittle)
    {
        Doolittle->setWindowTitle(QApplication::translate("Doolittle", "Form", nullptr));
        label->setText(QApplication::translate("Doolittle", "Matriz A", nullptr));
        label_2->setText(QApplication::translate("Doolittle", "Vector b", nullptr));
        bt_setAb->setText(QApplication::translate("Doolittle", "agregar Matriz A y vectos B", nullptr));
        label_3->setText(QApplication::translate("Doolittle", "Soluci\303\263n", nullptr));
        solve->setText(QApplication::translate("Doolittle", "Solucionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doolittle: public Ui_Doolittle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOOLITTLE_H
