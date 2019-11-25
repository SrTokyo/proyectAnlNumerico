/********************************************************************************
** Form generated from reading UI file 'menu_cholesky.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_CHOLESKY_H
#define UI_MENU_CHOLESKY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu_Cholesky
{
public:
    QPushButton *back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *simple;
    QPushButton *pv_Parcial;
    QPushButton *pv_Total;
    QLineEdit *matriz_N;
    QLabel *label;

    void setupUi(QFrame *Menu_Cholesky)
    {
        if (Menu_Cholesky->objectName().isEmpty())
            Menu_Cholesky->setObjectName(QString::fromUtf8("Menu_Cholesky"));
        Menu_Cholesky->resize(640, 480);
        back = new QPushButton(Menu_Cholesky);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(430, 380, 75, 24));
        layoutWidget = new QWidget(Menu_Cholesky);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 140, 251, 171));
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

        matriz_N = new QLineEdit(Menu_Cholesky);
        matriz_N->setObjectName(QString::fromUtf8("matriz_N"));
        matriz_N->setGeometry(QRect(200, 80, 251, 31));
        label = new QLabel(Menu_Cholesky);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 30, 261, 20));

        retranslateUi(Menu_Cholesky);

        QMetaObject::connectSlotsByName(Menu_Cholesky);
    } // setupUi

    void retranslateUi(QFrame *Menu_Cholesky)
    {
        Menu_Cholesky->setWindowTitle(QApplication::translate("Menu_Cholesky", "Frame", nullptr));
        back->setText(QApplication::translate("Menu_Cholesky", "Back", nullptr));
        simple->setText(QApplication::translate("Menu_Cholesky", "Simple", nullptr));
        pv_Parcial->setText(QApplication::translate("Menu_Cholesky", "Pivoteo parcial", nullptr));
        pv_Total->setText(QApplication::translate("Menu_Cholesky", "Pivoteo total", nullptr));
        matriz_N->setText(QString());
        label->setText(QApplication::translate("Menu_Cholesky", "Ingrese el tama\303\261o de la matriz de NxN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu_Cholesky: public Ui_Menu_Cholesky {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_CHOLESKY_H
