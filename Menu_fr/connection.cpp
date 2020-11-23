#include "connection.h"

connection::connection()
{

}
bool connection::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projet_cpp");
    db.setUserName("patrick");
    db.setPassword("esprit20");

    if(db.open())
        test=true;

    return test;
}
