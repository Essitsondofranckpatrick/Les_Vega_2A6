#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "patient.h"
#include "rendezvous.h"
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->tableView->setModel(tmppatient.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_6_clicked()
{
  ui->tp->setModel(tmppatient.afficher());

}


void MainWindow::on_bouttonajouter_clicked()
{

   QString nom = ui->nom->text();
   QString prenom = ui->prenom->text();
   QString cin = ui->cin->text();
   QString numero = ui->numero->text();
   QString maladie = ui->maladie->text();
   QString date = ui->date->text();
   patient p(nom,prenom,cin,date,maladie,numero);
   bool test=p.ajouter();
   if(test)
 {
 QMessageBox::information(nullptr, QObject::tr("Ajouter un patient"),
                   QObject::tr("patient ajouté.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

 }
   else
       QMessageBox::critical(nullptr, QObject::tr("Ajouter un étudian"),
                   QObject::tr("Erreur !.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);








}

void MainWindow::on_pushButton_3_clicked()
{
    QString cinm = ui->cinm->text();

    QString cinp = ui->cinp->text();

    QString date1= ui->dater->text();


    rendezvous r(cinm,cinp,date1);
    bool test=r.ajouter();
    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Ajouter un rendez-vous"),
                    QObject::tr("rendez-vous ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un rendez-vous"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}



void MainWindow::on_pushButton_clicked()
{
     ui->tt->setModel(tmprendezvous.afficher());
}

void MainWindow::on_tablepatient_activated(const QModelIndex &index)
{

}

void MainWindow::on_pushButton_4_clicked()
{




}
