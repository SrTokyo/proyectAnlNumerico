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
    QPushButton *back;
    QPushButton *intro_Termino;
    QPushButton *intro_Operador;

    void setupUi(QFrame *Busqueda_Incremental)
    {
        if (Busqueda_Incremental->objectName().isEmpty())
            Busqueda_Incremental->setObjectName(QString::fromUtf8("Busqueda_Incremental"));
        Busqueda_Incremental->resize(640, 480);
        Busqueda_Incremental->setTabletTracking(false);
        done = new QPushButton(Busqueda_Incremental);
        done->setObjectName(QString::fromUtf8("done"));
        done->setGeometry(QRect(150, 310, 75, 24));
        back = new QPushButton(Busqueda_Incremental);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(370, 310, 75, 24));
        intro_Termino = new QPushButton(Busqueda_Incremental);
        intro_Termino->setObjectName(QString::fromUtf8("intro_Termino"));
        intro_Termino->setGeometry(QRect(150, 190, 75, 24));
        intro_Operador = new QPushButton(Busqueda_Incremental);
        intro_Operador->setObjectName(QString::fromUtf8("intro_Operador"));
        intro_Operador->setGeometry(QRect(370, 190, 75, 24));

        retranslateUi(Busqueda_Incremental);

        QMetaObject::connectSlotsByName(Busqueda_Incremental);
    } // setupUi

    void retranslateUi(QFrame *Busqueda_Incremental)
    {
        Busqueda_Incremental->setWindowTitle(QApplication::translate("Busqueda_Incremental", "Busqueda Incremental", nullptr));
        done->setText(QApplication::translate("Busqueda_Incremental", "Done", nullptr));
        back->setText(QApplication::translate("Busqueda_Incremental", "back", nullptr));
        intro_Termino->setText(QApplication::translate("Busqueda_Incremental", "Termino", nullptr));
        intro_Operador->setText(QApplication::translate("Busqueda_Incremental", "Operador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Busqueda_Incremental: public Ui_Busqueda_Incremental {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSQUEDA_INCREMENTAL_H
