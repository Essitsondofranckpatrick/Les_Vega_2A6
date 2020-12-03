#include "conex.h"

#include "QtSql/QSql"
#include"QtSql/QSqlDatabase"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>


conex::conex()
{

}
bool conex::createconex()
{
    bool test=false;

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

//db.setHostName("localhost");
db.setDatabaseName("projetc++");
db.setUserName("med22");
db.setPassword("mookos");
if (db.open())
test=true;





    return  test;
}

