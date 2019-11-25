/********************************************************************************
** Form generated from reading UI file 'regla_falsa.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGLA_FALSA_H
#define UI_REGLA_FALSA_H

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

class Ui_Regla_Falsa
{
public:
    QPlainTextEdit *plainTextEdit;
    QTableWidget *table_resoult;
    QLabel *resultado;
    QLabel *label;
    QTableWidget *table_solve;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_funcion;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *bt_solve;

    void setupUi(QWidget *Regla_Falsa)
    {
        if (Regla_Falsa->objectName().isEmpty())
            Regla_Falsa->setObjectName(QString::fromUtf8("Regla_Falsa"));
        Regla_Falsa->resize(640, 495);
        plainTextEdit = new QPlainTextEdit(Regla_Falsa);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 611, 71));
        table_resoult = new QTableWidget(Regla_Falsa);
        table_resoult->setObjectName(QString::fromUtf8("table_resoult"));
        table_resoult->setGeometry(QRect(180, 100, 441, 131));
        resultado = new QLabel(Regla_Falsa);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(444, 150, 171, 20));
        label = new QLabel(Regla_Falsa);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 191, 21));
        table_solve = new QTableWidget(Regla_Falsa);
        table_solve->setObjectName(QString::fromUtf8("table_solve"));
        table_solve->setGeometry(QRect(10, 240, 611, 241));
        layoutWidget = new QWidget(Regla_Falsa);
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


        retranslateUi(Regla_Falsa);

        QMetaObject::connectSlotsByName(Regla_Falsa);
    } // setupUi

    void retranslateUi(QWidget *Regla_Falsa)
    {
        Regla_Falsa->setWindowTitle(QApplication::translate("Regla_Falsa", "Form", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Regla_Falsa", "numeros ([2.23e-308 hasta 1.79e308) , parentesis() , operadores(+,-,*,/) , seno(\" sen(valor) \") ,  coseno(\" cos(valor) \") , potencia(\"base ^ elevacion\") , raiz cuadrada(\" sqrt(valor) \") , exponencial(\" e(valor) \")", nullptr));
        resultado->setText(QString());
        label->setText(QApplication::translate("Regla_Falsa", "ingregar funcion de esta forma :", nullptr));
        bt_funcion->setText(QApplication::translate("Regla_Falsa", "Ingresar Valores", nullptr));
        lineEdit->setText(QApplication::translate("Regla_Falsa", "Tolerancia", nullptr));
        pushButton->setText(QApplication::translate("Regla_Falsa", "Error abs", nullptr));
        pushButton_2->setText(QApplication::translate("Regla_Falsa", "Error relativo", nullptr));
        bt_solve->setText(QApplication::translate("Regla_Falsa", "Solucionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Regla_Falsa: public Ui_Regla_Falsa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGLA_FALSA_H
