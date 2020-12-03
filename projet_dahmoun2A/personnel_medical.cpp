#include "personnel_medical.h"

#include <QDebug>
#include "connection.h"
#include <QSqlQuery>
#include <QString>
#include <QTableView>
#include <QMessageBox>
#include <QDebug>
#include<QSystemTrayIcon>
#include<QUrlQuery>


Personnel_medical::Personnel_medical()
{
    cin=0;
    nom="";
    prenom="";
    grade="";
    salaire=0;
    age=0;
}
Personnel_medical::Personnel_medical(int cin,QString nom, QString prenom, QString grade, int salaire, int age)
{
  this->cin=cin;
  this->nom=nom;
  this->prenom=prenom;
  this->grade=grade;
  this->salaire=salaire;
  this->age=age;
}
//QString Personnel_medical::get_cin()
//{return cin;}
//QString Personnel_medical::get_nom(){return nom;}
//QString Personnel_medical::get_prenom(){return prenom;}
//QString Personnel_medical::get_grade(){return grade;}
//QString Personnel_medical::get_salaire(){return salaire;}
//QString Personnel_medical::get_age(){return age;}
bool Personnel_medical::ajouter()
{
QSqlQuery query;
QString sal=QString::number(salaire);
query.prepare("INSERT INTO PERSONNE_MEDICAL (CIN, NOM, PRENOM, GRADE, SALAIRE, AGE)" "VALUES (:cin, :nom, :prenom, :grade, :salaire, :age)");
query.bindValue(":cin", cin);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":grade", grade);
query.bindValue(":salaire", sal);
query.bindValue(":age", age);

return    query.exec();

}

QSqlQueryModel * Personnel_medical::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from PERSONNE_MEDICAL ");
model->setHeaderData(0, Qt::Horizontal,QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRENOM"));
model->setHeaderData(3, Qt::Horizontal,QObject::tr("AGE"));
model->setHeaderData(4, Qt::Horizontal,QObject::tr("GRADE"));
model->setHeaderData(5, Qt::Horizontal,QObject::tr("SALAIRE"));

return model;
}

bool Personnel_medical::supprimer(int cin)
{
    QSqlQuery query;
    QString res=QString::number(cin);
        query.prepare("delete from PERSONNE_MEDICAL where CIN= :cin");
        query.bindValue(":cin",res);
        return query.exec();

}

bool Personnel_medical:: modifier(int cin , int salaire , int age , QString nom , QString prenom , QString grade )
{
    QSqlQuery query;
        QString res= QString::number(cin);
        QString res2= QString::number(salaire);

             query.prepare("UPDATE PERSONNE_MEDICAL set CIN=:cin,SALAIRE=:salaire ,NOM:=nom , PRENOM:=prenom , GRADE:=grade AGE:=age where CIN= :cin ");
             query.bindValue(":cin", res);
             query.bindValue(":salaire", res2);
             query.bindValue(":nom",nom);
             query.bindValue(":prenom",prenom);
              query.bindValue(":age", age);
             query.bindValue(":grade", grade);


            return    query.exec();

        return    query.exec();
}

QSqlQueryModel * Personnel_medical::triPersonnel_medical()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * FROM PERSONNE_MEDICAL ORDER BY SALAIRE asc");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("GRADE"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("AGE"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("SALAIRE"));


    return model;
}

QSqlQueryModel * Personnel_medical::rechercher(QString e )
{
    QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("SELECT * FROM PERSONNE_MEDICAL WHERE NOM ='"+e+"' ;");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("AGE"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("GRADE"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("SALAIRE"));

    return model ;
}



