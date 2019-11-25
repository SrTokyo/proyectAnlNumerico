/********************************************************************************
** Form generated from reading UI file 'biseccion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BISECCION_H
#define UI_BISECCION_H

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

class Ui_Biseccion
{
public:
    QPlainTextEdit *plainTextEdit;
    QTableWidget *table_solve;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_funcion;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *bt_solve;
    QLabel *label;
    QLabel *resultado;
    QTableWidget *table_resoult;

    void setupUi(QWidget *Biseccion)
    {
        if (Biseccion->objectName().isEmpty())
            Biseccion->setObjectName(QString::fromUtf8("Biseccion"));
        Biseccion->resize(640, 499);
        plainTextEdit = new QPlainTextEdit(Biseccion);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 611, 71));
        table_solve = new QTableWidget(Biseccion);
        table_solve->setObjectName(QString::fromUtf8("table_solve"));
        table_solve->setGeometry(QRect(10, 240, 611, 241));
        layoutWidget = new QWidget(Biseccion);
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

        label = new QLabel(Biseccion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 191, 21));
        resultado = new QLabel(Biseccion);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(444, 150, 171, 20));
        table_resoult = new QTableWidget(Biseccion);
        table_resoult->setObjectName(QString::fromUtf8("table_resoult"));
        table_resoult->setGeometry(QRect(180, 100, 441, 131));

        retranslateUi(Biseccion);

        QMetaObject::connectSlotsByName(Biseccion);
    } // setupUi

    void retranslateUi(QWidget *Biseccion)
    {
        Biseccion->setWindowTitle(QApplication::translate("Biseccion", "Form", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Biseccion", "numeros ([2.23e-308 hasta 1.79e308) , parentesis() , operadores(+,-,*,/) , seno(\" sen(valor) \") ,  coseno(\" cos(valor) \") , potencia(\"base ^ elevacion\") , raiz cuadrada(\" sqrt(valor) \") , exponencial(\" e(valor) \")", nullptr));
        bt_funcion->setText(QApplication::translate("Biseccion", "Ingresar Valores", nullptr));
        lineEdit->setText(QApplication::translate("Biseccion", "Tolerancia", nullptr));
        pushButton->setText(QApplication::translate("Biseccion", "Error abs", nullptr));
        pushButton_2->setText(QApplication::translate("Biseccion", "Error relativo", nullptr));
        bt_solve->setText(QApplication::translate("Biseccion", "Solucionar", nullptr));
        label->setText(QApplication::translate("Biseccion", "ingregar funcion de esta forma :", nullptr));
        resultado->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Biseccion: public Ui_Biseccion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BISECCION_H
