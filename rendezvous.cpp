#include "rendezvous.h"

rendezvous::rendezvous()
{
    cinm="";
    cinp="";
    dater="";

    }
    rendezvous::rendezvous(QString cinm,QString cinp, QString dater)
    {
        this->cinm=cinm;
        this->cinp=cinp;
        this->dater=dater;

    }
    QString rendezvous::get_cinm(){return cinm;}
    QString rendezvous::get_dater(){return dater;}
    QString rendezvous::get_cinp(){return cinp;}


    bool rendezvous::ajouter()
    {
        QSqlQuery query;

        query.prepare("INSERT INTO rendezvous (cindupatient, cindumedecin, daterendezvous) "
                            "VALUES (:cindupatient, :cindumedecin, :daterendezvous)");

        query.bindValue(":cindupatient ", cinp);
        query.bindValue(":cindumedecin", cinm);
        query.bindValue(":daterendezvous", dater);


        return    query.exec();
    }

    QSqlQueryModel * rendezvous::afficher()
    {QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from rendezvous");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin patient"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("cin medecin "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("date du rendez-vous"));

        return model;
    }

