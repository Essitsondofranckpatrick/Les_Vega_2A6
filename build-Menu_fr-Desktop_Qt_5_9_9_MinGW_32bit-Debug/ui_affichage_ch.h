/********************************************************************************
** Form generated from reading UI file 'affichage_ch.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHAGE_CH_H
#define UI_AFFICHAGE_CH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Affichage_ch
{
public:
    QTableView *tableView;

    void setupUi(QDialog *Affichage_ch)
    {
        if (Affichage_ch->objectName().isEmpty())
            Affichage_ch->setObjectName(QStringLiteral("Affichage_ch"));
        Affichage_ch->resize(818, 437);
        tableView = new QTableView(Affichage_ch);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 40, 601, 301));

        retranslateUi(Affichage_ch);

        QMetaObject::connectSlotsByName(Affichage_ch);
    } // setupUi

    void retranslateUi(QDialog *Affichage_ch)
    {
        Affichage_ch->setWindowTitle(QApplication::translate("Affichage_ch", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Affichage_ch: public Ui_Affichage_ch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHAGE_CH_H
