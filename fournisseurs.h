#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Fournisseur
{public:
    Fournisseur();
    Fournisseur(int,QString,QString,QString,QString,QString);

    int get_Id();
    QString get_Nom_entreprise();
    QString get_Numero_telephone();
    QString get_Mail();
    QString get_Adresse();
    QString get_Type_fourniture();

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
private:
    QString Nom_entreprise,Numero_telephone,Mail,Adresse,Type_fourniture;
    int Id;
};

#endif // FOURNISSEUR_H
