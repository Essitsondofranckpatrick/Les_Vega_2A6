#include "facture.h"
#include <QDebug>
#include "conex.h"
#include <QSqlQuery>
#include <QString>
#include <QTableView>
#include <QMessageBox>
#include <QDebug>
#include<QSystemTrayIcon>
#include<QUrlQuery>


facture::facture()
{
    id=0;
    nom="";
    prenom="";
    date="";
    montant=0;
    paiment="";
}
facture::facture(int id,QString nom, QString prenom, QString date, int montant, QString paiment)
{
  this->id=id;
  this->nom=nom;
  this->prenom=prenom;
  this->date=date;
  this->montant=montant;
  this->paiment=paiment;

}
bool facture::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO FACTURE (ID, NOM, PRENOM, DATEE, MONTANT, PAIMENT)" "VALUES (:id, :nom, :prenom, :date, :montant, :paiment)");
query.bindValue(":id", id);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":date", date);
query.bindValue(":montant", montant);
query.bindValue(":paiment", paiment);

return    query.exec();

}

QSqlQueryModel * facture::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from FACTURE ");
model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRENOM"));
model->setHeaderData(3, Qt::Horizontal,QObject::tr("DATEE"));
model->setHeaderData(4, Qt::Horizontal,QObject::tr("MONTANT"));
model->setHeaderData(5, Qt::Horizontal,QObject::tr("PAIMENT"));

return model;
}

bool facture::supprimer(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
        query.prepare("delete from FACTURE where ID= :id");
        query.bindValue(":id",res);
        return query.exec();

}
bool facture:: modifier(int id,int montant )
{ QSqlQuery query;
    QString res= QString::number(id);
    QString res2= QString::number(montant);

    query.prepare("update FACTURE set ID=:id,MONTANT=:montant where ID=:id");
    query.bindValue(":ID",res);

    query.bindValue(":PAIMENT", res2);

    return    query.exec();

}

QSqlQueryModel * facture::trimontant()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * FROM FACTURE ORDER BY MONTANT asc");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEE"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("MONTANT"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("PAIMENT"));


    return model;
}

QSqlQueryModel * facture::tridate()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * FROM FACTURE ORDER BY DATEE asc");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATEE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("MONTANT"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("PAIMENT"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("SALAIRE"));


    return model;
}

bool facture::supprimerr(int id )
{
    QSqlQuery query;
        QString res = QString::number(id);
        query.prepare("Delete from FACTURE where ID = :id");
        query.bindValue(":id", res);
        return    query.exec();
}

