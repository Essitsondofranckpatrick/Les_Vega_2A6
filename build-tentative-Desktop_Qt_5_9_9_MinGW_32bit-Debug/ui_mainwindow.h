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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit;
    QWidget *tab_5;
    QLabel *label_3;
    QLabel *label_28;
    QLineEdit *lineEdit_10;
    QLabel *label_31;
    QPushButton *pushButton_9;
    QWidget *tab_6;
    QLabel *label;
    QLabel *label_27;
    QLabel *label_30;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_8;
    QWidget *tab_4;
    QLabel *label_4;
    QLabel *label_29;
    QLineEdit *lineEdit_11;
    QLabel *label_32;
    QPushButton *pushButton_10;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QLabel *label_6;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *line_6;
    QFrame *line_7;
    QDateTimeEdit *dateTimeEdit;
    QWidget *tab_10;
    QLabel *label_7;
    QLabel *label_23;
    QLabel *label_24;
    QDateTimeEdit *dateTimeEdit_3;
    QPushButton *pushButton_6;
    QWidget *tab_9;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_21;
    QLabel *label_22;
    QDateTimeEdit *dateTimeEdit_2;
    QPushButton *pushButton_5;
    QWidget *tab_8;
    QLabel *label_8;
    QLabel *label_25;
    QLabel *label_26;
    QDateTimeEdit *dateTimeEdit_4;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QMenu *menuApp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 791, 561));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 791, 561));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 791, 511));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 781, 481));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../patients.jpg")));
        label_2->setScaledContents(true);
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(260, 70, 151, 22));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(280, 20, 111, 20));
        label_10->setFrameShape(QFrame::StyledPanel);
        label_10->setTextFormat(Qt::RichText);
        label_10->setScaledContents(false);
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 140, 151, 22));
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(260, 190, 151, 22));
        lineEdit_5 = new QLineEdit(tab_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(260, 300, 151, 22));
        lineEdit_6 = new QLineEdit(tab_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(260, 350, 151, 22));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(90, 70, 111, 21));
        label_11->setFrameShape(QFrame::WinPanel);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 140, 111, 21));
        label_12->setFrameShape(QFrame::WinPanel);
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 190, 111, 21));
        label_13->setFrameShape(QFrame::WinPanel);
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(90, 250, 111, 21));
        label_14->setFrameShape(QFrame::WinPanel);
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(90, 300, 111, 21));
        label_15->setFrameShape(QFrame::WinPanel);
        label_15->setTextFormat(Qt::PlainText);
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(90, 350, 111, 21));
        label_16->setFrameShape(QFrame::WinPanel);
        line = new QFrame(tab_3);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(80, 100, 351, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(tab_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(80, 170, 351, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(tab_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(80, 219, 351, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(tab_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(80, 280, 351, 20));
        line_4->setFrameShadow(QFrame::Sunken);
        line_4->setFrameShape(QFrame::HLine);
        line_5 = new QFrame(tab_3);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(80, 330, 351, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 420, 93, 28));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 420, 93, 28));
        dateEdit = new QDateEdit(tab_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(260, 250, 151, 22));
        tabWidget_2->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 781, 481));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../../patients.jpg")));
        label_3->setScaledContents(true);
        label_28 = new QLabel(tab_5);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(310, 60, 121, 20));
        label_28->setFrameShape(QFrame::StyledPanel);
        label_28->setTextFormat(Qt::RichText);
        label_28->setScaledContents(false);
        lineEdit_10 = new QLineEdit(tab_5);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(480, 230, 151, 22));
        label_31 = new QLabel(tab_5);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(70, 230, 321, 21));
        label_31->setFrameShape(QFrame::WinPanel);
        pushButton_9 = new QPushButton(tab_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(150, 370, 451, 28));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label = new QLabel(tab_6);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 781, 481));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../patients.jpg")));
        label->setScaledContents(true);
        label_27 = new QLabel(tab_6);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(310, 60, 121, 20));
        label_27->setFrameShape(QFrame::StyledPanel);
        label_27->setTextFormat(Qt::RichText);
        label_27->setScaledContents(false);
        label_30 = new QLabel(tab_6);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(40, 220, 331, 21));
        label_30->setFrameShape(QFrame::WinPanel);
        lineEdit_9 = new QLineEdit(tab_6);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(460, 220, 151, 22));
        pushButton_8 = new QPushButton(tab_6);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(180, 340, 451, 28));
        tabWidget_2->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 781, 481));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../../patients.jpg")));
        label_4->setScaledContents(true);
        label_29 = new QLabel(tab_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(300, 60, 131, 20));
        label_29->setFrameShape(QFrame::StyledPanel);
        label_29->setTextFormat(Qt::RichText);
        label_29->setScaledContents(false);
        lineEdit_11 = new QLineEdit(tab_4);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(490, 220, 151, 22));
        label_32 = new QLabel(tab_4);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(70, 220, 341, 21));
        label_32->setFrameShape(QFrame::WinPanel);
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(150, 360, 451, 28));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 781, 531));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_6 = new QLabel(tab_7);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 771, 481));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../../rendez-vous.jpg")));
        label_6->setScaledContents(true);
        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(310, 30, 141, 20));
        label_17->setFrameShape(QFrame::StyledPanel);
        label_17->setTextFormat(Qt::RichText);
        label_17->setScaledContents(false);
        label_18 = new QLabel(tab_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(130, 150, 131, 21));
        label_18->setFrameShape(QFrame::WinPanel);
        label_19 = new QLabel(tab_7);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(390, 150, 131, 21));
        label_19->setFrameShape(QFrame::WinPanel);
        label_19->setWordWrap(false);
        label_19->setOpenExternalLinks(false);
        label_20 = new QLabel(tab_7);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(390, 250, 131, 21));
        label_20->setFrameShape(QFrame::WinPanel);
        lineEdit_7 = new QLineEdit(tab_7);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(560, 250, 151, 22));
        lineEdit_8 = new QLineEdit(tab_7);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(560, 150, 151, 22));
        pushButton_3 = new QPushButton(tab_7);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 410, 93, 28));
        pushButton_4 = new QPushButton(tab_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(430, 410, 93, 28));
        line_6 = new QFrame(tab_7);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(360, 100, 20, 281));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(tab_7);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(390, 200, 321, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        dateTimeEdit = new QDateTimeEdit(tab_7);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(100, 250, 194, 22));
        tabWidget_3->addTab(tab_7, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_7 = new QLabel(tab_10);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, -5, 771, 491));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../../rendez-vous.jpg")));
        label_7->setScaledContents(true);
        label_23 = new QLabel(tab_10);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(290, 30, 151, 20));
        label_23->setFrameShape(QFrame::StyledPanel);
        label_23->setTextFormat(Qt::RichText);
        label_23->setScaledContents(false);
        label_24 = new QLabel(tab_10);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(150, 150, 421, 21));
        label_24->setFrameShape(QFrame::WinPanel);
        dateTimeEdit_3 = new QDateTimeEdit(tab_10);
        dateTimeEdit_3->setObjectName(QStringLiteral("dateTimeEdit_3"));
        dateTimeEdit_3->setGeometry(QRect(270, 250, 194, 22));
        pushButton_6 = new QPushButton(tab_10);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(320, 350, 93, 28));
        tabWidget_3->addTab(tab_10, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_5 = new QLabel(tab_9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 160, 55, 16));
        label_9 = new QLabel(tab_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 771, 491));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../../rendez-vous.jpg")));
        label_9->setScaledContents(true);
        label_21 = new QLabel(tab_9);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(300, 30, 151, 20));
        label_21->setFrameShape(QFrame::StyledPanel);
        label_21->setTextFormat(Qt::RichText);
        label_21->setScaledContents(false);
        label_22 = new QLabel(tab_9);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(160, 160, 421, 21));
        label_22->setFrameShape(QFrame::WinPanel);
        dateTimeEdit_2 = new QDateTimeEdit(tab_9);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(280, 240, 194, 22));
        pushButton_5 = new QPushButton(tab_9);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(150, 370, 451, 28));
        tabWidget_3->addTab(tab_9, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_8 = new QLabel(tab_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, -5, 771, 491));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../../rendez-vous.jpg")));
        label_8->setScaledContents(true);
        label_25 = new QLabel(tab_8);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(280, 40, 161, 20));
        label_25->setFrameShape(QFrame::StyledPanel);
        label_25->setTextFormat(Qt::RichText);
        label_25->setScaledContents(false);
        label_26 = new QLabel(tab_8);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(150, 150, 431, 21));
        label_26->setFrameShape(QFrame::WinPanel);
        dateTimeEdit_4 = new QDateTimeEdit(tab_8);
        dateTimeEdit_4->setObjectName(QStringLiteral("dateTimeEdit_4"));
        dateTimeEdit_4->setGeometry(QRect(270, 250, 194, 22));
        pushButton_7 = new QPushButton(tab_8);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(320, 350, 93, 28));
        tabWidget_3->addTab(tab_8, QString());
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuApp = new QMenu(menubar);
        menuApp->setObjectName(QStringLiteral("menuApp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuApp->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Ajouter un patient", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Date de naissance", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Maladie", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Continuer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Revenir", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_3->setText(QString());
        label_28->setText(QApplication::translate("MainWindow", "Afficher un patient", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "CIN du patient que vous souhaitez afficher ses donn\303\251s", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Afficher les informations d'un patient afin et modifier ses informations", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "Modifier un patient", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "CIN du patient que vous souhaitez modifier ses donn\303\251s ", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Afficher les informations du rendez-vous afin et modifier ses informations", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_4->setText(QString());
        label_29->setText(QApplication::translate("MainWindow", "Supprimer un patient", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "CIN du patient que vous souhaitez supprimer ses donn\303\251s", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Afficher les informations d'un patient afin et supprimer ses informations", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Patient", Q_NULLPTR));
        label_6->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "Ajouter un rendez-vous", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Date du rendez-vous", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "CIN du Medecin", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "CIN du Patient", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Continuer", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Revenir", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_7->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "Afficher un rendez-vous", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Donner la date du rendez-vous que vous souhaitez afficher ses donn\303\251s", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_5->setText(QString());
        label_9->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "Modifier un rendez-vous", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Donner la date du rendez-vous que vous souhaitez modifier ses donn\303\251s", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Afficher les caracteristiques du rendez-vous afin et modifier ses informations", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_8->setText(QString());
        label_25->setText(QApplication::translate("MainWindow", "Supprimer un rendez-vous", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Donner la date du rendez-vous que vous souhaitez supprimer ses donn\303\251s", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Rendez-vous", Q_NULLPTR));
        menuApp->setTitle(QApplication::translate("MainWindow", "App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
