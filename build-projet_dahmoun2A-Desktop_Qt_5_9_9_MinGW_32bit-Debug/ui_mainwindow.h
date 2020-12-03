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
#include <QtWidgets/QPlainTextEdit>
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
    QLineEdit *lineEdit_Nom;
    QLabel *label_2;
    QLineEdit *lineEdit_prenom;
    QLabel *label_3;
    QLineEdit *lineEdit_cin;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_Salaire;
    QPushButton *pushButton;
    QLineEdit *lineEdit_grade;
    QLabel *label_4;
    QLineEdit *lineEdit_age;
    QWidget *tab_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_5;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox;
    QWidget *tab_5;
    QPushButton *pushButton_5;
    QComboBox *comboBox_ID_commande;
    QWidget *tab_6;
    QLabel *label_13;
    QTableView *tableView;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit_7;
    QComboBox *comboBox_3;
    QWidget *tab_7;
    QLabel *label_14;
    QLineEdit *lineEdit_mail1;
    QLabel *label_15;
    QLineEdit *lineEdit_mail2;
    QLabel *label_16;
    QLineEdit *lineEdit_objet;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_6;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_8;
    QLabel *label_17;
    QLineEdit *lineEdit_CINApr;
    QLabel *label_18;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_7;
    QWidget *tab_9;
    QLabel *label_19;
    QLineEdit *lineEdit_CINmopr;
    QLabel *label_20;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_21;
    QDateTimeEdit *dateTimeEdit_3;
    QPushButton *pushButton_8;
    QWidget *tab_10;
    QLabel *label_22;
    QLabel *label_23;
    QDateTimeEdit *dateTimeEdit_4;
    QPushButton *pushButton_9;
    QComboBox *comboBox_2;
    QWidget *tab_11;
    QLabel *label_24;
    QLineEdit *lineEdit_8;
    QTableView *tableView_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QWidget *tab_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 731, 401));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"border-top: 5px solid #535353;\n"
"}\n"
"QTabWidget::tab-bar {\n"
"left: 0px; /* move to the right by 5px */\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"background: #dcdcdc;\n"
"border: 2px solid #535353;\n"
"border-bottom-color: #535353; /* same as the pane color */\n"
"border-top-left-radius: 7px;\n"
"border-top-right-radius: 7px;\n"
"min-width: 120px;\n"
"padding: 8px;\n"
"color: #6a1616;\n"
"font-size:15px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #c3a1a1, stop: 0.4 #7400b3, stop: 0.5 #610099, stop: 1.0 #520082);\n"
"}\n"
"QTabBar::tab:selected {\n"
"border-color: #9B9B9B;\n"
"border-bottom-color: #535353; /* same as pane color */\n"
"color: #dcdcdc;\n"
"font-size:15px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QTabBar::tab:!selected {\n"
""
                        "margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #ccc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 701, 371));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 60, 61, 20));
        lineEdit_Nom = new QLineEdit(tab_3);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(230, 60, 171, 31));
        lineEdit_Nom->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 100, 47, 13));
        lineEdit_prenom = new QLineEdit(tab_3);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(230, 100, 171, 31));
        lineEdit_prenom->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 20, 47, 13));
        lineEdit_cin = new QLineEdit(tab_3);
        lineEdit_cin->setObjectName(QStringLiteral("lineEdit_cin"));
        lineEdit_cin->setGeometry(QRect(230, 20, 171, 31));
        lineEdit_cin->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 190, 47, 13));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 140, 47, 13));
        lineEdit_Salaire = new QLineEdit(tab_3);
        lineEdit_Salaire->setObjectName(QStringLiteral("lineEdit_Salaire"));
        lineEdit_Salaire->setGeometry(QRect(230, 140, 171, 31));
        lineEdit_Salaire->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        lineEdit_Salaire->setEchoMode(QLineEdit::Normal);
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 280, 311, 23));
        pushButton->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        lineEdit_grade = new QLineEdit(tab_3);
        lineEdit_grade->setObjectName(QStringLiteral("lineEdit_grade"));
        lineEdit_grade->setGeometry(QRect(230, 190, 171, 31));
        lineEdit_grade->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 230, 47, 13));
        lineEdit_age = new QLineEdit(tab_3);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(230, 230, 171, 31));
        lineEdit_age->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 90, 47, 13));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 130, 47, 13));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 50, 47, 16));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(140, 230, 47, 13));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(150, 170, 47, 16));
        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 90, 201, 31));
        lineEdit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        lineEdit_2 = new QLineEdit(tab_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 130, 201, 31));
        lineEdit_2->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;\n"
""));
        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(210, 50, 201, 31));
        lineEdit_3->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(210, 170, 201, 31));
        lineEdit_4->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(194, 300, 281, 23));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        lineEdit_5 = new QLineEdit(tab_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(210, 219, 201, 31));
        lineEdit_5->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(130, 270, 47, 13));
        lineEdit_6 = new QLineEdit(tab_4);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(210, 259, 201, 31));
        lineEdit_6->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(260, 20, 69, 22));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 190, 171, 31));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        comboBox_ID_commande = new QComboBox(tab_5);
        comboBox_ID_commande->setObjectName(QStringLiteral("comboBox_ID_commande"));
        comboBox_ID_commande->setGeometry(QRect(300, 110, 69, 22));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(60, 20, 71, 21));
        tableView = new QTableView(tab_6);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 60, 441, 241));
        tableView->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:red;\n"
"background: #d1d1d1;"));
        pushButton_11 = new QPushButton(tab_6);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(330, 20, 75, 23));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        pushButton_12 = new QPushButton(tab_6);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(550, 140, 75, 23));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        pushButton_14 = new QPushButton(tab_6);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(530, 70, 171, 23));
        pushButton_14->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        lineEdit_7 = new QLineEdit(tab_6);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(560, 29, 113, 31));
        comboBox_3 = new QComboBox(tab_6);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(140, 20, 69, 22));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_14 = new QLabel(tab_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(100, 30, 51, 31));
        lineEdit_mail1 = new QLineEdit(tab_7);
        lineEdit_mail1->setObjectName(QStringLiteral("lineEdit_mail1"));
        lineEdit_mail1->setGeometry(QRect(150, 29, 181, 31));
        lineEdit_mail1->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(100, 80, 47, 13));
        lineEdit_mail2 = new QLineEdit(tab_7);
        lineEdit_mail2->setObjectName(QStringLiteral("lineEdit_mail2"));
        lineEdit_mail2->setGeometry(QRect(150, 69, 181, 31));
        lineEdit_mail2->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(90, 130, 47, 13));
        lineEdit_objet = new QLineEdit(tab_7);
        lineEdit_objet->setObjectName(QStringLiteral("lineEdit_objet"));
        lineEdit_objet->setGeometry(QRect(150, 119, 181, 31));
        lineEdit_objet->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        plainTextEdit = new QPlainTextEdit(tab_7);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(150, 160, 401, 121));
        plainTextEdit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        pushButton_6 = new QPushButton(tab_7);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(184, 300, 341, 23));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        tabWidget_2->addTab(tab_7, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 701, 341));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_17 = new QLabel(tab_8);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 30, 47, 16));
        lineEdit_CINApr = new QLineEdit(tab_8);
        lineEdit_CINApr->setObjectName(QStringLiteral("lineEdit_CINApr"));
        lineEdit_CINApr->setGeometry(QRect(160, 19, 191, 31));
        lineEdit_CINApr->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_18 = new QLabel(tab_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 100, 131, 16));
        dateTimeEdit = new QDateTimeEdit(tab_8);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(160, 100, 194, 22));
        pushButton_7 = new QPushButton(tab_8);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(174, 170, 231, 31));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_19 = new QLabel(tab_9);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(90, 40, 47, 13));
        lineEdit_CINmopr = new QLineEdit(tab_9);
        lineEdit_CINmopr->setObjectName(QStringLiteral("lineEdit_CINmopr"));
        lineEdit_CINmopr->setGeometry(QRect(160, 29, 191, 31));
        lineEdit_CINmopr->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        label_20 = new QLabel(tab_9);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 91, 131, 21));
        dateTimeEdit_2 = new QDateTimeEdit(tab_9);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(160, 90, 194, 22));
        label_21 = new QLabel(tab_9);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(0, 140, 151, 21));
        dateTimeEdit_3 = new QDateTimeEdit(tab_9);
        dateTimeEdit_3->setObjectName(QStringLiteral("dateTimeEdit_3"));
        dateTimeEdit_3->setGeometry(QRect(160, 140, 194, 22));
        pushButton_8 = new QPushButton(tab_9);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(180, 200, 211, 31));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_22 = new QLabel(tab_10);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(90, 30, 47, 16));
        label_23 = new QLabel(tab_10);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(30, 90, 131, 16));
        dateTimeEdit_4 = new QDateTimeEdit(tab_10);
        dateTimeEdit_4->setObjectName(QStringLiteral("dateTimeEdit_4"));
        dateTimeEdit_4->setGeometry(QRect(170, 90, 194, 22));
        pushButton_9 = new QPushButton(tab_10);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(140, 150, 241, 31));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        comboBox_2 = new QComboBox(tab_10);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(200, 30, 69, 22));
        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_24 = new QLabel(tab_11);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(90, 30, 47, 16));
        lineEdit_8 = new QLineEdit(tab_11);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(170, 19, 191, 31));
        lineEdit_8->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:rouge;"));
        tableView_2 = new QTableView(tab_11);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(110, 70, 341, 211));
        tableView_2->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-style:solid;\n"
"border-color:red;\n"
"background: #d1d1d1;"));
        pushButton_10 = new QPushButton(tab_11);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(460, 260, 201, 41));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        pushButton_13 = new QPushButton(tab_11);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(520, 120, 75, 23));
        pushButton_13->setStyleSheet(QLatin1String("QPushButton:hover{ \n"
"	background-color: rgb(0, 255, 255);\n"
"color:#f90103;\n"
"background:#2e008b;\n"
"border: none;\n"
"text-align: middle;\n"
"}"));
        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tabWidget_3->addTab(tab_12, QString());
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        lineEdit_Nom->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre Nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Pr\303\251nom", Q_NULLPTR));
        lineEdit_prenom->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre Pr\303\251nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        lineEdit_cin->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre CIN", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Grade", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Salaire", Q_NULLPTR));
        lineEdit_Salaire->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre Salaire", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Enregistrer", Q_NULLPTR));
        lineEdit_grade->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre grade", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        lineEdit_age->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre age", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter personnel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Pr\303\251nom", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Grade", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Salaire", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre Nom", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre Pr\303\251nom", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre CIN", Q_NULLPTR));
        lineEdit_4->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre Salaire", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Enregistrer", Q_NULLPTR));
        lineEdit_5->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre grade", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        lineEdit_6->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre age", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Modifier personnel", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Supprimer personnel", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Trier par :", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "trier", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "Afficher personnel", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "De :", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\303\200 :", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Objet :", Q_NULLPTR));
        plainTextEdit->setPlaceholderText(QApplication::translate("MainWindow", "Ecrivez...", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Mailling", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Personnel Medical", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        lineEdit_CINApr->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre CIN", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Date et heure de pointage", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Enregistrer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "Ajouter Pr\303\251sence", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        lineEdit_CINmopr->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre CIN", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Date et heure de pointage", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "NV Date et heure de pointage", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Enregistrer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("MainWindow", "Modifier Pr\303\251sence", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Date et heure de pointage", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("MainWindow", "Supprimer Pr\303\251sence", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        lineEdit_8->setPlaceholderText(QApplication::translate("MainWindow", "Entrez votre CIN", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Imprimer les informations de pr\303\251sence", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("MainWindow", "Afficher pr\303\251sence", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QApplication::translate("MainWindow", "Importer les informations de pr\303\251sence", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Pr\303\251sence personnel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
