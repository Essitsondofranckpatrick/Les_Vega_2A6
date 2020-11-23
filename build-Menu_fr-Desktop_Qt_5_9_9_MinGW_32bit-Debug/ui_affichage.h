/********************************************************************************
** Form generated from reading UI file 'affichage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHAGE_H
#define UI_AFFICHAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Affichage
{
public:
    QTableView *tableView;

    void setupUi(QDialog *Affichage)
    {
        if (Affichage->objectName().isEmpty())
            Affichage->setObjectName(QStringLiteral("Affichage"));
        Affichage->resize(810, 498);
        tableView = new QTableView(Affichage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 50, 621, 341));

        retranslateUi(Affichage);

        QMetaObject::connectSlotsByName(Affichage);
    } // setupUi

    void retranslateUi(QDialog *Affichage)
    {
        Affichage->setWindowTitle(QApplication::translate("Affichage", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Affichage: public Ui_Affichage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHAGE_H
