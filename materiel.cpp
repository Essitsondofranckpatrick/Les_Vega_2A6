#include "materiel.h"
#include <QDebug>

Materiel::Materiel()
{
    reference=0;
    Nom="";
    Quantite=0;
    Prix=0;
}
Materiel::Materiel(int Reference ,QString Nom,int Quantite,float Prix)
{
    this->reference=Reference;
    this->Nom=Nom;
    this->Quantite=Quantite;
    this->Prix=Prix;
}
int Materiel::get_reference(){return reference;}
QString Materiel::get_Nom(){return  Nom;}
int Materiel::get_Quantite(){return Quantite;}
float Materiel::get_Prix(){return Prix;}

bool Materiel::ajouter()
{
QSqlQuery query;

QString res= QString::number(reference);

query.prepare("INSERT INTO Materiel (Reference,Nom,Quantite,Prix) "
                    "VALUES (:Reference,:Nom,:Quantite,:Prix)");
query.bindValue(":Reference", res);
query.bindValue(":Nom",Nom);
query.bindValue(":Quantite",Quantite);
query.bindValue(":Prix",Prix);



return    query.exec();
}

QSqlQueryModel * Materiel::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from materiel");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantite"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));

    return model;
}

bool Materiel::supprimer(int Reference)
{
QSqlQuery query;

QString res= QString::number(Reference);

query.prepare("Delete from materiel where Reference = :Reference ");
query.bindValue(":Reference", res);
return    query.exec();
}


