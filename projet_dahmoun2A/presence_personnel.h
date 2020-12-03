#ifndef PRESENCE_PERSONNEL_H
#define PRESENCE_PERSONNEL_H

#include <QString>
#include <QDialog>
#include<QSqlQueryModel>
#include<QSqlQuery>

#include <QString>
#include <QTableView>

class Presence_personnel
{
public:
    Presence_personnel();

    Presence_personnel(int,QString);
    int get_CIN(){return CIN;}
    QString get_Dateetheuredepointage(){return Dateetheuredepointage;}

    bool ajouter();
       QSqlQueryModel * afficher();
       bool supprimer(int);
       bool modifier(int,QString,QString);

       bool supprimerr(int);

private:
    QString Dateetheuredepointage,nvDateetheuredepointage;
    int CIN;

};



#endif // PRESENCE_PERSONNEL_H
