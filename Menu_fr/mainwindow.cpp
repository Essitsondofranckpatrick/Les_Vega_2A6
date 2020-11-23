#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "affichage.h"
#include "ui_affichage.h"
#include "affichage_ch.h"
#include "ui_affichage_ch.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Ajouter_clicked()
{
    int Id=ui->lineEdit_identifiant_even->text().toInt();
    QString Type=ui->comboBox_type_even->currentText();

    if ((Id!=NULL)&&(Type!=""))
    {
    Evenement E(Id,Type);
    bool test=E.ajouter();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Evenement"),QObject::tr("Evenement ajouter avec succés.\n""click cancel to exit."),QMessageBox::Cancel);
    }
    else
          QMessageBox::information(nullptr, QObject::tr("Ajouter un Evenement"),QObject::tr("Evenement n'a pas été ajouter.\n""click cancel to exit."),QMessageBox::Cancel);
    }
}

void MainWindow::on_Ajouter_ch_clicked()
{
    int num_ch=ui->Num_chambre->text().toInt();
    int nbre_ch=ui->Nombre_chambre->text().toInt();
    QString type=ui->Typ_chambre->currentText();

if ((num_ch!=NULL)&&(nbre_ch!=NULL)&&(type!=""))
{
    Chambre C(num_ch,nbre_ch,type);
    bool Test=C.ajouter();
    if(Test)
    {
        QMessageBox::information(nullptr, QObject::tr("Ajouter une chambre"),QObject::tr("Chambre ajouter avec succés.\n""click cancel to exit."), QMessageBox::Cancel);
    }
    else
         QMessageBox::information(nullptr, QObject::tr("Ajouter une chambre"),QObject::tr("L'ajout de la chambre a echoué.\n""click cancel to exit."), QMessageBox::Cancel);


}

}

void MainWindow::on_Afficher_ch_clicked()
{
  Affichage af ;
  af.exec() ;
  af.show () ;
}

void MainWindow::on_Afficher_clicked()
{
    Affichage_ch af ;
    af.exec() ;
    af.show () ;
}

void MainWindow::on_Supprimer_ch_clicked()
{
    int num_ch=ui->Supprimer_ch->text().toInt();
    int nbre_ch=ui->Supprimer_ch->text().toInt();
    bool test=Ctmp.Supprimer(num_ch,nbre_ch);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("Suppression effectuée\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
            else
             QMessageBox::information(nullptr, QObject::tr("Not OK"),QObject::tr("Suppression non effectuée\n""Click Cancel to exit."),QMessageBox::Cancel);
}

void MainWindow::on_Supprimer_clicked()
{
    int Id=ui->Supprimer->text().toInt();
    bool test=Etmp.supprimer(Id);

    if(test)
    {
         QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("Suppression effectuée\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    else
         QMessageBox::information(nullptr, QObject::tr("Not OK"),QObject::tr("Suppression non effectuée\n""Click Cancel to exit."),QMessageBox::Cancel);
}
