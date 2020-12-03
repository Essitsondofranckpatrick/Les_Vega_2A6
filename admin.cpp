#include "admin.h"

#include <QDebug>
#include "conex.h"
#include <QSqlQuery>
#include <QString>
#include <QTableView>
#include <QMessageBox>
#include <QDebug>
#include<QSystemTrayIcon>
#include<QUrlQuery>


admin::admin()
{
    cin=0;
    nom="";
    prenom="";
    grade="";
    salaire=0;
    mail="";
}
admin::admin(int cin,QString nom, QString prenom, QString grade, int salaire, QString mail)
{
  this->cin=cin;
  this->nom=nom;
  this->prenom=prenom;
  this->grade=grade;
  this->salaire=salaire;
  this->mail=mail;
}
//QString admin::get_cin()
//{return cin;}
//QString admin::get_nom(){return nom;}
//QString admin::get_prenom(){return prenom;}
//QString admin::get_grade(){return grade;}
//QString admin::get_salaire(){return salaire;}
//QString admin::get_mail(){return mail;}
bool admin::ajouter()
{
QSqlQuery query;
QString sal=QString::number(salaire);
query.prepare("INSERT INTO ADMIN (CIN, NOM, PRENOM, GRADE, SALAIRE, MAIL)" "VALUES (:cin, :nom, :prenom, :grade, :salaire, :mail)");
query.bindValue(":cin", cin);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":grade", grade);
query.bindValue(":salaire", sal);
query.bindValue(":mail", mail);

return    query.exec();
}
QSqlQueryModel * admin::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from ADMIN ");
model->setHeaderData(0, Qt::Horizontal,QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRENOM"));
model->setHeaderData(3, Qt::Horizontal,QObject::tr("MAIL"));
model->setHeaderData(4, Qt::Horizontal,QObject::tr("GRADE"));
model->setHeaderData(5, Qt::Horizontal,QObject::tr("SALAIRE"));

return model;
}

bool admin::supprimer(int cin)
{
    QSqlQuery query;
    QString res=QString::number(cin);
        query.prepare("delete from ADMIN where CIN= :cin");
        query.bindValue(":cin",res);
        return query.exec();

}

QSqlQueryModel * admin::triadmin()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * FROM ADMIN ORDER BY SALAIRE asc");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("GRADE"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("MAIL"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("SALAIRE"));


    return model;
}



bool admin:: modifier(int cin,int salaire)
{
    QSqlQuery query;
        QString res= QString::number(cin);
        QString res2= QString::number(salaire);


             query.prepare("UPDATE ADMIN set CIN=:cin,SALAIRE=:salaire   where CIN= :cin ");
             query.bindValue(":cin", res);
             query.bindValue(":salaire", res2);



            return    query.exec();

        return    query.exec();
}

QSqlQueryModel * admin::rechercher(QString e )
{
    QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("SELECT * FROM ADMIN WHERE NOM ='"+e+"' ;");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("MAIL"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("GRADE"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("SALAIRE"));

    return model ;
}
bool admin::supprimerr(int cin )
{
    QSqlQuery query;
        QString res = QString::number(cin);
        query.prepare("Delete from ADMIN where CIN = :cin");
        query.bindValue(":cin", res);
        return    query.exec();
}
