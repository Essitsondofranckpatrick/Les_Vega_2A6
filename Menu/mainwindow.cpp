#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_Ajouter_even_clicked()
{
    int id=ui->lineEdit_ajouter_even_ID->text().toInt();
    QString type=ui->lineEdit_ajouter_even_type->text();

    evenement e(id,type);
   bool test=e.ajouter();
   if(test)
   {
       QMessageBox::information(nullptr,QObject::tr("Ajouter un évènement"),QObject::tr("Evenement ajouter avec succes.\n""click cancel to exit."),QMessageBox::Cancel);
   }
   else
   {
        QMessageBox::information(nullptr,QObject::tr("Ajouter un évènement"),QObject::tr("Erreur.\n""click cancel to exit."),QMessageBox::Cancel);
   }

}
