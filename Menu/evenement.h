#ifndef EVENEMENT_H
#define EVENEMENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class evenement
{
public:
    evenement();
    evenement(int,QString);
    QString get_type(){return type;}
    int get_id(){return id;}
    bool ajouter();
    QSqlQueryModel* afficher();


private:
    QString type;
    int id;
};

#endif // EVENEMENT_H
