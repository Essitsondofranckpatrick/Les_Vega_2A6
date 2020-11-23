/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Id_even_D_ajout;
    QLineEdit *lineEdit_Type_even_D_ajout;
    QPushButton *pushButton;
    QWidget *tab_4;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_Id_mod_even_ID;
    QLabel *label_10;
    QLineEdit *lineEdit_type_even_mod_D;
    QLabel *label_11;
    QLineEdit *lineEdit_nmbre_mod_even_D;
    QPushButton *pushButton_3;
    QWidget *tab_5;
    QLabel *label_16;
    QWidget *tab_6;
    QTableView *tableView_2;
    QWidget *tab_7;
    QTableView *tableView_4;
    QLabel *label_18;
    QWidget *tab_8;
    QTableView *tableView_5;
    QLabel *label_19;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_9;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_Num_cham_D_ajout;
    QLabel *label_6;
    QLineEdit *lineEdit_type_ajout_Cham_D;
    QLabel *label_7;
    QLineEdit *lineEdit_nmbre_cham_ajout_D;
    QPushButton *pushButton_2;
    QWidget *tab_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_num_ch_Mod_D;
    QLineEdit *lineEdit_type_ch_D;
    QLineEdit *lineEdit_nmbre_ch_D;
    QWidget *tab_11;
    QLabel *label_17;
    QWidget *tab_12;
    QTableView *tableView;
    QWidget *tab_13;
    QTableView *tableView_3;
    QLabel *label_20;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1044, 646);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 851, 601));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 851, 581));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 321, 531));
        label->setPixmap(QPixmap(QString::fromUtf8("../conf\303\251rence2.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 30, 141, 41));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 100, 141, 41));
        lineEdit_Id_even_D_ajout = new QLineEdit(tab_3);
        lineEdit_Id_even_D_ajout->setObjectName(QStringLiteral("lineEdit_Id_even_D_ajout"));
        lineEdit_Id_even_D_ajout->setGeometry(QRect(510, 40, 191, 22));
        lineEdit_Type_even_D_ajout = new QLineEdit(tab_3);
        lineEdit_Type_even_D_ajout->setObjectName(QStringLiteral("lineEdit_Type_even_D_ajout"));
        lineEdit_Type_even_D_ajout->setGeometry(QRect(510, 110, 191, 22));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 240, 171, 41));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 351, 531));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../mod.jpg")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(370, 30, 71, 41));
        lineEdit_Id_mod_even_ID = new QLineEdit(tab_4);
        lineEdit_Id_mod_even_ID->setObjectName(QStringLiteral("lineEdit_Id_mod_even_ID"));
        lineEdit_Id_mod_even_ID->setGeometry(QRect(470, 40, 161, 31));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 130, 91, 31));
        lineEdit_type_even_mod_D = new QLineEdit(tab_4);
        lineEdit_type_even_mod_D->setObjectName(QStringLiteral("lineEdit_type_even_mod_D"));
        lineEdit_type_even_mod_D->setGeometry(QRect(470, 130, 161, 31));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(370, 220, 161, 31));
        lineEdit_nmbre_mod_even_D = new QLineEdit(tab_4);
        lineEdit_nmbre_mod_even_D->setObjectName(QStringLiteral("lineEdit_nmbre_mod_even_D"));
        lineEdit_nmbre_mod_even_D->setGeometry(QRect(550, 220, 161, 31));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(670, 320, 131, 51));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 10, 341, 521));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../supprimer.jpg")));
        label_16->setScaledContents(true);
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableView_2 = new QTableView(tab_6);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 20, 791, 501));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tableView_4 = new QTableView(tab_7);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(440, 200, 381, 341));
        label_18 = new QLabel(tab_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 20, 341, 511));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../rechercher.jpg")));
        label_18->setScaledContents(true);
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tableView_5 = new QTableView(tab_8);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(440, 240, 401, 301));
        label_19 = new QLabel(tab_8);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 10, 381, 531));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../rech.jpg")));
        label_19->setScaledContents(true);
        tabWidget_2->addTab(tab_8, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 891, 581));
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_4 = new QLabel(tab_9);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 351, 521));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../chambre2.jpg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(tab_9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 50, 181, 41));
        lineEdit_Num_cham_D_ajout = new QLineEdit(tab_9);
        lineEdit_Num_cham_D_ajout->setObjectName(QStringLiteral("lineEdit_Num_cham_D_ajout"));
        lineEdit_Num_cham_D_ajout->setGeometry(QRect(590, 50, 191, 31));
        label_6 = new QLabel(tab_9);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(380, 140, 141, 41));
        lineEdit_type_ajout_Cham_D = new QLineEdit(tab_9);
        lineEdit_type_ajout_Cham_D->setObjectName(QStringLiteral("lineEdit_type_ajout_Cham_D"));
        lineEdit_type_ajout_Cham_D->setGeometry(QRect(590, 140, 191, 31));
        label_7 = new QLabel(tab_9);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 230, 161, 41));
        lineEdit_nmbre_cham_ajout_D = new QLineEdit(tab_9);
        lineEdit_nmbre_cham_ajout_D->setObjectName(QStringLiteral("lineEdit_nmbre_cham_ajout_D"));
        lineEdit_nmbre_cham_ajout_D->setGeometry(QRect(590, 240, 191, 31));
        pushButton_2 = new QPushButton(tab_9);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(682, 380, 131, 51));
        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_12 = new QLabel(tab_10);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 10, 321, 531));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../modf.jpg")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(tab_10);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(340, 30, 101, 31));
        label_14 = new QLabel(tab_10);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(340, 100, 81, 31));
        label_15 = new QLabel(tab_10);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(340, 180, 101, 31));
        lineEdit_num_ch_Mod_D = new QLineEdit(tab_10);
        lineEdit_num_ch_Mod_D->setObjectName(QStringLiteral("lineEdit_num_ch_Mod_D"));
        lineEdit_num_ch_Mod_D->setGeometry(QRect(470, 30, 151, 31));
        lineEdit_type_ch_D = new QLineEdit(tab_10);
        lineEdit_type_ch_D->setObjectName(QStringLiteral("lineEdit_type_ch_D"));
        lineEdit_type_ch_D->setGeometry(QRect(470, 100, 151, 31));
        lineEdit_nmbre_ch_D = new QLineEdit(tab_10);
        lineEdit_nmbre_ch_D->setObjectName(QStringLiteral("lineEdit_nmbre_ch_D"));
        lineEdit_nmbre_ch_D->setGeometry(QRect(470, 180, 151, 31));
        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_17 = new QLabel(tab_11);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 10, 371, 521));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../Trier.jpg")));
        label_17->setScaledContents(true);
        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tableView = new QTableView(tab_12);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 20, 781, 511));
        tabWidget_3->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        tableView_3 = new QTableView(tab_13);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(420, 210, 411, 321));
        label_20 = new QLabel(tab_13);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 10, 371, 521));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../Mail.jpg")));
        label_20->setScaledContents(true);
        tabWidget_3->addTab(tab_13, QString());
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Dialog", "ID Ev\303\251nement:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "Type d'\303\251v\303\251nement:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("Dialog", "New Id:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog", "New Type:", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog", "Nombre de Chambre:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        label_16->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("Dialog", "Afficher", Q_NULLPTR));
        label_18->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("Dialog", "Rechercher", Q_NULLPTR));
        label_19->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("Dialog", "Imprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "G\303\251rer Les Ev\303\251nements", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Dialog", "Num\303\251ro de la Chambre:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "Type de Chambre:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "Nombre de Chambre:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("Dialog", "Num\303\251ro_ch:", Q_NULLPTR));
        label_14->setText(QApplication::translate("Dialog", "Type_ch:", Q_NULLPTR));
        label_15->setText(QApplication::translate("Dialog", "Nombre_ch:", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        label_17->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QApplication::translate("Dialog", "Afficher", Q_NULLPTR));
        label_20->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_13), QApplication::translate("Dialog", "Mailling", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "G\303\251rer Les Chambres", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
