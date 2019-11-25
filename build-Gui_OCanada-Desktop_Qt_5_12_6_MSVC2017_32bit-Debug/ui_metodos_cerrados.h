/********************************************************************************
** Form generated from reading UI file 'metodos_cerrados.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METODOS_CERRADOS_H
#define UI_METODOS_CERRADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Metodos_Cerrados
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Biseccion;
    QPushButton *regla_Falsa;
    QPushButton *back;

    void setupUi(QFrame *Metodos_Cerrados)
    {
        if (Metodos_Cerrados->objectName().isEmpty())
            Metodos_Cerrados->setObjectName(QString::fromUtf8("Metodos_Cerrados"));
        Metodos_Cerrados->resize(640, 480);
        layoutWidget = new QWidget(Metodos_Cerrados);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 180, 411, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Biseccion = new QPushButton(layoutWidget);
        Biseccion->setObjectName(QString::fromUtf8("Biseccion"));

        verticalLayout->addWidget(Biseccion);

        regla_Falsa = new QPushButton(layoutWidget);
        regla_Falsa->setObjectName(QString::fromUtf8("regla_Falsa"));

        verticalLayout->addWidget(regla_Falsa);

        back = new QPushButton(Metodos_Cerrados);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(400, 370, 75, 24));

        retranslateUi(Metodos_Cerrados);

        QMetaObject::connectSlotsByName(Metodos_Cerrados);
    } // setupUi

    void retranslateUi(QFrame *Metodos_Cerrados)
    {
        Metodos_Cerrados->setWindowTitle(QApplication::translate("Metodos_Cerrados", "Frame", nullptr));
        Biseccion->setText(QApplication::translate("Metodos_Cerrados", "Bisecci\303\263n", nullptr));
        regla_Falsa->setText(QApplication::translate("Metodos_Cerrados", "Regla Falsa", nullptr));
        back->setText(QApplication::translate("Metodos_Cerrados", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Metodos_Cerrados: public Ui_Metodos_Cerrados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METODOS_CERRADOS_H
