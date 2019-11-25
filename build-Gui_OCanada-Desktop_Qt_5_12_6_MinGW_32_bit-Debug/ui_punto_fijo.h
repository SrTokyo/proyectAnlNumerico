/********************************************************************************
** Form generated from reading UI file 'punto_fijo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUNTO_FIJO_H
#define UI_PUNTO_FIJO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Punto_Fijo
{
public:
    QTableWidget *table_resoult;
    QTableWidget *table_solve;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_funcion;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *bt_solve;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Punto_Fijo)
    {
        if (Punto_Fijo->objectName().isEmpty())
            Punto_Fijo->setObjectName(QString::fromUtf8("Punto_Fijo"));
        Punto_Fijo->resize(640, 496);
        table_resoult = new QTableWidget(Punto_Fijo);
        table_resoult->setObjectName(QString::fromUtf8("table_resoult"));
        table_resoult->setGeometry(QRect(180, 100, 441, 131));
        table_solve = new QTableWidget(Punto_Fijo);
        table_solve->setObjectName(QString::fromUtf8("table_solve"));
        table_solve->setGeometry(QRect(10, 240, 611, 241));
        layoutWidget = new QWidget(Punto_Fijo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 161, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bt_funcion = new QPushButton(layoutWidget);
        bt_funcion->setObjectName(QString::fromUtf8("bt_funcion"));

        verticalLayout->addWidget(bt_funcion);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        bt_solve = new QPushButton(layoutWidget);
        bt_solve->setObjectName(QString::fromUtf8("bt_solve"));

        verticalLayout->addWidget(bt_solve);

        label = new QLabel(Punto_Fijo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 191, 21));
        plainTextEdit = new QPlainTextEdit(Punto_Fijo);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 611, 71));

        retranslateUi(Punto_Fijo);

        QMetaObject::connectSlotsByName(Punto_Fijo);
    } // setupUi

    void retranslateUi(QWidget *Punto_Fijo)
    {
        Punto_Fijo->setWindowTitle(QApplication::translate("Punto_Fijo", "Form", nullptr));
        bt_funcion->setText(QApplication::translate("Punto_Fijo", "Ingresar Valores", nullptr));
        lineEdit->setText(QApplication::translate("Punto_Fijo", "Tolerancia", nullptr));
        pushButton->setText(QApplication::translate("Punto_Fijo", "Error abs", nullptr));
        pushButton_2->setText(QApplication::translate("Punto_Fijo", "Error relativo", nullptr));
        bt_solve->setText(QApplication::translate("Punto_Fijo", "Solucionar", nullptr));
        label->setText(QApplication::translate("Punto_Fijo", "ingregar funcion de esta forma :", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Punto_Fijo", "numeros ([2.23e-308 hasta 1.79e308) , parentesis() , operadores(+,-,*,/) , seno(\" sen(valor) \") ,  coseno(\" cos(valor) \") , potencia(\"base ^ elevacion\") , raiz cuadrada(\" sqrt(valor) \") , exponencial(\" e(valor) \")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Punto_Fijo: public Ui_Punto_Fijo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUNTO_FIJO_H
