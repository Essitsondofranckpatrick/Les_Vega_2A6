#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QDebug>
#include <QApplication>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    connection c;
    bool test=c.createconnect();
    if(test)
    {
    w.show();
        QMessageBox::critical(nullptr,QObject::tr("database is open"),QObject::tr("connection successful.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("database is open"),QObject::tr("connection failet.\n""Click Cancel to exit."),QMessageBox::Cancel);

    return a.exec();
}

