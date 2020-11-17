#include "connection.h"
#include "QSqlDatabase"
#include <QSqlError>
#include <QSqlQuery>


connection::connection()
{

}

bool connection::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Franck");
    db.setUserName("system");
    db.setPassword("azerty");

    if(db.open())
        test=true;

    return test;
  }
