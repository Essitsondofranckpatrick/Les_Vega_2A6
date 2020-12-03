#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personnel_medical.h"
#include <QPainter>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include<QComboBox>
#include <QMessageBox>
#include <QDebug>
#include<QSystemTrayIcon>
#include<QObject>
#include <QTableView>

#include <QtCharts/QChartView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include"QSortFilterProxyModel"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(tempPersonnel_medical.afficher());



}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{



          int cin = ui->lineEdit_cin->text().toInt();
          QString nom = ui->lineEdit_Nom->text();
          QString prenom = ui->lineEdit_prenom->text();

          QString grade= ui->lineEdit_grade->text();
           int age= ui->lineEdit_age->text().toInt();
         int salaire= ui->lineEdit_Salaire->text().toInt();


        Personnel_medical Ad (cin,nom,prenom,grade,salaire,age);
        bool test=Ad.ajouter();
        if(test)
      {
         ui->tableView->setModel(tempPersonnel_medical.afficher());//refresh
      QMessageBox::information(nullptr, QObject::tr("ajouter personnel"),
                        QObject::tr("personnel ajouté.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

      }
        else
            QMessageBox::critical(nullptr, QObject::tr("ajouter personnel"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_12_clicked()
{


        ui->tableView->setModel(tempPersonnel_medical.afficher());
        ui->comboBox_ID_commande->setModel(tempPersonnel_medical.afficher());
        //ui->comboBoxmmo->setModel(tempPersonnel_medical.afficher());


}

void MainWindow::on_pushButton_5_clicked()
{


        int res=ui->comboBox_ID_commande->currentText().toInt();
                    bool test=tempPersonnel_medical.supprimer(res);
                    if(test)
                    {
                        ui->comboBox_ID_commande->setModel(tempPersonnel_medical.afficher());
                        ui->tableView->setModel(tempPersonnel_medical.afficher());
                        QMessageBox::information(nullptr, QObject::tr("Supprimer personnel"),
                                    QObject::tr("personnel supprimé.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);

                    }
                    else
                        QMessageBox::critical(nullptr, QObject::tr("Supprimer personnel"),
                                    QObject::tr("Erreur !.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_3_clicked()
{


        int cin= ui->comboBox->currentText().toInt();
                      int salaire= ui->lineEdit_4->text().toInt();
                       QString nom = ui->lineEdit->text() ;
                           QString   prenom= ui->lineEdit_2->text();
                            QString  grade= ui->lineEdit_5->text();
                            int age= ui->lineEdit_6->text().toInt();

                    bool test=tempPersonnel_medical.modifier( cin,salaire,age,prenom,grade,nom);
                       if (test)
                       {//ui->comboBox_ID_personnel_modifier->setModel(tempPersonnel_medical.afficher());
                           ui->tableView->setModel(tempPersonnel_medical.afficher());//refresh

                           QMessageBox::information(nullptr, QObject::tr("Modifier personnel"),
                                       QObject::tr("personnel modifié.\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);

                       }
                       else
                           QMessageBox::critical(nullptr, QObject::tr("Modifier personnel"),
                                       QObject::tr("Erreur !.\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);



}



void MainWindow::on_pushButton_11_clicked()
{

            ui->tableView->setModel(tempPersonnel_medical.triPersonnel_medical());

}


void MainWindow::on_pushButton_7_clicked()
{

        int CIN = ui->lineEdit_CINApr->text().toInt();
        QString Dateetheuredepointage= ui->dateTimeEdit->text();



      Presence_personnel Pr (CIN,Dateetheuredepointage);
      bool test=Pr.ajouter();
      if(test)
    {
          ui->tableView_2->setModel(tempPresence_personnel.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("ajouter presence"),
                      QObject::tr("presence ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("ajouter presence"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

}



void MainWindow::on_pushButton_13_clicked()
{


            ui->tableView->setModel(tempPresence_personnel.afficher());
            ui->comboBox_ID_commande->setModel(tempPresence_personnel.afficher());
            //ui->comboBoxmmo->setModel(tempPresence_personnel.afficher());



}



void MainWindow::on_pushButton_9_clicked()
{


    int res=ui->comboBox_2->currentText().toInt();
                bool test=tempPresence_personnel.supprimer(res);
                if(test)
                {
                     ui->comboBox_2->setModel(tempPresence_personnel.afficher());
                    ui->tableView_2->setModel(tempPresence_personnel.afficher());
                    QMessageBox::information(nullptr, QObject::tr("Supprimer une presence"),
                                QObject::tr("présence supprimé.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);

                }
                else
                    QMessageBox::critical(nullptr, QObject::tr("Supprimer une presence"),
                                QObject::tr("Erreur !.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);


}


void MainWindow::on_pushButton_8_clicked()
{

        int CIN = ui->lineEdit_CINmopr->text().toInt();
         QString Dateetheuredepointage= ui->dateTimeEdit_2->text();
         QString nvDateetheuredepointage=ui->dateTimeEdit_3->text();






          bool test=tempPresence_personnel.modifier( CIN,Dateetheuredepointage,nvDateetheuredepointage);
             if (test)
             {
                  ui->tableView_2->setModel(tempPresence_personnel.afficher());


}
}

void MainWindow::on_pushButton_14_clicked()
{


            QString nom = ui->lineEdit_7->text();
            ui->tableView->setModel(tempPersonnel_medical.rechercher(nom));





}
