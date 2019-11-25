/********************************************************************************
** Form generated from reading UI file 'metodos_interpolacion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METODOS_INTERPOLACION_H
#define UI_METODOS_INTERPOLACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Metodos_Interpolacion
{
public:
    QPushButton *back;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *newton_Dif;
    QPushButton *lagrange;
    QPushButton *sp_Lineal;
    QPushButton *sp_Cuadratico;
    QPushButton *sp_Cubico;

    void setupUi(QFrame *Metodos_Interpolacion)
    {
        if (Metodos_Interpolacion->objectName().isEmpty())
            Metodos_Interpolacion->setObjectName(QString::fromUtf8("Metodos_Interpolacion"));
        Metodos_Interpolacion->resize(640, 480);
        back = new QPushButton(Metodos_Interpolacion);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(420, 390, 75, 24));
        widget = new QWidget(Metodos_Interpolacion);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 100, 261, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        newton_Dif = new QPushButton(widget);
        newton_Dif->setObjectName(QString::fromUtf8("newton_Dif"));

        verticalLayout->addWidget(newton_Dif);

        lagrange = new QPushButton(widget);
        lagrange->setObjectName(QString::fromUtf8("lagrange"));

        verticalLayout->addWidget(lagrange);

        sp_Lineal = new QPushButton(widget);
        sp_Lineal->setObjectName(QString::fromUtf8("sp_Lineal"));

        verticalLayout->addWidget(sp_Lineal);

        sp_Cuadratico = new QPushButton(widget);
        sp_Cuadratico->setObjectName(QString::fromUtf8("sp_Cuadratico"));

        verticalLayout->addWidget(sp_Cuadratico);

        sp_Cubico = new QPushButton(widget);
        sp_Cubico->setObjectName(QString::fromUtf8("sp_Cubico"));

        verticalLayout->addWidget(sp_Cubico);


        retranslateUi(Metodos_Interpolacion);

        QMetaObject::connectSlotsByName(Metodos_Interpolacion);
    } // setupUi

    void retranslateUi(QFrame *Metodos_Interpolacion)
    {
        Metodos_Interpolacion->setWindowTitle(QApplication::translate("Metodos_Interpolacion", "Frame", nullptr));
        back->setText(QApplication::translate("Metodos_Interpolacion", "Back", nullptr));
        newton_Dif->setText(QApplication::translate("Metodos_Interpolacion", "Newton diferencias divididas", nullptr));
        lagrange->setText(QApplication::translate("Metodos_Interpolacion", "Lagrange", nullptr));
        sp_Lineal->setText(QApplication::translate("Metodos_Interpolacion", "Spline lineal", nullptr));
        sp_Cuadratico->setText(QApplication::translate("Metodos_Interpolacion", "Spline cuadratico", nullptr));
        sp_Cubico->setText(QApplication::translate("Metodos_Interpolacion", "Spline cubico", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Metodos_Interpolacion: public Ui_Metodos_Interpolacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METODOS_INTERPOLACION_H
