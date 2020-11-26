#include "fournisseur.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QString>
#include <QSqlQuery>

Fournisseur::Fournisseur()
{
Id=0;
Nom_entreprise="";
Numero_telephone="";
Mail="";
Adresse="";
Type_fourniture="";
}
Fournisseur::Fournisseur(int Id,QString Nom_entreprise,QString Numero_telephone,QString Mail,QString Adresse,QString Type_fourniture)
{
  this->Id=Id;
  this->Nom_entreprise=Nom_entreprise;
  this->Numero_telephone=Numero_telephone;
  this->Mail=Mail;
  this->Adresse=Adresse;
  this->Type_fourniture=Type_fourniture;
}

int Fournisseur::get_Id(){return Id;}
QString Fournisseur::get_Nom_entreprise(){return  Nom_entreprise;}
QString Fournisseur::get_Numero_telephone(){return Numero_telephone;}
QString Fournisseur::get_Mail(){return Mail ;}
QString Fournisseur::get_Adresse(){return Adresse;}
QString Fournisseur::get_Type_fourniture(){return Type_fourniture ;}


bool Fournisseur::ajouter()
{
QSqlQuery query;

QString res= QString::number(Id);

query.prepare("INSERT INTO fournisseur (Id,Nom_entreprise,Numero_telephone,Mail,Adresse,Type_fourniture) "
                    "VALUES (:Id,:Nom_entreprise,:Numero_telephone,:Mail,:Adresse,:Type_fourniture)");
query.bindValue(":Id",res);
query.bindValue(":Nom_entreprise",Nom_entreprise);
query.bindValue(":Numero_telephone",Numero_telephone);
query.bindValue(":Mail",Mail);
query.bindValue(":Adresse",Adresse);
query.bindValue(":Type_fourniture",Type_fourniture);



return    query.exec();
}

QSqlQueryModel * Fournisseur::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from fournisseur");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom_entreprise"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Numero_telephone"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Mail"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Type_fourniture"));


    return model;
}

bool Fournisseur::supprimer(int Id)
{
QSqlQuery query;


QString res= QString::number(Id);

query.prepare("Delete from fournisseur where Id= :Id");
query.bindValue(":Id", res);
return    query.exec();
}

