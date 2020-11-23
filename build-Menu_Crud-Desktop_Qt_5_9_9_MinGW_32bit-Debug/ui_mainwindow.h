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
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_ID_even_ajout;
    QLineEdit *lineEdit_Type_even_ajout;
    QPushButton *pushButton;
    QWidget *tab_8;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_Mod_ID_even;
    QLineEdit *lineEdit_Type_Mod_ajout;
    QPushButton *pushButton_3;
    QWidget *tab_7;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_Id_even_sup;
    QPushButton *pushButton_5;
    QWidget *tab_4;
    QTableView *tableView;
    QWidget *tab_9;
    QLabel *label_19;
    QPushButton *pushButton_7;
    QComboBox *comboBox_trier_even;
    QTableView *tableView_3;
    QWidget *tab_10;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *lineEdit_id_impr_even;
    QLineEdit *lineEdit_type_even_impt;
    QPushButton *pushButton_8;
    QTableView *tableView_4;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_num_cham_ajout;
    QLineEdit *lineEdit_Type_cham_ajout;
    QLineEdit *lineEdit_Nbre_cham_ajout;
    QPushButton *pushButton_2;
    QWidget *tab_6;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_num_Mod_cham;
    QLineEdit *lineEdit_type_Mod_cham;
    QLineEdit *lineEdit_nmbre_cham_Mod;
    QPushButton *pushButton_4;
    QWidget *tab_11;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_sup_cham_num;
    QPushButton *pushButton_6;
    QWidget *tab_12;
    QTableView *tableView_2;
    QWidget *tab_13;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *lineEdit_Mail_cham;
    QPushButton *pushButton_9;
    QTableView *tableView_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1106, 666);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 741, 541));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 741, 511));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 741, 481));
        label->setPixmap(QPixmap(QString::fromUtf8("../conf\303\251rence.jpg")));
        label->setScaledContents(true);
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 50, 151, 41));
        label_3->setFont(font);
        label_3->setWordWrap(false);
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 140, 161, 16));
        lineEdit_ID_even_ajout = new QLineEdit(tab_3);
        lineEdit_ID_even_ajout->setObjectName(QStringLiteral("lineEdit_ID_even_ajout"));
        lineEdit_ID_even_ajout->setGeometry(QRect(510, 60, 181, 22));
        lineEdit_ID_even_ajout->setMaxLength(10);
        lineEdit_Type_even_ajout = new QLineEdit(tab_3);
        lineEdit_Type_even_ajout->setObjectName(QStringLiteral("lineEdit_Type_even_ajout"));
        lineEdit_Type_even_ajout->setGeometry(QRect(510, 140, 181, 22));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 240, 171, 51));
        tabWidget_2->addTab(tab_3, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_8 = new QLabel(tab_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 0, 731, 481));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../edite2.jpg")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(tab_8);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(350, 30, 141, 41));
        label_10 = new QLabel(tab_8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(350, 110, 111, 51));
        lineEdit_Mod_ID_even = new QLineEdit(tab_8);
        lineEdit_Mod_ID_even->setObjectName(QStringLiteral("lineEdit_Mod_ID_even"));
        lineEdit_Mod_ID_even->setGeometry(QRect(520, 40, 113, 22));
        lineEdit_Type_Mod_ajout = new QLineEdit(tab_8);
        lineEdit_Type_Mod_ajout->setObjectName(QStringLiteral("lineEdit_Type_Mod_ajout"));
        lineEdit_Type_Mod_ajout->setGeometry(QRect(520, 130, 113, 22));
        pushButton_3 = new QPushButton(tab_8);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 250, 151, 51));
        tabWidget_2->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 0, 741, 481));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../th.jpg")));
        label_15->setScaledContents(true);
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(340, 40, 111, 41));
        lineEdit_Id_even_sup = new QLineEdit(tab_7);
        lineEdit_Id_even_sup->setObjectName(QStringLiteral("lineEdit_Id_even_sup"));
        lineEdit_Id_even_sup->setGeometry(QRect(470, 50, 171, 22));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 150, 161, 51));
        tabWidget_2->addTab(tab_7, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 20, 691, 411));
        tabWidget_2->addTab(tab_4, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_19 = new QLabel(tab_9);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(-10, 0, 751, 481));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../search.jpg")));
        label_19->setScaledContents(true);
        pushButton_7 = new QPushButton(tab_9);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(590, 80, 131, 31));
        comboBox_trier_even = new QComboBox(tab_9);
        comboBox_trier_even->setObjectName(QStringLiteral("comboBox_trier_even"));
        comboBox_trier_even->setGeometry(QRect(290, 80, 281, 31));
        tableView_3 = new QTableView(tab_9);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(120, 270, 451, 81));
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_20 = new QLabel(tab_10);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(-10, 0, 741, 481));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../imprim.jpg")));
        label_20->setScaledContents(true);
        label_21 = new QLabel(tab_10);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(340, 30, 121, 51));
        label_22 = new QLabel(tab_10);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(340, 110, 131, 51));
        lineEdit_id_impr_even = new QLineEdit(tab_10);
        lineEdit_id_impr_even->setObjectName(QStringLiteral("lineEdit_id_impr_even"));
        lineEdit_id_impr_even->setGeometry(QRect(490, 40, 171, 22));
        lineEdit_type_even_impt = new QLineEdit(tab_10);
        lineEdit_type_even_impt->setObjectName(QStringLiteral("lineEdit_type_even_impt"));
        lineEdit_type_even_impt->setGeometry(QRect(490, 130, 171, 22));
        pushButton_8 = new QPushButton(tab_10);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(570, 200, 141, 41));
        tableView_4 = new QTableView(tab_10);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(180, 270, 351, 192));
        tabWidget_2->addTab(tab_10, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 741, 521));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_2 = new QLabel(tab_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 731, 491));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../chmbre.jpg")));
        label_2->setScaledContents(true);
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(320, 30, 181, 41));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(320, 120, 141, 51));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(320, 220, 161, 41));
        lineEdit_num_cham_ajout = new QLineEdit(tab_5);
        lineEdit_num_cham_ajout->setObjectName(QStringLiteral("lineEdit_num_cham_ajout"));
        lineEdit_num_cham_ajout->setGeometry(QRect(500, 40, 131, 22));
        lineEdit_Type_cham_ajout = new QLineEdit(tab_5);
        lineEdit_Type_cham_ajout->setObjectName(QStringLiteral("lineEdit_Type_cham_ajout"));
        lineEdit_Type_cham_ajout->setGeometry(QRect(500, 140, 131, 22));
        lineEdit_Nbre_cham_ajout = new QLineEdit(tab_5);
        lineEdit_Nbre_cham_ajout->setObjectName(QStringLiteral("lineEdit_Nbre_cham_ajout"));
        lineEdit_Nbre_cham_ajout->setGeometry(QRect(500, 230, 131, 22));
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 350, 171, 51));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 0, 741, 481));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../edit.jpg")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(350, 40, 141, 41));
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(350, 120, 191, 41));
        label_14 = new QLabel(tab_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(350, 210, 161, 41));
        lineEdit_num_Mod_cham = new QLineEdit(tab_6);
        lineEdit_num_Mod_cham->setObjectName(QStringLiteral("lineEdit_num_Mod_cham"));
        lineEdit_num_Mod_cham->setGeometry(QRect(550, 50, 113, 22));
        lineEdit_type_Mod_cham = new QLineEdit(tab_6);
        lineEdit_type_Mod_cham->setObjectName(QStringLiteral("lineEdit_type_Mod_cham"));
        lineEdit_type_Mod_cham->setGeometry(QRect(550, 130, 113, 22));
        lineEdit_nmbre_cham_Mod = new QLineEdit(tab_6);
        lineEdit_nmbre_cham_Mod->setObjectName(QStringLiteral("lineEdit_nmbre_cham_Mod"));
        lineEdit_nmbre_cham_Mod->setGeometry(QRect(550, 220, 113, 22));
        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(450, 310, 181, 51));
        pushButton_4->setCheckable(false);
        pushButton_4->setChecked(false);
        pushButton_4->setAutoRepeat(false);
        pushButton_4->setAutoExclusive(false);
        tabWidget_3->addTab(tab_6, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_17 = new QLabel(tab_11);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(0, 0, 731, 481));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../delet.jpg")));
        label_17->setScaledContents(true);
        label_18 = new QLabel(tab_11);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(330, 40, 181, 51));
        lineEdit_sup_cham_num = new QLineEdit(tab_11);
        lineEdit_sup_cham_num->setObjectName(QStringLiteral("lineEdit_sup_cham_num"));
        lineEdit_sup_cham_num->setGeometry(QRect(520, 60, 171, 22));
        pushButton_6 = new QPushButton(tab_11);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 180, 191, 51));
        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tableView_2 = new QTableView(tab_12);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 10, 711, 461));
        tabWidget_3->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        label_23 = new QLabel(tab_13);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(0, 0, 731, 491));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../Mail.jpg")));
        label_23->setScaledContents(true);
        label_24 = new QLabel(tab_13);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(280, 30, 111, 31));
        lineEdit_Mail_cham = new QLineEdit(tab_13);
        lineEdit_Mail_cham->setObjectName(QStringLiteral("lineEdit_Mail_cham"));
        lineEdit_Mail_cham->setGeometry(QRect(410, 30, 251, 31));
        pushButton_9 = new QPushButton(tab_13);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(410, 120, 141, 41));
        tableView_5 = new QTableView(tab_13);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(130, 200, 431, 261));
        tabWidget_3->addTab(tab_13, QString());
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1106, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(5);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">ID de l'\303\251v\303\251nement:</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Type de l'\303\251v\303\251nement:</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Nouveau ID:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nouveau type:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_15->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "ID Ev\303\251nemet:", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_19->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        comboBox_trier_even->clear();
        comboBox_trier_even->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Type", Q_NULLPTR)
        );
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        label_20->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "ID Ev\303\251nement:", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Type Ev\303\251nement:", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "G\303\251rer Ev\303\250nement", Q_NULLPTR));
        label_2->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Num\303\251ro de la Chambre:</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Type de Chambre:</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Nombre de Chambre:</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_11->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Nouveau num\303\251ro:</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Nouveau Type_Chambre:</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Nombre de chambre:</span></p></body></html>", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_17->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "Num\303\251ro de la Chambre:", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_23->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "Adresse Mail:", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_13), QApplication::translate("MainWindow", "Mailling", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "G\303\251rer Chambre", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
