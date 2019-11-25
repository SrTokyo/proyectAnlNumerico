/********************************************************************************
** Form generated from reading UI file 'simple.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLE_H
#define UI_SIMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Simple
{
public:
    QLabel *label;
    QPushButton *solve;
    QPushButton *bt_setAb;
    QTableWidget *tabla_A;
    QTableWidget *tabla_b;
    QLabel *label_3;
    QTableWidget *table_resolut;
    QTableWidget *tabla_solve;
    QLabel *label_2;

    void setupUi(QWidget *Simple)
    {
        if (Simple->objectName().isEmpty())
            Simple->setObjectName(QString::fromUtf8("Simple"));
        Simple->resize(1047, 566);
        label = new QLabel(Simple);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 55, 16));
        solve = new QPushButton(Simple);
        solve->setObjectName(QString::fromUtf8("solve"));
        solve->setGeometry(QRect(480, 20, 75, 24));
        bt_setAb = new QPushButton(Simple);
        bt_setAb->setObjectName(QString::fromUtf8("bt_setAb"));
        bt_setAb->setGeometry(QRect(120, 440, 191, 24));
        tabla_A = new QTableWidget(Simple);
        tabla_A->setObjectName(QString::fromUtf8("tabla_A"));
        tabla_A->setEnabled(true);
        tabla_A->setGeometry(QRect(20, 70, 256, 241));
        tabla_b = new QTableWidget(Simple);
        tabla_b->setObjectName(QString::fromUtf8("tabla_b"));
        tabla_b->setGeometry(QRect(320, 70, 101, 241));
        label_3 = new QLabel(Simple);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(700, 30, 55, 16));
        table_resolut = new QTableWidget(Simple);
        table_resolut->setObjectName(QString::fromUtf8("table_resolut"));
        table_resolut->setGeometry(QRect(470, 350, 531, 192));
        tabla_solve = new QTableWidget(Simple);
        tabla_solve->setObjectName(QString::fromUtf8("tabla_solve"));
        tabla_solve->setGeometry(QRect(470, 60, 531, 271));
        label_2 = new QLabel(Simple);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 20, 55, 16));

        retranslateUi(Simple);

        QMetaObject::connectSlotsByName(Simple);
    } // setupUi

    void retranslateUi(QWidget *Simple)
    {
        Simple->setWindowTitle(QApplication::translate("Simple", "Form", nullptr));
        label->setText(QApplication::translate("Simple", "Matriz A", nullptr));
        solve->setText(QApplication::translate("Simple", "Solucionar", nullptr));
        bt_setAb->setText(QApplication::translate("Simple", "agregar Matriz A y vectos B", nullptr));
        label_3->setText(QApplication::translate("Simple", "Soluci\303\263n", nullptr));
        label_2->setText(QApplication::translate("Simple", "Vector b", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Simple: public Ui_Simple {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLE_H
