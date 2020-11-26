#ifndef MATERIEL_H
#define MATERIEL_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Materiel
{public:
    Materiel();
    Materiel(int,QString,int,float);

    int get_reference();
    QString get_Nom();
    int get_Quantite();
    float get_Prix();

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
private:
    int reference;
    QString Nom;
    int Quantite;
    float Prix;
};

#endif // MATIERE_H
