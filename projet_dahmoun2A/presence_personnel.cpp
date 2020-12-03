#include "presence_personnel.h"
#include <QDebug>
#include "connection.h"
#include <QSqlQuery>
#include <QString>
#include <QTableView>
#include <QMessageBox>
#include <QDebug>
#include<QSystemTrayIcon>
#include<QUrlQuery>


Presence_personnel::Presence_personnel()
{
    CIN=0;
    Dateetheuredepointage="";

}
Presence_personnel::Presence_personnel(int CIN,QString Dateetheuredepointage )
{
  this->CIN=CIN;
  this->Dateetheuredepointage=Dateetheuredepointage;


}
bool Presence_personnel::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO PRÉSENCE_PERSONNEL (CIN, DATEETHEUREDEPOINTAGE)" "VALUES (:CIN, :Dateetheuredepointage, )");
query.bindValue(":CIN", CIN);
query.bindValue("Dateetheuredepointage:", Dateetheuredepointage);


return    query.exec();

}

QSqlQueryModel * Presence_personnel::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from PRÉSENCE_PERSONNEL ");
model->setHeaderData(0, Qt::Horizontal,QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal,QObject::tr("DATEETHEUREDEPOINTAGE"));


return model;
}

bool Presence_personnel::supprimer(int CIN)
{
    QSqlQuery query;
    QString res=QString::number(CIN);
        query.prepare("delete from PRÉSENCE_PERSONNEL where CIN= :CIN");
        query.bindValue(":CIN",res);
        return query.exec();

}

bool Presence_personnel:: modifier(int CIN,QString Dateetheuredepointage,QString NVDateetheuredepointage)
{ QSqlQuery query;
    QString res= QString::number(CIN);


    query.prepare("update PRESENCE set CIN=:CIN,DATEETHEUREDEPOINTAGE=Dateetheuredepointage:");
    query.bindValue(":CIN",res);
    query.bindValue(":DATEETHEUREDEPOINTAGE",Dateetheuredepointage);
     query.bindValue(":NVDATEETHEUREDEPOINTAGE",nvDateetheuredepointage);


    return    query.exec();

}




























