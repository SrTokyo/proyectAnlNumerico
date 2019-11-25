/********************************************************************************
** Form generated from reading UI file 'newton.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTON_H
#define UI_NEWTON_H

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

class Ui_Newton
{
public:
    QTableWidget *table_solve;
    QLabel *label;
    QTableWidget *table_resoult;
    QPlainTextEdit *plainTextEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_funcion;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *bt_solve;

    void setupUi(QWidget *Newton)
    {
        if (Newton->objectName().isEmpty())
            Newton->setObjectName(QString::fromUtf8("Newton"));
        Newton->resize(640, 500);
        table_solve = new QTableWidget(Newton);
        table_solve->setObjectName(QString::fromUtf8("table_solve"));
        table_solve->setGeometry(QRect(10, 240, 611, 241));
        label = new QLabel(Newton);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 191, 21));
        table_resoult = new QTableWidget(Newton);
        table_resoult->setObjectName(QString::fromUtf8("table_resoult"));
        table_resoult->setGeometry(QRect(180, 100, 441, 131));
        plainTextEdit = new QPlainTextEdit(Newton);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 611, 71));
        layoutWidget = new QWidget(Newton);
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


        retranslateUi(Newton);

        QMetaObject::connectSlotsByName(Newton);
    } // setupUi

    void retranslateUi(QWidget *Newton)
    {
        Newton->setWindowTitle(QApplication::translate("Newton", "Form", nullptr));
        label->setText(QApplication::translate("Newton", "ingregar funcion de esta forma :", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Newton", "numeros ([2.23e-308 hasta 1.79e308) , parentesis() , operadores(+,-,*,/) , seno(\" sen(valor) \") ,  coseno(\" cos(valor) \") , potencia(\"base ^ elevacion\") , raiz cuadrada(\" sqrt(valor) \") , exponencial(\" e(valor) \")", nullptr));
        bt_funcion->setText(QApplication::translate("Newton", "Ingresar Valores", nullptr));
        lineEdit->setText(QApplication::translate("Newton", "Tolerancia", nullptr));
        pushButton->setText(QApplication::translate("Newton", "Error abs", nullptr));
        pushButton_2->setText(QApplication::translate("Newton", "Error relativo", nullptr));
        bt_solve->setText(QApplication::translate("Newton", "Solucionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newton: public Ui_Newton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTON_H
