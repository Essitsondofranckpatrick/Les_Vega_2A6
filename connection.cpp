#include "connection.h"
#include "QSqlDatabase"
#include <QString>

connection::connection()
{

}
bool connection::ouvrirConnection()
{
    bool test=false ;
    QSqlDatabase db=QSqlDatabase ::addDatabase("QODBC") ;
db.setDatabaseName("Source_Projet2A") ;
db.setUserName("system") ;
db.setPassword("123456789") ;
if(db.open())
    test=true ;
else throw QString("erreur parametres" + test) ;

return test ;
}
void connection::fermerconnection()
{db.close();}
