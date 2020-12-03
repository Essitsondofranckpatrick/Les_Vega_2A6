#ifndef ADMIN_H
#define ADMIN_H

#include <QString>
#include <QDialog>
#include<QSqlQueryModel>
#include<QSqlQuery>

#include <QString>
#include <QTableView>

class Personnel_medical
{
public:
    Personnel_medical();
    Personnel_medical(int,QString,QString,QString,int,int);
    int get_cin(){return cin;}
    QString get_nom(){return nom;}
    QString get_prenom(){return prenom;}
    QString get_grade(){return grade;}
    int get_salaire(){return salaire;}
    int get_age(){return age;}
    bool ajouter();
       QSqlQueryModel * afficher();
       bool supprimer(int);
       bool supprimerr(int);
       bool modifier(int , int , int , QString , QString , QString );
       QSqlQueryModel * rechercher(QString);
       QSqlQueryModel * triPersonnel_medical();
       QSqlQueryModel * afficher1();


   private:
       QString nom,prenom,grade;
       int salaire;
       int cin ;
       int age ;
   };
#endif // ADMIN_H

