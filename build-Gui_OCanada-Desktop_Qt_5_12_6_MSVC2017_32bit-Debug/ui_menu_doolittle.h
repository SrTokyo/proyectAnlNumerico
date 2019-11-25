/********************************************************************************
** Form generated from reading UI file 'menu_doolittle.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_DOOLITTLE_H
#define UI_MENU_DOOLITTLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu_Doolittle
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *simple;
    QPushButton *pv_Parcial;
    QPushButton *pv_Total;
    QPushButton *back;
    QLabel *label;
    QLineEdit *matriz_N;

    void setupUi(QFrame *Menu_Doolittle)
    {
        if (Menu_Doolittle->objectName().isEmpty())
            Menu_Doolittle->setObjectName(QString::fromUtf8("Menu_Doolittle"));
        Menu_Doolittle->resize(640, 480);
        layoutWidget = new QWidget(Menu_Doolittle);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 150, 251, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        simple = new QPushButton(layoutWidget);
        simple->setObjectName(QString::fromUtf8("simple"));

        verticalLayout->addWidget(simple);

        pv_Parcial = new QPushButton(layoutWidget);
        pv_Parcial->setObjectName(QString::fromUtf8("pv_Parcial"));

        verticalLayout->addWidget(pv_Parcial);

        pv_Total = new QPushButton(layoutWidget);
        pv_Total->setObjectName(QString::fromUtf8("pv_Total"));

        verticalLayout->addWidget(pv_Total);

        back = new QPushButton(Menu_Doolittle);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(410, 380, 75, 24));
        label = new QLabel(Menu_Doolittle);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 40, 261, 20));
        matriz_N = new QLineEdit(Menu_Doolittle);
        matriz_N->setObjectName(QString::fromUtf8("matriz_N"));
        matriz_N->setGeometry(QRect(170, 90, 251, 31));

        retranslateUi(Menu_Doolittle);

        QMetaObject::connectSlotsByName(Menu_Doolittle);
    } // setupUi

    void retranslateUi(QFrame *Menu_Doolittle)
    {
        Menu_Doolittle->setWindowTitle(QApplication::translate("Menu_Doolittle", "Frame", nullptr));
        simple->setText(QApplication::translate("Menu_Doolittle", "Simple", nullptr));
        pv_Parcial->setText(QApplication::translate("Menu_Doolittle", "Pivoteo parcial", nullptr));
        pv_Total->setText(QApplication::translate("Menu_Doolittle", "Pivoteo total", nullptr));
        back->setText(QApplication::translate("Menu_Doolittle", "Back", nullptr));
        label->setText(QApplication::translate("Menu_Doolittle", "Ingrese el tama\303\261o de la matriz de NxN", nullptr));
        matriz_N->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu_Doolittle: public Ui_Menu_Doolittle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_DOOLITTLE_H
