/********************************************************************************
** Form generated from reading UI file 'eliminacion_gaussiana.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINACION_GAUSSIANA_H
#define UI_ELIMINACION_GAUSSIANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Eliminacion_Gaussiana
{
public:
    QPushButton *back;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *simple;
    QPushButton *p_parcial;
    QPushButton *p_total;

    void setupUi(QFrame *Eliminacion_Gaussiana)
    {
        if (Eliminacion_Gaussiana->objectName().isEmpty())
            Eliminacion_Gaussiana->setObjectName(QString::fromUtf8("Eliminacion_Gaussiana"));
        Eliminacion_Gaussiana->resize(640, 480);
        back = new QPushButton(Eliminacion_Gaussiana);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(420, 400, 75, 24));
        widget = new QWidget(Eliminacion_Gaussiana);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 150, 341, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        simple = new QPushButton(widget);
        simple->setObjectName(QString::fromUtf8("simple"));

        verticalLayout->addWidget(simple);

        p_parcial = new QPushButton(widget);
        p_parcial->setObjectName(QString::fromUtf8("p_parcial"));

        verticalLayout->addWidget(p_parcial);

        p_total = new QPushButton(widget);
        p_total->setObjectName(QString::fromUtf8("p_total"));

        verticalLayout->addWidget(p_total);


        retranslateUi(Eliminacion_Gaussiana);

        QMetaObject::connectSlotsByName(Eliminacion_Gaussiana);
    } // setupUi

    void retranslateUi(QFrame *Eliminacion_Gaussiana)
    {
        Eliminacion_Gaussiana->setWindowTitle(QApplication::translate("Eliminacion_Gaussiana", "Frame", nullptr));
        back->setText(QApplication::translate("Eliminacion_Gaussiana", "Back", nullptr));
        simple->setText(QApplication::translate("Eliminacion_Gaussiana", "Simple", nullptr));
        p_parcial->setText(QApplication::translate("Eliminacion_Gaussiana", "Povoteo parcial", nullptr));
        p_total->setText(QApplication::translate("Eliminacion_Gaussiana", "Pivoteo total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eliminacion_Gaussiana: public Ui_Eliminacion_Gaussiana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINACION_GAUSSIANA_H
