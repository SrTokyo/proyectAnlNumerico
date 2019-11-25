/********************************************************************************
** Form generated from reading UI file 'secante.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECANTE_H
#define UI_SECANTE_H

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

class Ui_Secante
{
public:
    QTableWidget *table_solve;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_funcion;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *bt_solve;
    QTableWidget *table_resoult;

    void setupUi(QWidget *Secante)
    {
        if (Secante->objectName().isEmpty())
            Secante->setObjectName(QString::fromUtf8("Secante"));
        Secante->resize(640, 546);
        table_solve = new QTableWidget(Secante);
        table_solve->setObjectName(QString::fromUtf8("table_solve"));
        table_solve->setGeometry(QRect(10, 290, 611, 241));
        label = new QLabel(Secante);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 191, 21));
        plainTextEdit = new QPlainTextEdit(Secante);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 611, 71));
        layoutWidget = new QWidget(Secante);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 161, 191));
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

        table_resoult = new QTableWidget(Secante);
        table_resoult->setObjectName(QString::fromUtf8("table_resoult"));
        table_resoult->setGeometry(QRect(180, 100, 441, 181));

        retranslateUi(Secante);

        QMetaObject::connectSlotsByName(Secante);
    } // setupUi

    void retranslateUi(QWidget *Secante)
    {
        Secante->setWindowTitle(QApplication::translate("Secante", "Form", nullptr));
        label->setText(QApplication::translate("Secante", "ingregar funcion de esta forma :", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Secante", "numeros ([2.23e-308 hasta 1.79e308) , parentesis() , operadores(+,-,*,/) , seno(\" sen(valor) \") ,  coseno(\" cos(valor) \") , potencia(\"base ^ elevacion\") , raiz cuadrada(\" sqrt(valor) \") , exponencial(\" e(valor) \")", nullptr));
        bt_funcion->setText(QApplication::translate("Secante", "Ingresar Valores", nullptr));
        lineEdit->setText(QApplication::translate("Secante", "Tolerancia", nullptr));
        pushButton->setText(QApplication::translate("Secante", "Error abs", nullptr));
        pushButton_2->setText(QApplication::translate("Secante", "Error relativo", nullptr));
        bt_solve->setText(QApplication::translate("Secante", "Solucionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Secante: public Ui_Secante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECANTE_H
