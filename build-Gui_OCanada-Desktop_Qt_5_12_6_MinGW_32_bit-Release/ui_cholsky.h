/********************************************************************************
** Form generated from reading UI file 'cholsky.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOLSKY_H
#define UI_CHOLSKY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cholsky
{
public:
    QTableWidget *tabla_solve;
    QPushButton *solve;
    QLabel *label_3;
    QTableWidget *tabla_A;
    QPushButton *bt_setAb;
    QTableWidget *tabla_b;
    QLabel *label_2;
    QTableWidget *table_resolut;
    QLabel *label;

    void setupUi(QWidget *Cholsky)
    {
        if (Cholsky->objectName().isEmpty())
            Cholsky->setObjectName(QString::fromUtf8("Cholsky"));
        Cholsky->resize(1038, 562);
        tabla_solve = new QTableWidget(Cholsky);
        tabla_solve->setObjectName(QString::fromUtf8("tabla_solve"));
        tabla_solve->setGeometry(QRect(460, 50, 531, 271));
        solve = new QPushButton(Cholsky);
        solve->setObjectName(QString::fromUtf8("solve"));
        solve->setGeometry(QRect(470, 10, 75, 24));
        label_3 = new QLabel(Cholsky);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(690, 20, 55, 16));
        tabla_A = new QTableWidget(Cholsky);
        tabla_A->setObjectName(QString::fromUtf8("tabla_A"));
        tabla_A->setEnabled(true);
        tabla_A->setGeometry(QRect(10, 60, 256, 241));
        bt_setAb = new QPushButton(Cholsky);
        bt_setAb->setObjectName(QString::fromUtf8("bt_setAb"));
        bt_setAb->setGeometry(QRect(110, 430, 191, 24));
        tabla_b = new QTableWidget(Cholsky);
        tabla_b->setObjectName(QString::fromUtf8("tabla_b"));
        tabla_b->setGeometry(QRect(310, 60, 101, 241));
        label_2 = new QLabel(Cholsky);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 10, 55, 16));
        table_resolut = new QTableWidget(Cholsky);
        table_resolut->setObjectName(QString::fromUtf8("table_resolut"));
        table_resolut->setGeometry(QRect(460, 340, 531, 192));
        label = new QLabel(Cholsky);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 55, 16));

        retranslateUi(Cholsky);

        QMetaObject::connectSlotsByName(Cholsky);
    } // setupUi

    void retranslateUi(QWidget *Cholsky)
    {
        Cholsky->setWindowTitle(QApplication::translate("Cholsky", "Form", nullptr));
        solve->setText(QApplication::translate("Cholsky", "Solucionar", nullptr));
        label_3->setText(QApplication::translate("Cholsky", "Soluci\303\263n", nullptr));
        bt_setAb->setText(QApplication::translate("Cholsky", "agregar Matriz A y vectos B", nullptr));
        label_2->setText(QApplication::translate("Cholsky", "Vector b", nullptr));
        label->setText(QApplication::translate("Cholsky", "Matriz A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cholsky: public Ui_Cholsky {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOLSKY_H
