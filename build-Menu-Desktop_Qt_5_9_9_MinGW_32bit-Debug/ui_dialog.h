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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
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
    QLineEdit *lineEdit_ajouter_even_id_D;
    QLabel *label_3;
    QLineEdit *lineEdit_Ajouter_even_type_D;
    QPushButton *pushButton;
    QWidget *tab_4;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_sup_even_id_D;
    QPushButton *pushButton_2;
    QWidget *tab_7;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_Mod_even_id_D;
    QLineEdit *lineEdit_Type_even_mod_D;
    QPushButton *pushButton_3;
    QWidget *tab_8;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QTableView *tableView_afficher_2;
    QComboBox *comboBox_even_recherche_D;
    QWidget *tab_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_imp_even_id_D;
    QLabel *label_12;
    QLineEdit *lineEdit_Type_even_imp_D;
    QPushButton *pushButton_5;
    QTableView *tableView_dialog_imprimer_even;
    QWidget *tab_12;
    QTableView *tableView;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_4;
    QLabel *label_15;
    QRadioButton *radioButton_unik_add_cham_D;
    QRadioButton *radioButton_Double_cham_Add_D;
    QLabel *label_16;
    QSpinBox *spinBox_nombre_cham_add_D;
    QPushButton *pushButton_6;
    QWidget *tab_6;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_ID_Sup_Cham_D;
    QPushButton *pushButton_7;
    QWidget *tab_11;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *lineEdit_num_cham_mod_D;
    QRadioButton *radioButton_unik_cham_Mod_D;
    QRadioButton *radioButton_Doubl_Cham_Mod_D;
    QSpinBox *spinBox_nomb_cham_Mod_D;
    QPushButton *pushButton_9;
    QWidget *tab_13;
    QLabel *label_24;
    QLabel *label_25;
    QComboBox *comboBox_afficher_D_cham;
    QTableView *tableView_dialog_afficher_cham;
    QPushButton *pushButton_10;
    QWidget *tab_10;
    QLabel *label_23;
    QLineEdit *lineEdit_mailing_cham_D;
    QPushButton *pushButton_8;
    QTableView *tableView_dialog_chambre_mail;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1205, 744);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 20, 981, 581));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 981, 561));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 391, 511));
        label->setPixmap(QPixmap(QString::fromUtf8("../conf\303\251rence2.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 50, 211, 21));
        lineEdit_ajouter_even_id_D = new QLineEdit(tab_3);
        lineEdit_ajouter_even_id_D->setObjectName(QStringLiteral("lineEdit_ajouter_even_id_D"));
        lineEdit_ajouter_even_id_D->setGeometry(QRect(650, 50, 271, 22));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(420, 120, 151, 21));
        lineEdit_Ajouter_even_type_D = new QLineEdit(tab_3);
        lineEdit_Ajouter_even_type_D->setObjectName(QStringLiteral("lineEdit_Ajouter_even_type_D"));
        lineEdit_Ajouter_even_type_D->setGeometry(QRect(650, 120, 271, 22));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(720, 360, 161, 28));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 311, 501));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../supprimer.jpg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 40, 101, 21));
        lineEdit_sup_even_id_D = new QLineEdit(tab_4);
        lineEdit_sup_even_id_D->setObjectName(QStringLiteral("lineEdit_sup_even_id_D"));
        lineEdit_sup_even_id_D->setGeometry(QRect(470, 40, 351, 22));
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 410, 121, 28));
        tabWidget_2->addTab(tab_4, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_6 = new QLabel(tab_7);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 361, 501));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../mod.jpg")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(tab_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(390, 80, 171, 21));
        label_8 = new QLabel(tab_7);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(390, 160, 121, 21));
        lineEdit_Mod_even_id_D = new QLineEdit(tab_7);
        lineEdit_Mod_even_id_D->setObjectName(QStringLiteral("lineEdit_Mod_even_id_D"));
        lineEdit_Mod_even_id_D->setGeometry(QRect(590, 80, 271, 22));
        lineEdit_Type_even_mod_D = new QLineEdit(tab_7);
        lineEdit_Type_even_mod_D->setObjectName(QStringLiteral("lineEdit_Type_even_mod_D"));
        lineEdit_Type_even_mod_D->setGeometry(QRect(590, 160, 271, 22));
        pushButton_3 = new QPushButton(tab_7);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 420, 131, 28));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_9 = new QLabel(tab_8);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 341, 501));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../search.jpg")));
        label_9->setScaledContents(true);
        pushButton_4 = new QPushButton(tab_8);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(530, 90, 181, 28));
        tableView_afficher_2 = new QTableView(tab_8);
        tableView_afficher_2->setObjectName(QStringLiteral("tableView_afficher_2"));
        tableView_afficher_2->setGeometry(QRect(410, 170, 481, 331));
        comboBox_even_recherche_D = new QComboBox(tab_8);
        comboBox_even_recherche_D->setObjectName(QStringLiteral("comboBox_even_recherche_D"));
        comboBox_even_recherche_D->setGeometry(QRect(440, 30, 351, 22));
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_10 = new QLabel(tab_9);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 381, 501));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../impri.jpg")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(tab_9);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(420, 70, 211, 21));
        lineEdit_imp_even_id_D = new QLineEdit(tab_9);
        lineEdit_imp_even_id_D->setObjectName(QStringLiteral("lineEdit_imp_even_id_D"));
        lineEdit_imp_even_id_D->setGeometry(QRect(650, 70, 311, 22));
        label_12 = new QLabel(tab_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(420, 150, 151, 21));
        lineEdit_Type_even_imp_D = new QLineEdit(tab_9);
        lineEdit_Type_even_imp_D->setObjectName(QStringLiteral("lineEdit_Type_even_imp_D"));
        lineEdit_Type_even_imp_D->setGeometry(QRect(650, 150, 301, 22));
        pushButton_5 = new QPushButton(tab_9);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(790, 400, 151, 31));
        tableView_dialog_imprimer_even = new QTableView(tab_9);
        tableView_dialog_imprimer_even->setObjectName(QStringLiteral("tableView_dialog_imprimer_even"));
        tableView_dialog_imprimer_even->setGeometry(QRect(420, 230, 331, 271));
        tabWidget_2->addTab(tab_9, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tableView = new QTableView(tab_12);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(160, 50, 651, 431));
        tabWidget_2->addTab(tab_12, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 981, 561));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 10, 371, 501));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../hop.jpg")));
        label_13->setScaledContents(true);
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(400, 50, 181, 21));
        lineEdit_4 = new QLineEdit(tab_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(610, 50, 321, 22));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(400, 120, 141, 21));
        radioButton_unik_add_cham_D = new QRadioButton(tab_5);
        radioButton_unik_add_cham_D->setObjectName(QStringLiteral("radioButton_unik_add_cham_D"));
        radioButton_unik_add_cham_D->setGeometry(QRect(620, 120, 95, 20));
        radioButton_Double_cham_Add_D = new QRadioButton(tab_5);
        radioButton_Double_cham_Add_D->setObjectName(QStringLiteral("radioButton_Double_cham_Add_D"));
        radioButton_Double_cham_Add_D->setGeometry(QRect(620, 170, 95, 20));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(400, 220, 161, 16));
        spinBox_nombre_cham_add_D = new QSpinBox(tab_5);
        spinBox_nombre_cham_add_D->setObjectName(QStringLiteral("spinBox_nombre_cham_add_D"));
        spinBox_nombre_cham_add_D->setGeometry(QRect(630, 220, 51, 22));
        spinBox_nombre_cham_add_D->setMaximum(1000);
        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(770, 420, 161, 28));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 10, 401, 511));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../supprimer.jpg")));
        label_17->setScaledContents(true);
        label_18 = new QLabel(tab_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(420, 50, 91, 21));
        lineEdit_ID_Sup_Cham_D = new QLineEdit(tab_6);
        lineEdit_ID_Sup_Cham_D->setObjectName(QStringLiteral("lineEdit_ID_Sup_Cham_D"));
        lineEdit_ID_Sup_Cham_D->setGeometry(QRect(540, 50, 291, 22));
        pushButton_7 = new QPushButton(tab_6);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(760, 420, 171, 28));
        tabWidget_3->addTab(tab_6, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_19 = new QLabel(tab_11);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 10, 381, 511));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../modf.jpg")));
        label_19->setScaledContents(true);
        label_20 = new QLabel(tab_11);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(420, 30, 101, 21));
        label_21 = new QLabel(tab_11);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(420, 100, 101, 21));
        label_22 = new QLabel(tab_11);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(420, 220, 81, 16));
        lineEdit_num_cham_mod_D = new QLineEdit(tab_11);
        lineEdit_num_cham_mod_D->setObjectName(QStringLiteral("lineEdit_num_cham_mod_D"));
        lineEdit_num_cham_mod_D->setGeometry(QRect(540, 30, 251, 22));
        radioButton_unik_cham_Mod_D = new QRadioButton(tab_11);
        radioButton_unik_cham_Mod_D->setObjectName(QStringLiteral("radioButton_unik_cham_Mod_D"));
        radioButton_unik_cham_Mod_D->setGeometry(QRect(550, 110, 95, 20));
        radioButton_Doubl_Cham_Mod_D = new QRadioButton(tab_11);
        radioButton_Doubl_Cham_Mod_D->setObjectName(QStringLiteral("radioButton_Doubl_Cham_Mod_D"));
        radioButton_Doubl_Cham_Mod_D->setGeometry(QRect(550, 150, 95, 20));
        spinBox_nomb_cham_Mod_D = new QSpinBox(tab_11);
        spinBox_nomb_cham_Mod_D->setObjectName(QStringLiteral("spinBox_nomb_cham_Mod_D"));
        spinBox_nomb_cham_Mod_D->setGeometry(QRect(570, 220, 42, 22));
        pushButton_9 = new QPushButton(tab_11);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(790, 390, 131, 51));
        tabWidget_3->addTab(tab_11, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        label_24 = new QLabel(tab_13);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(440, 50, 71, 21));
        label_25 = new QLabel(tab_13);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 10, 401, 501));
        label_25->setPixmap(QPixmap(QString::fromUtf8("../Trier.jpg")));
        label_25->setScaledContents(true);
        comboBox_afficher_D_cham = new QComboBox(tab_13);
        comboBox_afficher_D_cham->setObjectName(QStringLiteral("comboBox_afficher_D_cham"));
        comboBox_afficher_D_cham->setGeometry(QRect(530, 50, 291, 22));
        tableView_dialog_afficher_cham = new QTableView(tab_13);
        tableView_dialog_afficher_cham->setObjectName(QStringLiteral("tableView_dialog_afficher_cham"));
        tableView_dialog_afficher_cham->setGeometry(QRect(460, 180, 501, 291));
        pushButton_10 = new QPushButton(tab_13);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(840, 120, 93, 28));
        tabWidget_3->addTab(tab_13, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_23 = new QLabel(tab_10);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 10, 451, 501));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../Mail.jpg")));
        label_23->setScaledContents(true);
        lineEdit_mailing_cham_D = new QLineEdit(tab_10);
        lineEdit_mailing_cham_D->setObjectName(QStringLiteral("lineEdit_mailing_cham_D"));
        lineEdit_mailing_cham_D->setGeometry(QRect(510, 40, 381, 22));
        pushButton_8 = new QPushButton(tab_10);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(870, 210, 93, 28));
        tableView_dialog_chambre_mail = new QTableView(tab_10);
        tableView_dialog_chambre_mail->setObjectName(QStringLiteral("tableView_dialog_chambre_mail"));
        tableView_dialog_chambre_mail->setGeometry(QRect(480, 170, 351, 331));
        tabWidget_3->addTab(tab_10, QString());
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Dialog", "Identifiant de l'\303\251v\303\250nement:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "Type d'\303\251v\303\250nement:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Dialog", "Identifiant:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("Dialog", "Nouveau Identifiant:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog", "Nouveau Type:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        label_9->setText(QString());
        pushButton_4->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        comboBox_even_recherche_D->clear();
        comboBox_even_recherche_D->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "ID_EVEN", Q_NULLPTR)
         << QApplication::translate("Dialog", "TYPE_EVEN", Q_NULLPTR)
        );
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("Dialog", "Rechercher", Q_NULLPTR));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("Dialog", "Identifiant de l'\303\251v\303\250nement:", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dialog", "Type d'\303\251v\303\250nement:", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("Dialog", "Imprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QApplication::translate("Dialog", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Gestion Des Ev\303\251nements", Q_NULLPTR));
        label_13->setText(QString());
        label_14->setText(QApplication::translate("Dialog", "Num\303\251ro de la chambre:", Q_NULLPTR));
        label_15->setText(QApplication::translate("Dialog", "Type de chambre:", Q_NULLPTR));
        radioButton_unik_add_cham_D->setText(QApplication::translate("Dialog", "Unique", Q_NULLPTR));
        radioButton_Double_cham_Add_D->setText(QApplication::translate("Dialog", "Double", Q_NULLPTR));
        label_16->setText(QApplication::translate("Dialog", "Nombre de Chambre:", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        label_17->setText(QString());
        label_18->setText(QApplication::translate("Dialog", "Identifiant:", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        label_19->setText(QString());
        label_20->setText(QApplication::translate("Dialog", "Numero:", Q_NULLPTR));
        label_21->setText(QApplication::translate("Dialog", "Type:", Q_NULLPTR));
        label_22->setText(QApplication::translate("Dialog", "Nombre:", Q_NULLPTR));
        radioButton_unik_cham_Mod_D->setText(QApplication::translate("Dialog", "Unique", Q_NULLPTR));
        radioButton_Doubl_Cham_Mod_D->setText(QApplication::translate("Dialog", "Double", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        label_24->setText(QApplication::translate("Dialog", "Tier par:", Q_NULLPTR));
        label_25->setText(QString());
        comboBox_afficher_D_cham->clear();
        comboBox_afficher_D_cham->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "ID", Q_NULLPTR)
         << QApplication::translate("Dialog", "TYPE", Q_NULLPTR)
         << QApplication::translate("Dialog", "NOMBRE_LIT", Q_NULLPTR)
        );
        pushButton_10->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_13), QApplication::translate("Dialog", "afficher", Q_NULLPTR));
        label_23->setText(QString());
        pushButton_8->setText(QApplication::translate("Dialog", "Quitter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("Dialog", "Mailing", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "Gestion Des Chambres", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
