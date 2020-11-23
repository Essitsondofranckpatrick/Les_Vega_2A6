#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Chambre
{
public:
    Chambre();
    Chambre(int,int,QString);
    QString get_type(){return type;}
    int get_nbre_ch(){return nbre_ch;}
    int get_num_ch(){return num_ch;}

    bool ajouter();
     QSqlQueryModel* Afficher();
     bool Supprimer(int,int);
private:
    QString type;
    int nbre_ch,num_ch;
};

#endif // CHAMBRE_H
