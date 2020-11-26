#ifndef RENDEZVOUS_H
#define RENDEZVOUS_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class rendezvous
{
public:
    rendezvous();
    rendezvous(QString,QString,QString);
    QString get_cinm();
    QString get_dater();
    QString get_cinp();

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
private:
    QString cinm,cinp,dater;
};

#endif // RENDEZVOUS_H
