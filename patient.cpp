#include "patient.h"
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
patient::patient()
{
cin="";
nom="";
prenom="";
maladie="";
numero="";
date="";
}
patient::patient(QString nom,QString prenom, QString cin, QString date, QString maladie ,QString numero)
{
    this->nom=nom;
    this->prenom=prenom;
    this->cin=cin;
    this->date=date;
    this->numero=numero;
    this->maladie=maladie;

}
QString patient::get_cin(){return cin;}
QString patient::get_nom(){return nom;}
QString patient::get_prenom(){return prenom;}
QString patient::get_date(){return date;}
QString patient::get_maladie(){return maladie;}
QString patient::get_numero(){return numero;}

bool patient::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO patient (nom, prenom ,cin ,maladie , date1 ,numero ) "
                        "VALUES (:nom, :prenom, :cin, :maladie ,:date1 ,:numero)");

    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":cin", cin);
    query.bindValue(":maladie", maladie);
    query.bindValue(":date1", date);
    query.bindValue(":numero", numero);

    return    query.exec();
}
QSqlQueryModel * patient::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from patient");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("maladie"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("date1 "));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));
    return model;
}










