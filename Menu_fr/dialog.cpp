#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    MainWindow ma;
    ma.show();
}
