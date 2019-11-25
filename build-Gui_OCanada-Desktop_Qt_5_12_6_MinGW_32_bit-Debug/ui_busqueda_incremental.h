/********************************************************************************
** Form generated from reading UI file 'busqueda_incremental.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSQUEDA_INCREMENTAL_H
#define UI_BUSQUEDA_INCREMENTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Busqueda_Incremental
{
public:
    QTableWidget *table_solve;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_funcion;
    QPushButton *bt_solve;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Busqueda_Incremental)
    {
        if (Busqueda_Incremental->objectName().isEmpty())
            Busqueda_Incremental->setObjectName(QString::fromUtf8("Busqueda_Incremental"));
        Busqueda_Incremental->resize(640, 480);
        table_solve = new QTableWidget(Busqueda_Incremental);
        table_solve->setObjectName(QString::fromUtf8("table_solve"));
        table_solve->setGeometry(QRect(80, 200, 461, 271));
        layoutWidget = new QWidget(Busqueda_Incremental);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 90, 337, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bt_funcion = new QPushButton(layoutWidget);
        bt_funcion->setObjectName(QString::fromUtf8("bt_funcion"));

        verticalLayout->addWidget(bt_funcion);

        bt_solve = new QPushButton(layoutWidget);
        bt_solve->setObjectName(QString::fromUtf8("bt_solve"));

        verticalLayout->addWidget(bt_solve);

        label = new QLabel(Busqueda_Incremental);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 191, 21));
        plainTextEdit = new QPlainTextEdit(Busqueda_Incremental);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 20, 561, 71));

        retranslateUi(Busqueda_Incremental);

        QMetaObject::connectSlotsByName(Busqueda_Incremental);
    } // setupUi

    void retranslateUi(QWidget *Busqueda_Incremental)
    {
        Busqueda_Incremental->setWindowTitle(QApplication::translate("Busqueda_Incremental", "Form", nullptr));
        bt_funcion->setText(QApplication::translate("Busqueda_Incremental", "Ingresar Funci\303\263n, X inicial, Delta y Maximo de iteraciones", nullptr));
        bt_solve->setText(QApplication::translate("Busqueda_Incremental", "Solucionar", nullptr));
        label->setText(QApplication::translate("Busqueda_Incremental", "ingregar funcion de esta forma :", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Busqueda_Incremental", "numeros ([2.23e-308 hasta 1.79e308) , parentesis() , operadores(+,-,*,/) , seno(\" sen(valor) \") ,  coseno(\" cos(valor) \") , potencia(\"base ^ elevacion\") , raiz cuadrada(\" sqrt(valor) \") , exponencial(\" e(valor) \")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Busqueda_Incremental: public Ui_Busqueda_Incremental {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSQUEDA_INCREMENTAL_H
