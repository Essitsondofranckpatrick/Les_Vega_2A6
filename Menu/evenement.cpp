#include "evenement.h"

evenement::evenement()
{
id=0;
type="";
}

evenement::evenement(int id,QString type)
{
    this->id=id;
    this->type=type;
}

bool evenement::ajouter()
{
    QSqlQuery querry;
    QString res=QString::number(id);
    querry.prepare("INSERT INTO evenement(ID,TYPE)"
            "VALUES(:id,:type)");
    querry.bindValue(":id",res);
    querry.bindValue(":type",type);
    return querry.exec();

}
