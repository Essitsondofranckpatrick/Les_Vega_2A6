#include "evenement.h"

Evenement::Evenement()
{
      Id=0;
      Type="";
}
Evenement::Evenement(int Id,QString Type)
{
    this->Id=Id;
    this->Type=Type;
}
bool Evenement::ajouter()
{
    QSqlQuery querry;
    QString res=QString::number(Id);
    querry.prepare("INSERT INTO evenement(ID,TYPE)""VALUES(:Id,:Type)");
    querry.bindValue(":Id",res);
    querry.bindValue(":Type",Type);
    return querry.exec();
}
bool Evenement::supprimer(int Id)
{
    QSqlQuery quary;
    QString res=QString::number(Id);
    quary.prepare("Delete from Evenement where ID=:Id");
    quary.bindValue(":Id",res);
    return quary.exec();
}
