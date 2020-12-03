#ifndef ADMIN_H
#define ADMIN_H

#include <QString>
#include <QDialog>
#include<QSqlQueryModel>
#include<QSqlQuery>

#include <QString>
#include <QTableView>

class admin
{
public:
    admin();
    admin(int,QString,QString,QString,int,QString);
    int get_cin(){return cin;}
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    QString get_grade(){return grade;}
    int get_salaire(){return salaire;}
    QString get_mail(){return mail;}
    bool ajouter();
       QSqlQueryModel * afficher();
       bool supprimer(int);
       bool supprimerr(int);
       bool modifier(int , int );
       QSqlQueryModel * rechercher(QString);
       QSqlQueryModel * triadmin();
       QSqlQueryModel * afficher1();


   private:
       QString nom,prenom,grade,mail;
       int salaire;
       int cin ;
   };
#endif // ADMIN_H

