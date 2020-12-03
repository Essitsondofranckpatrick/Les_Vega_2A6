#ifndef NONAME_H
#define NONAME_H
#include <QString>
#include <QDialog>
#include<QSqlQueryModel>
#include<QSqlQuery>

#include <QString>
#include <QTableView>

class facture
{
public:
    facture();

    facture (int,QString,QString,QString,int,QString);
    int get_id(){return id;}
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    QString get_date(){return date;}
    int get_montant(){return montant;}
    QString get_paiment(){return paiment;}
    bool ajouter();
       QSqlQueryModel * afficher();
       bool supprimer(int);
       bool modifier(int,int);
       QSqlQueryModel * tridate();
       QSqlQueryModel * trimontant();
        QSqlQueryModel * triNOM();

       bool supprimerr(int);

private:
    QString nom,prenom,date,paiment;
    int id;
    int montant ;
};

#endif // NONAME_H
