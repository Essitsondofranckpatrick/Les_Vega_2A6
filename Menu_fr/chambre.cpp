#include "chambre.h"

Chambre::Chambre()
{
    num_ch=0;
    nbre_ch=0;
    type="";
}
Chambre::Chambre(int num_ch, int nbre_ch, QString type)
{
    this->num_ch=num_ch;
    this->nbre_ch=nbre_ch;
    this->type=type;
}
bool Chambre::ajouter()
{
    QSqlQuery quarry;
    //QString Res=QString::number(num_ch,nbre_ch);
     //QString Qes=QString::number(nbre_ch);
    quarry.prepare("INSERT INTO Chambre(NUM_CH,TYPE_CHA,NBRE_CH)""VALUES(:num_ch,:type,:nbre_ch)");
    quarry.bindValue(":num_ch",num_ch);
    quarry.bindValue(":nbre_ch",nbre_ch);
    quarry.bindValue(":type",type);

    return  quarry.exec();
}
bool Chambre::Supprimer(int nbre_ch,int num_ch)
{
    QSqlQuery query;
    QString res=QString::number(nbre_ch,num_ch);
    query.prepare("Delete from Chambre where NBRE_CH,NUL_CH= :nbre_ch, :num_ch");
    query.bindValue(":nbre_ch",res);
    query.bindValue(":num_ch",res);

    return query.exec();

}
