/********************************************************************************
** Form generated from reading UI file 'busqueda_incremental.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSQUEDA_INCREMENTAL_H
#define UI_BUSQUEDA_INCREMENTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Busqueda_Incremental
{
public:
    QPushButton *done;
    QPushButton *introducir_funcion;
    QPushButton *back;

    void setupUi(QFrame *Busqueda_Incremental)
    {
        if (Busqueda_Incremental->objectName().isEmpty())
            Busqueda_Incremental->setObjectName(QString::fromUtf8("Busqueda_Incremental"));
        Busqueda_Incremental->resize(640, 480);
        Busqueda_Incremental->setTabletTracking(false);
        done = new QPushButton(Busqueda_Incremental);
        done->setObjectName(QString::fromUtf8("done"));
        done->setGeometry(QRect(150, 310, 75, 24));
        introducir_funcion = new QPushButton(Busqueda_Incremental);
        introducir_funcion->setObjectName(QString::fromUtf8("introducir_funcion"));
        introducir_funcion->setGeometry(QRect(250, 190, 121, 24));
        back = new QPushButton(Busqueda_Incremental);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(370, 310, 75, 24));

        retranslateUi(Busqueda_Incremental);

        QMetaObject::connectSlotsByName(Busqueda_Incremental);
    } // setupUi

    void retranslateUi(QFrame *Busqueda_Incremental)
    {
        Busqueda_Incremental->setWindowTitle(QApplication::translate("Busqueda_Incremental", "Busqueda Incremental", nullptr));
        done->setText(QApplication::translate("Busqueda_Incremental", "Done", nullptr));
        introducir_funcion->setText(QApplication::translate("Busqueda_Incremental", "introducir funcion", nullptr));
        back->setText(QApplication::translate("Busqueda_Incremental", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Busqueda_Incremental: public Ui_Busqueda_Incremental {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSQUEDA_INCREMENTAL_H
