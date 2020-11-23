#ifndef EVENEMENT_H
#define EVENEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Evenement
{
public:
    Evenement();
    Evenement(int,QString);
    QString get_Type(){return Type;}
    int get_Id(){return Id;}

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
private:
    QString Type;
    int Id;

};

#endif // EVENEMENT_H
