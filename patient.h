#ifndef PATIENT_H
#define PATIENT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
class patient
{
public:
    patient();
    patient(QString,QString,QString,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_maladie();
    QString get_date();
    QString get_cin();
    QString get_numero();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);

private:
    QString nom,prenom,maladie,cin,numero,date;







};

#endif // PATIENT_H
