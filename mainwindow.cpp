#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connecter_clicked()
{
    QString Indentifiant=ui->lineEdit_Identifiant->text();
    QString motdepasse=ui->lineEdit_motdepasse->text();

    if(Indentifiant=="test"&& motdepasse=="test")
        {
            QMessageBox::information(this,"connecter","connecter");
            hide();
            principale = new class principale(this);
            principale->show();
        }

    else
        {
            QMessageBox::warning(this,"connecter","erreur");
        }
}


void MainWindow::on_modepasseoublie_clicked()
{
    hide();
    Dialog = new class Dialog(this);
    Dialog->show();
}
