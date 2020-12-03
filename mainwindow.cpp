#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include <QPainter>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include<QComboBox>
#include <QMessageBox>
#include <QDebug>
#include<QSystemTrayIcon>
#include<QObject>


#include <QMessageBox>



#include <QPainter>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>

#include <QPrinter>
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include <QPieSlice>
#include <QPieSeries>
#include <QtCharts/QChartView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>




#include <QPainter>

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
    ui->tableView->setModel(tempadmin.afficher());

    ui->comboBox_ID_commande->setModel(tempadmin.afficher());
    ui->comboBoxmmo->setModel(tempadmin.afficher());


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

      int cin = ui->lineEdit_cin->text().toInt();
      QString nom = ui->lineEdit_nome->text();
      QString prenom = ui->lineEdit_prenome->text();

      QString grade= ui->lineEdit_fonctione->text();
      QString mail= ui->lineEdit_maile->text();
     int salaire= ui->lineEdit_salairee->text().toInt();


    admin Ad (cin,nom,prenom,grade,salaire,mail);
    bool test=Ad.ajouter();
    if(test)
  {
        ui->tableView->setModel(tempadmin.afficher());//refresh
  QMessageBox::information(nullptr, QObject::tr("ajouter agent"),
                    QObject::tr("agent ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("ajouter agent"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tableView->setModel(tempadmin.afficher());
    ui->comboBox_ID_commande->setModel(tempadmin.afficher());
    ui->comboBoxmmo->setModel(tempadmin.afficher());

}

void MainWindow::on_pushButton_2_clicked()
{

    //QDateTime datecreation = date.currentDateTime();
    //QString afficheDC = "Date de Creation PDF : " + datecreation.toString() ;
           QPdfWriter pdf("C:/Users/aadhayma/Desktop/DISK1/Pdf2.pdf");
           QPainter painter(&pdf);
          int i = 4000;
               painter.setPen(Qt::blue);
               painter.setFont(QFont("Arial", 30));
               painter.drawText(1100,1200,"Liste Des Facture ");
               painter.setPen(Qt::black);
               painter.setFont(QFont("Arial", 50));
              // painter.drawText(1100,2000,afficheDC);
               painter.drawRect(100,100,7300,2600);
               //painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/RH/Desktop/projecpp/image/logopdf.png"));
               painter.drawRect(0,3000,9600,500);
               painter.setFont(QFont("Arial", 9));
               painter.drawText(200,3300,"ID");
               painter.drawText(1700,3300,"NOM");
               painter.drawText(3200,3300,"PRENOM");
               painter.drawText(4900,3300,"DATEE");
               painter.drawText(6600,3300,"MONTANT");
               painter.drawText(8100,3300,"PAIMENT");
               QSqlQuery query;
               query.prepare("select * from FACTURE");
               query.exec();
               while (query.next())
               {
                   painter.drawText(200,i,query.value(0).toString());
                   painter.drawText(1700,i,query.value(1).toString());
                   painter.drawText(3200,i,query.value(2).toString());
                   painter.drawText(4900,i,query.value(3).toString());
                   painter.drawText(6600,i,query.value(4).toString());
                   painter.drawText(8100,i,query.value(5).toString());
                  i = i + 500;
               }
               int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
                   if (reponse == QMessageBox::Yes)
                   {
                       QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/aadhayma/Desktop/DISK1/Pdf2.pdf"));
                       painter.end();
                   }
                   if (reponse == QMessageBox::No)
                   {
                        painter.end();
                   }

}



void MainWindow::on_pushButton_6_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("select * from admin where salaire < 1000 ");
        float salaire=model->rowCount();
        model->setQuery("select * from admin where salaire between 1000 and 5000 ");
        float salairee=model->rowCount();
        model->setQuery("select * from admin where salaire>5000 ");
        float salaireee=model->rowCount();
        float total=salaire+salairee+salaireee;
        QString a=QString("moins de 1000 "+QString::number((salaire*100)/total,'f',2)+"%" );
        QString b=QString("entre 1000 et 5000 "+QString::number((salairee*100)/total,'f',2)+"%" );
        QString c=QString("+5000 "+QString::number((salaireee*100)/total,'f',2)+"%" );
        QPieSeries *series = new QPieSeries();
        series->append(a,salaire);
        series->append(b,salairee);
        series->append(c,salaireee);
if (salaire!=0)
{QPieSlice *slice = series->slices().at(0);
 slice->setLabelVisible();
 slice->setPen(QPen());}
if ( salairee!=0)
{
         // Add label, explode and define brush for 2nd slice
         QPieSlice *slice1 = series->slices().at(1);
         //slice1->setExploded();
         slice1->setLabelVisible();
}
if(salaireee!=0)
{
         // Add labels to rest of slices
         QPieSlice *slice2 = series->slices().at(2);
         //slice1->setExploded();
         slice2->setLabelVisible();
}
        // Create the chart widget
        QChart *chart = new QChart();
        // Add data to chart with title and hide legend
        chart->addSeries(series);
        chart->setTitle("Pourcentage Par Salaire:totale de "+ QString::number(total));
        chart->legend()->hide();
        // Used to display the chart
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->resize(1000,500);
        chartView->show();

}

void MainWindow::on_pushButton_4_clicked()
{
    int res=ui->comboBox_ID_commande->currentText().toInt();
                bool test=tempadmin.supprimer(res);
                if(test)
                {
                    ui->comboBox_ID_commande->setModel(tempadmin.afficher());
                    ui->tableView->setModel(tempadmin.afficher());
                    QMessageBox::information(nullptr, QObject::tr("Supprimer une agent"),
                                QObject::tr("agent supprimé.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);

                }
                else
                    QMessageBox::critical(nullptr, QObject::tr("Supprimer une commande"),
                                QObject::tr("Erreur !.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_radioButton_clicked()
{
    ui->tableView->setModel(tempadmin.triadmin());
}

void MainWindow::on_pushButton_7_clicked()
{
    //int cin = ui->lineEdit_7->text().toInt();
   //bool test=tempadmin.supprimer(cin);
//if(test)
//{ ui->tableView->setModel(tempadmin.afficher());

//}
}

void MainWindow::on_pushButton_8_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom = ui->lineEdit_nomm->text();
    QString prenom = ui->lineEdit_prenomm->text();

    QString date= ui->dateEdit->text();
    int montant= ui->lineEdit_montantt->text().toInt();
   QString paiment= ui->lineEdit_paymontt->text();


  facture fa (id,nom,prenom,date,montant,paiment);
  bool test=fa.ajouter();
  if(test)
{
      ui->tableView_2->setModel(tempfacutre.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("ajouter agent"),
                  QObject::tr("facture ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("ajouter agent"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_sup_clicked()
{


    int res=ui->comboBox_2->currentText().toInt();
                bool test=tempfacutre.supprimer(res);
                if(test)
                {
                     ui->comboBox_2->setModel(tempfacutre.afficher());
                    ui->tableView_2->setModel(tempfacutre.afficher());
                    QMessageBox::information(nullptr, QObject::tr("Supprimer une facture"),
                                QObject::tr("facture supprimé.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);

                }
                else
                    QMessageBox::critical(nullptr, QObject::tr("Supprimer une commande"),
                                QObject::tr("Erreur !.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);
    //int id = ui->lineEdit_sup->text().toInt();
    //bool test=tempfacutre.supprimer(id);
//if(test)
//{ ui->tableView_2->setModel(tempfacutre.afficher());
    //QMessageBox::information(nullptr,QObject::tr("ok"),
            //QObject::tr("suprimer"),QMessageBox())

}



//void MainWindow::on_pushButton_modifier_clicked()
//{
   // int id = ui->lineEdit_mid->text().toInt();
     //QString nom= ui->lineEdit_mnom->text();
    // QString prenom=ui->lineEdit_mprenom->text();
    // QString date =ui->dateEdit_mdate->text();
    // int montant= ui->lineEdit_mmontant->text().toInt();
    // QString paiment=ui->lineEdit_mpaiment->text();





     // bool test=tempfacutre.modifier( id,nom,prenom,date,montant,paiment);
       //  if (test)
        // {
             // ui->tableView_2->setModel(tempfacutre.afficher());

//}
//}

void MainWindow::on_radioButton_date_clicked()
{
    ui->tableView_2->setModel(tempfacutre.tridate());
}

void MainWindow::on_radioButton_montant_clicked()
{
    ui->tableView_2->setModel(tempfacutre.trimontant());

}

void MainWindow::on_pushButton_9_clicked()
{
    //QDateTime datecreation = date.currentDateTime();
    //QString afficheDC = "Date de Creation PDF : " + datecreation.toString() ;
           QPdfWriter pdf("C:/Users/aadhayma/Desktop/DISK1/Pdf.pdf");
           QPainter painter(&pdf);
          int i = 4000;
               painter.setPen(Qt::blue);
               painter.setFont(QFont("Arial", 30));
               painter.drawText(1100,1200,"Liste Des Agents ");
               painter.setPen(Qt::black);
               painter.setFont(QFont("Arial", 50));
              // painter.drawText(1100,2000,afficheDC);
               painter.drawRect(100,100,7300,2600);
               //painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/RH/Desktop/projecpp/image/logopdf.png"));
               painter.drawRect(0,3000,9600,500);
               painter.setFont(QFont("Arial", 9));
               painter.drawText(200,3300,"CIN");
               painter.drawText(1700,3300,"NOM");
               painter.drawText(3200,3300,"PRENOM");
               painter.drawText(4900,3300,"SALAIRE");
               painter.drawText(6600,3300,"GRADE");
               painter.drawText(8100,3300,"MAIL");
               QSqlQuery query;
               query.prepare("select * from ADMIN");
               query.exec();
               while (query.next())
               {
                   painter.drawText(200,i,query.value(0).toString());
                   painter.drawText(1700,i,query.value(1).toString());
                   painter.drawText(3200,i,query.value(2).toString());
                   painter.drawText(4900,i,query.value(3).toString());
                   painter.drawText(6600,i,query.value(4).toString());
                   painter.drawText(8100,i,query.value(5).toString());
                  i = i + 500;
               }
               int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
                   if (reponse == QMessageBox::Yes)
                   {
                       QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/aadhayma/Desktop/DISK1/Pdf.pdf"));
                       painter.end();
                   }
                   if (reponse == QMessageBox::No)
                   {
                        painter.end();
                   }
}





void MainWindow::on_pushButton_10_clicked()
{

    int cin= ui->comboBoxmmo->currentText().toInt();
                  int salaire= ui->lineEdit_21->text().toInt();

                bool test=tempadmin.modifier( cin,salaire);
                   if (test)
                   {//ui->comboBox_ID_fournisseur_modifier->setModel(tempadmin.afficher());
                       ui->tableView->setModel(tempadmin.afficher());//refresh

                       QMessageBox::information(nullptr, QObject::tr("Modifier un fournisseur"),
                                   QObject::tr("Fournisseur modifié.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);

                   }
                   else
                       QMessageBox::critical(nullptr, QObject::tr("Modifier un fournisseur"),
                                   QObject::tr("Erreur !.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);
    }





void MainWindow::on_pushButton_11_clicked()
{
    QString nom = ui->lineEdit_recherhcer->text();
    ui->tableView->setModel(tempadmin.rechercher(nom));

}










void MainWindow::on_pushButton_modifier_clicked()
{
    int id= ui->comboBox3->currentText().toInt();
                  int montant= ui->lineEditmon->text().toInt();

                bool test=tempfacutre.modifier( id,montant);
                   if (test)
                   {//ui->comboBox_ID_fournisseur_modifier->setModel(tempadmin.afficher());
                       ui->tableView_2->setModel(tempfacutre.afficher());//refresh

                       QMessageBox::information(nullptr, QObject::tr("Modifier un fournisseur"),
                                   QObject::tr("Fournisseur modifié.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);

                   }
                   else
                       QMessageBox::critical(nullptr, QObject::tr("Modifier un fournisseur"),
                                   QObject::tr("Erreur !.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);
    }



void MainWindow::on_LOAD_clicked()
{
    ui->tableView_2->setModel(tempfacutre.afficher());

    ui->comboBox_2->setModel(tempfacutre.afficher());
    ui->comboBox3->setModel(tempfacutre.afficher());

}
