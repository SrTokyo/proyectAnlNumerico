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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Doolittle
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *Doolittle)
    {
        if (Doolittle->objectName().isEmpty())
            Doolittle->setObjectName(QString::fromUtf8("Doolittle"));
        Doolittle->resize(640, 480);
        label = new QLabel(Doolittle);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 55, 16));
        gridLayoutWidget = new QWidget(Doolittle);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 70, 441, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Doolittle);

        QMetaObject::connectSlotsByName(Doolittle);
    } // setupUi

    void retranslateUi(QWidget *Doolittle)
    {
        Doolittle->setWindowTitle(QApplication::translate("Doolittle", "Form", nullptr));
        label->setText(QApplication::translate("Doolittle", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doolittle: public Ui_Doolittle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOOLITTLE_H
