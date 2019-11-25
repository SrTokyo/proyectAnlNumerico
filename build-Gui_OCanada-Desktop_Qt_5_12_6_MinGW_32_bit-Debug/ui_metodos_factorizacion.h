/********************************************************************************
** Form generated from reading UI file 'metodos_factorizacion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METODOS_FACTORIZACION_H
#define UI_METODOS_FACTORIZACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Metodos_Factorizacion
{
public:
    QPushButton *back;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *crout;
    QPushButton *doolittle;
    QPushButton *cholesky;

    void setupUi(QFrame *Metodos_Factorizacion)
    {
        if (Metodos_Factorizacion->objectName().isEmpty())
            Metodos_Factorizacion->setObjectName(QString::fromUtf8("Metodos_Factorizacion"));
        Metodos_Factorizacion->resize(640, 480);
        back = new QPushButton(Metodos_Factorizacion);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(390, 410, 75, 24));
        widget = new QWidget(Metodos_Factorizacion);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 130, 311, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        crout = new QPushButton(widget);
        crout->setObjectName(QString::fromUtf8("crout"));

        verticalLayout->addWidget(crout);

        doolittle = new QPushButton(widget);
        doolittle->setObjectName(QString::fromUtf8("doolittle"));

        verticalLayout->addWidget(doolittle);

        cholesky = new QPushButton(widget);
        cholesky->setObjectName(QString::fromUtf8("cholesky"));

        verticalLayout->addWidget(cholesky);


        retranslateUi(Metodos_Factorizacion);

        QMetaObject::connectSlotsByName(Metodos_Factorizacion);
    } // setupUi

    void retranslateUi(QFrame *Metodos_Factorizacion)
    {
        Metodos_Factorizacion->setWindowTitle(QApplication::translate("Metodos_Factorizacion", "Frame", nullptr));
        back->setText(QApplication::translate("Metodos_Factorizacion", "Back", nullptr));
        crout->setText(QApplication::translate("Metodos_Factorizacion", "Crout", nullptr));
        doolittle->setText(QApplication::translate("Metodos_Factorizacion", "Doolittle", nullptr));
        cholesky->setText(QApplication::translate("Metodos_Factorizacion", "Cholesky", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Metodos_Factorizacion: public Ui_Metodos_Factorizacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METODOS_FACTORIZACION_H
