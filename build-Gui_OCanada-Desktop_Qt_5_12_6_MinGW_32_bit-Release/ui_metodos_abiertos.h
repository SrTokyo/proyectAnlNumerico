/********************************************************************************
** Form generated from reading UI file 'metodos_abiertos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METODOS_ABIERTOS_H
#define UI_METODOS_ABIERTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Metodos_Abiertos
{
public:
    QPushButton *back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *punto_Fijo;
    QPushButton *newton;
    QPushButton *secante;
    QPushButton *mult_Raizes;

    void setupUi(QWidget *Metodos_Abiertos)
    {
        if (Metodos_Abiertos->objectName().isEmpty())
            Metodos_Abiertos->setObjectName(QString::fromUtf8("Metodos_Abiertos"));
        Metodos_Abiertos->resize(640, 480);
        back = new QPushButton(Metodos_Abiertos);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(400, 370, 75, 24));
        layoutWidget = new QWidget(Metodos_Abiertos);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 100, 421, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        punto_Fijo = new QPushButton(layoutWidget);
        punto_Fijo->setObjectName(QString::fromUtf8("punto_Fijo"));

        verticalLayout->addWidget(punto_Fijo);

        newton = new QPushButton(layoutWidget);
        newton->setObjectName(QString::fromUtf8("newton"));

        verticalLayout->addWidget(newton);

        secante = new QPushButton(layoutWidget);
        secante->setObjectName(QString::fromUtf8("secante"));

        verticalLayout->addWidget(secante);

        mult_Raizes = new QPushButton(layoutWidget);
        mult_Raizes->setObjectName(QString::fromUtf8("mult_Raizes"));

        verticalLayout->addWidget(mult_Raizes);


        retranslateUi(Metodos_Abiertos);

        QMetaObject::connectSlotsByName(Metodos_Abiertos);
    } // setupUi

    void retranslateUi(QWidget *Metodos_Abiertos)
    {
        Metodos_Abiertos->setWindowTitle(QApplication::translate("Metodos_Abiertos", "Form", nullptr));
        back->setText(QApplication::translate("Metodos_Abiertos", "Back", nullptr));
        punto_Fijo->setText(QApplication::translate("Metodos_Abiertos", "Punto fijo", nullptr));
        newton->setText(QApplication::translate("Metodos_Abiertos", "Newton", nullptr));
        secante->setText(QApplication::translate("Metodos_Abiertos", "Secante", nullptr));
        mult_Raizes->setText(QApplication::translate("Metodos_Abiertos", "Multiples Raices", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Metodos_Abiertos: public Ui_Metodos_Abiertos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METODOS_ABIERTOS_H
