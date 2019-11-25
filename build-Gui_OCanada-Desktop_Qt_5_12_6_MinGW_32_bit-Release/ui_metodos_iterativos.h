/********************************************************************************
** Form generated from reading UI file 'metodos_iterativos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METODOS_ITERATIVOS_H
#define UI_METODOS_ITERATIVOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Metodos_Iterativos
{
public:
    QPushButton *back;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *jacobi;
    QPushButton *seidel;

    void setupUi(QFrame *Metodos_Iterativos)
    {
        if (Metodos_Iterativos->objectName().isEmpty())
            Metodos_Iterativos->setObjectName(QString::fromUtf8("Metodos_Iterativos"));
        Metodos_Iterativos->resize(640, 480);
        back = new QPushButton(Metodos_Iterativos);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(430, 370, 75, 24));
        widget = new QWidget(Metodos_Iterativos);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 150, 271, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        jacobi = new QPushButton(widget);
        jacobi->setObjectName(QString::fromUtf8("jacobi"));

        verticalLayout->addWidget(jacobi);

        seidel = new QPushButton(widget);
        seidel->setObjectName(QString::fromUtf8("seidel"));

        verticalLayout->addWidget(seidel);


        retranslateUi(Metodos_Iterativos);

        QMetaObject::connectSlotsByName(Metodos_Iterativos);
    } // setupUi

    void retranslateUi(QFrame *Metodos_Iterativos)
    {
        Metodos_Iterativos->setWindowTitle(QApplication::translate("Metodos_Iterativos", "Frame", nullptr));
        back->setText(QApplication::translate("Metodos_Iterativos", "Back", nullptr));
        jacobi->setText(QApplication::translate("Metodos_Iterativos", "Jacobi", nullptr));
        seidel->setText(QApplication::translate("Metodos_Iterativos", "Seidel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Metodos_Iterativos: public Ui_Metodos_Iterativos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METODOS_ITERATIVOS_H
