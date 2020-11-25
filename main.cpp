#include "mainwindow.h"
#include "connection.h"

#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])

{

    QApplication a(argc, argv);

    MainWindow w;

    connection c ;

    bool test =c.ouvrirConnection() ;

    if(test)

    {

        QMessageBox::information(nullptr,QObject::tr("database opened"),

 QObject::tr("connection successfull\n"

             "click ok to exit"),QMessageBox::Ok) ;

      w.show();



    }

      if(!test)

        QMessageBox::information(nullptr,QObject::tr("database is not opened"),

 QObject::tr("connection failed\n"

             "click cancel to exit"),QMessageBox::Cancel) ;

    return a.exec();

}
