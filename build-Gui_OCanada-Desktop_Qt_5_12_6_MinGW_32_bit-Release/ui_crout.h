/********************************************************************************
** Form generated from reading UI file 'crout.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROUT_H
#define UI_CROUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Crout
{
public:
    QPushButton *bt_setAb;
    QLabel *label_3;
    QTableWidget *table_resolut;
    QTableWidget *tabla_b;
    QLabel *label_2;
    QLabel *label;
    QTableWidget *tabla_solve;
    QTableWidget *tabla_A;
    QPushButton *solve;

    void setupUi(QWidget *Crout)
    {
        if (Crout->objectName().isEmpty())
            Crout->setObjectName(QString::fromUtf8("Crout"));
        Crout->resize(1023, 559);
        bt_setAb = new QPushButton(Crout);
        bt_setAb->setObjectName(QString::fromUtf8("bt_setAb"));
        bt_setAb->setGeometry(QRect(110, 430, 191, 24));
        label_3 = new QLabel(Crout);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(690, 20, 55, 16));
        table_resolut = new QTableWidget(Crout);
        table_resolut->setObjectName(QString::fromUtf8("table_resolut"));
        table_resolut->setGeometry(QRect(460, 340, 531, 192));
        tabla_b = new QTableWidget(Crout);
        tabla_b->setObjectName(QString::fromUtf8("tabla_b"));
        tabla_b->setGeometry(QRect(310, 60, 101, 241));
        label_2 = new QLabel(Crout);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 10, 55, 16));
        label = new QLabel(Crout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 55, 16));
        tabla_solve = new QTableWidget(Crout);
        tabla_solve->setObjectName(QString::fromUtf8("tabla_solve"));
        tabla_solve->setGeometry(QRect(460, 50, 531, 271));
        tabla_A = new QTableWidget(Crout);
        tabla_A->setObjectName(QString::fromUtf8("tabla_A"));
        tabla_A->setEnabled(true);
        tabla_A->setGeometry(QRect(10, 60, 256, 241));
        solve = new QPushButton(Crout);
        solve->setObjectName(QString::fromUtf8("solve"));
        solve->setGeometry(QRect(470, 10, 75, 24));

        retranslateUi(Crout);

        QMetaObject::connectSlotsByName(Crout);
    } // setupUi

    void retranslateUi(QWidget *Crout)
    {
        Crout->setWindowTitle(QApplication::translate("Crout", "Form", nullptr));
        bt_setAb->setText(QApplication::translate("Crout", "agregar Matriz A y vectos B", nullptr));
        label_3->setText(QApplication::translate("Crout", "Soluci\303\263n", nullptr));
        label_2->setText(QApplication::translate("Crout", "Vector b", nullptr));
        label->setText(QApplication::translate("Crout", "Matriz A", nullptr));
        solve->setText(QApplication::translate("Crout", "Solucionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Crout: public Ui_Crout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROUT_H
