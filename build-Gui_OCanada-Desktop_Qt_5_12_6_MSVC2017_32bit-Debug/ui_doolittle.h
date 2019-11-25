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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Doolittle
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *matrizALay;
    QLineEdit *lineEdit;

    void setupUi(QFrame *Doolittle)
    {
        if (Doolittle->objectName().isEmpty())
            Doolittle->setObjectName(QString::fromUtf8("Doolittle"));
        Doolittle->resize(640, 480);
        scrollArea = new QScrollArea(Doolittle);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 9, 611, 461));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 609, 459));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 141, 16));
        gridLayoutWidget = new QWidget(scrollAreaWidgetContents);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 50, 321, 141));
        matrizALay = new QGridLayout(gridLayoutWidget);
        matrizALay->setObjectName(QString::fromUtf8("matrizALay"));
        matrizALay->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        matrizALay->addWidget(lineEdit, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Doolittle);

        QMetaObject::connectSlotsByName(Doolittle);
    } // setupUi

    void retranslateUi(QFrame *Doolittle)
    {
        Doolittle->setWindowTitle(QApplication::translate("Doolittle", "Frame", nullptr));
        label->setText(QApplication::translate("Doolittle", "Ingrese la matriz A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doolittle: public Ui_Doolittle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOOLITTLE_H
