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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *Ajouter_ch;
    QPushButton *Modifier_ch;
    QPushButton *Supprimer_ch;
    QPushButton *Afficher_ch;
    QLabel *label_11;
    QComboBox *trier_chambre;
    QLabel *label_12;
    QLineEdit *Num_chambre;
    QLabel *label_13;
    QComboBox *Typ_chambre;
    QLabel *label_14;
    QLineEdit *Nombre_chambre;
    QWidget *tab_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *Ajouter;
    QPushButton *Modifier;
    QPushButton *Supprimer;
    QPushButton *Afficher;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_rechercher_even;
    QLabel *label_5;
    QLineEdit *lineEdit_identifiant_even;
    QLabel *label_6;
    QComboBox *comboBox_type_even;
    QLabel *label_7;
    QDateTimeEdit *dateTimeEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1225, 631);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(70, 10, 1061, 561));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-20, -30, 1101, 601));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../hopi.jpg")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(920, 0, 141, 151));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../patie.jpg")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 0, 291, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Good Things"));
        font1.setPointSize(25);
        font1.setBold(false);
        font1.setWeight(50);
        label_10->setFont(font1);
        Ajouter_ch = new QPushButton(tab);
        Ajouter_ch->setObjectName(QStringLiteral("Ajouter_ch"));
        Ajouter_ch->setGeometry(QRect(130, 90, 93, 31));
        Ajouter_ch->setStyleSheet(QLatin1String("background-color:red; \n"
"color:black; \n"
"border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        Modifier_ch = new QPushButton(tab);
        Modifier_ch->setObjectName(QStringLiteral("Modifier_ch"));
        Modifier_ch->setGeometry(QRect(300, 90, 93, 31));
        Modifier_ch->setStyleSheet(QLatin1String("background-color:red; \n"
"color:black; \n"
"border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        Supprimer_ch = new QPushButton(tab);
        Supprimer_ch->setObjectName(QStringLiteral("Supprimer_ch"));
        Supprimer_ch->setGeometry(QRect(460, 90, 93, 31));
        Supprimer_ch->setStyleSheet(QLatin1String("background-color:red; \n"
"color:black; \n"
"border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        Afficher_ch = new QPushButton(tab);
        Afficher_ch->setObjectName(QStringLiteral("Afficher_ch"));
        Afficher_ch->setGeometry(QRect(610, 90, 93, 31));
        Afficher_ch->setStyleSheet(QLatin1String("background-color:red; \n"
"color:black; \n"
"border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 170, 121, 21));
        label_11->setStyleSheet(QStringLiteral("font: 15pt \"Niagara Solid\";"));
        trier_chambre = new QComboBox(tab);
        trier_chambre->setObjectName(QStringLiteral("trier_chambre"));
        trier_chambre->setGeometry(QRect(190, 170, 151, 22));
        trier_chambre->setStyleSheet(QLatin1String("border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 240, 151, 21));
        label_12->setStyleSheet(QStringLiteral("font: 15pt \"Niagara Solid\";"));
        Num_chambre = new QLineEdit(tab);
        Num_chambre->setObjectName(QStringLiteral("Num_chambre"));
        Num_chambre->setGeometry(QRect(190, 240, 151, 22));
        Num_chambre->setStyleSheet(QLatin1String("border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 300, 121, 31));
        label_13->setStyleSheet(QStringLiteral("font: 15pt \"Niagara Solid\";"));
        Typ_chambre = new QComboBox(tab);
        Typ_chambre->setObjectName(QStringLiteral("Typ_chambre"));
        Typ_chambre->setGeometry(QRect(190, 300, 151, 22));
        Typ_chambre->setStyleSheet(QLatin1String("border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 370, 141, 21));
        label_14->setStyleSheet(QStringLiteral("font: 15pt \"Niagara Solid\";"));
        Nombre_chambre = new QLineEdit(tab);
        Nombre_chambre->setObjectName(QStringLiteral("Nombre_chambre"));
        Nombre_chambre->setGeometry(QRect(190, 370, 151, 22));
        Nombre_chambre->setStyleSheet(QLatin1String("border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1061, 541));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../background.jpg")));
        label_2->setScaledContents(true);
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 0, 321, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Good Things"));
        font2.setPointSize(40);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        Ajouter = new QPushButton(tab_2);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setGeometry(QRect(70, 80, 111, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Niagara Solid"));
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setWeight(50);
        Ajouter->setFont(font3);
        Ajouter->setStyleSheet(QLatin1String("background-color:red; \n"
"color:black; \n"
"border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        Modifier = new QPushButton(tab_2);
        Modifier->setObjectName(QStringLiteral("Modifier"));
        Modifier->setGeometry(QRect(280, 80, 111, 31));
        Modifier->setFont(font3);
        Modifier->setStyleSheet(QLatin1String("background-color:red; \n"
"color:black; \n"
"border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        Supprimer = new QPushButton(tab_2);
        Supprimer->setObjectName(QStringLiteral("Supprimer"));
        Supprimer->setGeometry(QRect(480, 80, 111, 31));
        Supprimer->setFont(font3);
        Supprimer->setStyleSheet(QLatin1String("background-color:red; \n"
"color:black; \n"
"border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        Afficher = new QPushButton(tab_2);
        Afficher->setObjectName(QStringLiteral("Afficher"));
        Afficher->setGeometry(QRect(660, 80, 111, 31));
        Afficher->setFont(font3);
        Afficher->setStyleSheet(QLatin1String("background-color:red; \n"
"color:black; \n"
"border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(880, 0, 181, 141));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../user.jpg")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 140, 171, 31));
        label_4->setStyleSheet(QStringLiteral("font: 15pt \"Niagara Solid\";"));
        comboBox_rechercher_even = new QComboBox(tab_2);
        comboBox_rechercher_even->setObjectName(QStringLiteral("comboBox_rechercher_even"));
        comboBox_rechercher_even->setGeometry(QRect(190, 140, 201, 31));
        comboBox_rechercher_even->setStyleSheet(QLatin1String("border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 200, 161, 31));
        label_5->setStyleSheet(QStringLiteral("font: 15pt \"Niagara Solid\";"));
        lineEdit_identifiant_even = new QLineEdit(tab_2);
        lineEdit_identifiant_even->setObjectName(QStringLiteral("lineEdit_identifiant_even"));
        lineEdit_identifiant_even->setGeometry(QRect(190, 200, 201, 31));
        lineEdit_identifiant_even->setStyleSheet(QLatin1String("border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 250, 121, 31));
        label_6->setStyleSheet(QStringLiteral("font: 15pt \"Niagara Solid\";"));
        comboBox_type_even = new QComboBox(tab_2);
        comboBox_type_even->setObjectName(QStringLiteral("comboBox_type_even"));
        comboBox_type_even->setGeometry(QRect(190, 250, 201, 31));
        comboBox_type_even->setStyleSheet(QLatin1String("border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 320, 131, 31));
        label_7->setStyleSheet(QStringLiteral("font: 15pt \"Niagara Solid\";"));
        dateTimeEdit = new QDateTimeEdit(tab_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(190, 320, 201, 31));
        dateTimeEdit->setStyleSheet(QLatin1String("border-style:outset ; \n"
"border-width:2px ; \n"
"border-radius:10px;"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1225, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">V\303\251ga Innovation</span></p></body></html>", Q_NULLPTR));
        Ajouter_ch->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Modifier_ch->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        Supprimer_ch->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        Afficher_ch->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Trier La Chambre :", Q_NULLPTR));
        trier_chambre->clear();
        trier_chambre->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Type de Chambre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nombre de Chambre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Num\303\251ro de la chambre", Q_NULLPTR)
        );
        label_12->setText(QApplication::translate("MainWindow", "Num\303\251ro De La Chambre :", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Type De Chambre :", Q_NULLPTR));
        Typ_chambre->clear();
        Typ_chambre->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Double", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Unique", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("MainWindow", "Nombre De Chambre :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Chambre", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Vega Inovetion", Q_NULLPTR));
        Ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        Supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        Afficher->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Rechercher un \303\251v\303\251nement :</span></p></body></html>", Q_NULLPTR));
        comboBox_rechercher_even->clear();
        comboBox_rechercher_even->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Identifiant:", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Type", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Date ", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Identifiant de l'\303\251v\303\251nement:</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Type d'\303\251v\303\251nement :</span></p></body></html>", Q_NULLPTR));
        comboBox_type_even->clear();
        comboBox_type_even->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Conf\303\251rence de pr\303\251sse", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Journ\303\251e porte ouverte", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Noel", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Date de l'\303\251v\303\251nement:</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Evenement", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
