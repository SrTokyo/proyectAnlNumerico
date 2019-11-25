/********************************************************************************
** Form generated from reading UI file 'raizes_multiples.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAIZES_MULTIPLES_H
#define UI_RAIZES_MULTIPLES_H

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

class Ui_Raizes_Multiples
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_funcion;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *bt_solve;
    QPlainTextEdit *plainTextEdit;
    QTableWidget *table_resoult;
    QTableWidget *table_solve;

    void setupUi(QWidget *Raizes_Multiples)
    {
        if (Raizes_Multiples->objectName().isEmpty())
            Raizes_Multiples->setObjectName(QString::fromUtf8("Raizes_Multiples"));
        Raizes_Multiples->resize(640, 497);
        label = new QLabel(Raizes_Multiples);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 191, 21));
        layoutWidget = new QWidget(Raizes_Multiples);
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

        plainTextEdit = new QPlainTextEdit(Raizes_Multiples);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 611, 71));
        table_resoult = new QTableWidget(Raizes_Multiples);
        table_resoult->setObjectName(QString::fromUtf8("table_resoult"));
        table_resoult->setGeometry(QRect(180, 100, 441, 131));
        table_solve = new QTableWidget(Raizes_Multiples);
        table_solve->setObjectName(QString::fromUtf8("table_solve"));
        table_solve->setGeometry(QRect(10, 240, 611, 241));

        retranslateUi(Raizes_Multiples);

        QMetaObject::connectSlotsByName(Raizes_Multiples);
    } // setupUi

    void retranslateUi(QWidget *Raizes_Multiples)
    {
        Raizes_Multiples->setWindowTitle(QApplication::translate("Raizes_Multiples", "Form", nullptr));
        label->setText(QApplication::translate("Raizes_Multiples", "ingregar funcion de esta forma :", nullptr));
        bt_funcion->setText(QApplication::translate("Raizes_Multiples", "Ingresar Valores", nullptr));
        lineEdit->setText(QApplication::translate("Raizes_Multiples", "Tolerancia", nullptr));
        pushButton->setText(QApplication::translate("Raizes_Multiples", "Error abs", nullptr));
        pushButton_2->setText(QApplication::translate("Raizes_Multiples", "Error relativo", nullptr));
        bt_solve->setText(QApplication::translate("Raizes_Multiples", "Solucionar", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Raizes_Multiples", "numeros ([2.23e-308 hasta 1.79e308) , parentesis() , operadores(+,-,*,/) , seno(\" sen(valor) \") ,  coseno(\" cos(valor) \") , potencia(\"base ^ elevacion\") , raiz cuadrada(\" sqrt(valor) \") , exponencial(\" e(valor) \")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Raizes_Multiples: public Ui_Raizes_Multiples {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAIZES_MULTIPLES_H
