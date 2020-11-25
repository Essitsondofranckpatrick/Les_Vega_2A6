#ifndef CONNECTION_H
#define CONNECTION_H

#include<QtSql>
class connection

{



private:

     QSqlDatabase db ;

public:

    connection();

    bool ouvrirConnection() ;

    void fermerconnection() ;



};

#endif // CONNECTION_H
