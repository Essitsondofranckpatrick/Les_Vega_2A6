/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_ajouter_even_ID;
    QLabel *label_3;
    QLineEdit *lineEdit_ajouter_even_type;
    QPushButton *Ajouter_even;
    QWidget *tab_2;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_Supp_even_id;
    QPushButton *pushButton_7;
    QWidget *tab_7;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_Modifier_even_id;
    QLabel *label_6;
    QLineEdit *lineEdit_Modifier_even_type;
    QPushButton *pushButton_2;
    QWidget *tab_9;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QTableView *tableView_rechercher_even_main;
    QComboBox *comboBox_2;
    QWidget *tab_10;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_Imprimer_even_id;
    QLabel *label_10;
    QLineEdit *lineEdit_imprimer_even_type;
    QTableView *tableView_Afficher_even_2;
    QPushButton *pushButton_9;
    QWidget *tab_4;
    QTableView *tableView;
    QWidget *widget;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_cham_ajouter_num;
    QLabel *label_13;
    QRadioButton *radioButton_unique;
    QRadioButton *radioButton_double;
    QLabel *label_14;
    QSpinBox *spinBox_nombre;
    QPushButton *pushButton_4;
    QWidget *tab_11;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_modifier_cham_num;
    QLabel *label_17;
    QRadioButton *radioButton_modifier_cham_unique;
    QRadioButton *radioButton_modifier_cham_double;
    QLabel *label_18;
    QSpinBox *spinBox_modifier_cham;
    QPushButton *pushButton_5;
    QWidget *tab_12;
    QLabel *label_19;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit;
    QWidget *tab_13;
    QLabel *label_22;
    QLineEdit *lineEdit_chmbre_sup_num;
    QLabel *label_23;
    QPushButton *pushButton_8;
    QWidget *tab_14;
    QLabel *label_24;
    QTableView *tableView_afficher_cham_main;
    QLabel *label_25;
    QComboBox *comboBox_afficher_cham;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1021, 697);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 891, 521));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 891, 501));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 351, 451));
        label->setPixmap(QPixmap(QString::fromUtf8("../conf\303\251rence.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 60, 211, 21));
        lineEdit_ajouter_even_ID = new QLineEdit(tab_3);
        lineEdit_ajouter_even_ID->setObjectName(QStringLiteral("lineEdit_ajouter_even_ID"));
        lineEdit_ajouter_even_ID->setGeometry(QRect(590, 60, 281, 22));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(370, 130, 151, 16));
        lineEdit_ajouter_even_type = new QLineEdit(tab_3);
        lineEdit_ajouter_even_type->setObjectName(QStringLiteral("lineEdit_ajouter_even_type"));
        lineEdit_ajouter_even_type->setGeometry(QRect(590, 130, 281, 22));
        Ajouter_even = new QPushButton(tab_3);
        Ajouter_even->setObjectName(QStringLiteral("Ajouter_even"));
        Ajouter_even->setGeometry(QRect(730, 330, 121, 61));
        tabWidget_2->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 10, 351, 451));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../th.jpg")));
        label_20->setScaledContents(true);
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(390, 70, 211, 21));
        lineEdit_Supp_even_id = new QLineEdit(tab_2);
        lineEdit_Supp_even_id->setObjectName(QStringLiteral("lineEdit_Supp_even_id"));
        lineEdit_Supp_even_id->setGeometry(QRect(620, 70, 161, 22));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(670, 210, 111, 28));
        tabWidget_2->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_4 = new QLabel(tab_7);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 411, 441));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../edit.jpg")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(tab_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(450, 40, 161, 21));
        lineEdit_Modifier_even_id = new QLineEdit(tab_7);
        lineEdit_Modifier_even_id->setObjectName(QStringLiteral("lineEdit_Modifier_even_id"));
        lineEdit_Modifier_even_id->setGeometry(QRect(620, 40, 251, 22));
        label_6 = new QLabel(tab_7);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(450, 120, 121, 21));
        lineEdit_Modifier_even_type = new QLineEdit(tab_7);
        lineEdit_Modifier_even_type->setObjectName(QStringLiteral("lineEdit_Modifier_even_type"));
        lineEdit_Modifier_even_type->setGeometry(QRect(620, 120, 251, 21));
        pushButton_2 = new QPushButton(tab_7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(710, 270, 131, 31));
        tabWidget_2->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_7 = new QLabel(tab_9);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 331, 451));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../rechercher.jpg")));
        label_7->setScaledContents(true);
        pushButton_3 = new QPushButton(tab_9);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 100, 141, 28));
        tableView_rechercher_even_main = new QTableView(tab_9);
        tableView_rechercher_even_main->setObjectName(QStringLiteral("tableView_rechercher_even_main"));
        tableView_rechercher_even_main->setGeometry(QRect(360, 180, 511, 281));
        comboBox_2 = new QComboBox(tab_9);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(410, 30, 351, 22));
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_8 = new QLabel(tab_10);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 351, 441));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../imprimante.jpg")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(tab_10);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(380, 50, 201, 21));
        lineEdit_Imprimer_even_id = new QLineEdit(tab_10);
        lineEdit_Imprimer_even_id->setObjectName(QStringLiteral("lineEdit_Imprimer_even_id"));
        lineEdit_Imprimer_even_id->setGeometry(QRect(600, 50, 241, 22));
        label_10 = new QLabel(tab_10);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(380, 110, 131, 21));
        lineEdit_imprimer_even_type = new QLineEdit(tab_10);
        lineEdit_imprimer_even_type->setObjectName(QStringLiteral("lineEdit_imprimer_even_type"));
        lineEdit_imprimer_even_type->setGeometry(QRect(600, 110, 241, 22));
        tableView_Afficher_even_2 = new QTableView(tab_10);
        tableView_Afficher_even_2->setObjectName(QStringLiteral("tableView_Afficher_even_2"));
        tableView_Afficher_even_2->setGeometry(QRect(370, 190, 361, 251));
        pushButton_9 = new QPushButton(tab_10);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(760, 190, 111, 28));
        tabWidget_2->addTab(tab_10, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(130, 30, 561, 411));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        tabWidget_3 = new QTabWidget(widget);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 891, 501));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 10, 361, 451));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../chmbre.jpg")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(400, 50, 181, 21));
        lineEdit_cham_ajouter_num = new QLineEdit(tab_5);
        lineEdit_cham_ajouter_num->setObjectName(QStringLiteral("lineEdit_cham_ajouter_num"));
        lineEdit_cham_ajouter_num->setGeometry(QRect(600, 50, 261, 22));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(400, 110, 141, 21));
        radioButton_unique = new QRadioButton(tab_5);
        radioButton_unique->setObjectName(QStringLiteral("radioButton_unique"));
        radioButton_unique->setGeometry(QRect(630, 110, 95, 20));
        radioButton_double = new QRadioButton(tab_5);
        radioButton_double->setObjectName(QStringLiteral("radioButton_double"));
        radioButton_double->setGeometry(QRect(630, 160, 95, 20));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(400, 210, 161, 21));
        spinBox_nombre = new QSpinBox(tab_5);
        spinBox_nombre->setObjectName(QStringLiteral("spinBox_nombre"));
        spinBox_nombre->setGeometry(QRect(610, 210, 42, 22));
        spinBox_nombre->setMinimum(1);
        spinBox_nombre->setMaximum(1000);
        pushButton_4 = new QPushButton(tab_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(660, 310, 141, 28));
        tabWidget_3->addTab(tab_5, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_15 = new QLabel(tab_11);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 10, 351, 441));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../edite2.jpg")));
        label_15->setScaledContents(true);
        label_16 = new QLabel(tab_11);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(390, 60, 151, 21));
        lineEdit_modifier_cham_num = new QLineEdit(tab_11);
        lineEdit_modifier_cham_num->setObjectName(QStringLiteral("lineEdit_modifier_cham_num"));
        lineEdit_modifier_cham_num->setGeometry(QRect(560, 60, 291, 22));
        label_17 = new QLabel(tab_11);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(390, 130, 191, 21));
        radioButton_modifier_cham_unique = new QRadioButton(tab_11);
        radioButton_modifier_cham_unique->setObjectName(QStringLiteral("radioButton_modifier_cham_unique"));
        radioButton_modifier_cham_unique->setGeometry(QRect(620, 130, 95, 20));
        radioButton_modifier_cham_double = new QRadioButton(tab_11);
        radioButton_modifier_cham_double->setObjectName(QStringLiteral("radioButton_modifier_cham_double"));
        radioButton_modifier_cham_double->setGeometry(QRect(630, 190, 95, 20));
        label_18 = new QLabel(tab_11);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(390, 250, 161, 21));
        spinBox_modifier_cham = new QSpinBox(tab_11);
        spinBox_modifier_cham->setObjectName(QStringLiteral("spinBox_modifier_cham"));
        spinBox_modifier_cham->setGeometry(QRect(610, 250, 51, 21));
        pushButton_5 = new QPushButton(tab_11);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 350, 121, 31));
        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        label_19 = new QLabel(tab_12);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 10, 331, 441));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../Mail.jpg")));
        label_19->setScaledContents(true);
        pushButton_6 = new QPushButton(tab_12);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(520, 130, 141, 31));
        lineEdit = new QLineEdit(tab_12);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(370, 20, 461, 31));
        tabWidget_3->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        label_22 = new QLabel(tab_13);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 10, 361, 441));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../delet.jpg")));
        label_22->setScaledContents(true);
        lineEdit_chmbre_sup_num = new QLineEdit(tab_13);
        lineEdit_chmbre_sup_num->setObjectName(QStringLiteral("lineEdit_chmbre_sup_num"));
        lineEdit_chmbre_sup_num->setGeometry(QRect(570, 30, 281, 22));
        label_23 = new QLabel(tab_13);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(380, 30, 181, 21));
        pushButton_8 = new QPushButton(tab_13);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(620, 290, 181, 41));
        tabWidget_3->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        label_24 = new QLabel(tab_14);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 10, 301, 451));
        label_24->setPixmap(QPixmap(QString::fromUtf8("../Trier.jpg")));
        label_24->setScaledContents(true);
        tableView_afficher_cham_main = new QTableView(tab_14);
        tableView_afficher_cham_main->setObjectName(QStringLiteral("tableView_afficher_cham_main"));
        tableView_afficher_cham_main->setGeometry(QRect(380, 190, 491, 271));
        label_25 = new QLabel(tab_14);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(340, 40, 81, 31));
        comboBox_afficher_cham = new QComboBox(tab_14);
        comboBox_afficher_cham->setObjectName(QStringLiteral("comboBox_afficher_cham"));
        comboBox_afficher_cham->setGeometry(QRect(430, 50, 211, 22));
        tabWidget_3->addTab(tab_14, QString());
        tabWidget->addTab(widget, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1021, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(4);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Identifiant D'\303\251v\303\250nement:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Type D'\303\251v\303\251nement:", Q_NULLPTR));
        Ajouter_even->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_20->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "IDentifiant de l'\303\251v\303\250nement:", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Nouveau Identifiant:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Nouveau Type:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_7->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "TYPE", Q_NULLPTR)
        );
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Identifiant de l'\303\251v\303\250nement:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Type d'\303\251vement:", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Gestion Des Ev\303\251nements", Q_NULLPTR));
        label_11->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Num\303\251ro De La Chambre:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Type de Chambre:", Q_NULLPTR));
        radioButton_unique->setText(QApplication::translate("MainWindow", "Unique", Q_NULLPTR));
        radioButton_double->setText(QApplication::translate("MainWindow", "Double", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Nombre de Chambre:", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_15->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "Nouveau num\303\251ro:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Nouveau type_chambre:", Q_NULLPTR));
        radioButton_modifier_cham_unique->setText(QApplication::translate("MainWindow", "Unique", Q_NULLPTR));
        radioButton_modifier_cham_double->setText(QApplication::translate("MainWindow", "Double", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Nombre de chambre:", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_19->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QApplication::translate("MainWindow", "Mailing", Q_NULLPTR));
        label_22->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "Num\303\251ro de la chambre:", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_13), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_24->setText(QString());
        label_25->setText(QApplication::translate("MainWindow", "Trier par:", Q_NULLPTR));
        comboBox_afficher_cham->clear();
        comboBox_afficher_cham->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NOMBRE_LIT", Q_NULLPTR)
         << QApplication::translate("MainWindow", "TYPE", Q_NULLPTR)
        );
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_14), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "Gestion Des Chambres", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
