/********************************************************************************
** Form generated from reading UI file 'doolittle.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOOLITTLE_H
#define UI_DOOLITTLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Doolittle
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableWidget *matrizA;

    void setupUi(QWidget *Doolittle)
    {
        if (Doolittle->objectName().isEmpty())
            Doolittle->setObjectName(QString::fromUtf8("Doolittle"));
        Doolittle->resize(640, 480);
        label = new QLabel(Doolittle);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 55, 16));
        label_2 = new QLabel(Doolittle);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 20, 55, 16));
        matrizA = new QTableWidget(Doolittle);
        matrizA->setObjectName(QString::fromUtf8("matrizA"));
        matrizA->setEnabled(true);
        matrizA->setGeometry(QRect(20, 70, 256, 241));

        retranslateUi(Doolittle);

        QMetaObject::connectSlotsByName(Doolittle);
    } // setupUi

    void retranslateUi(QWidget *Doolittle)
    {
        Doolittle->setWindowTitle(QApplication::translate("Doolittle", "Form", nullptr));
        label->setText(QApplication::translate("Doolittle", "Matriz A", nullptr));
        label_2->setText(QApplication::translate("Doolittle", "Vector b", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doolittle: public Ui_Doolittle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOOLITTLE_H
