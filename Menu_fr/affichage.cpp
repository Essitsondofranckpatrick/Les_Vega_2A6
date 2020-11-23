#include "affichage.h"
#include "ui_affichage.h"

Affichage::Affichage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Affichage)
{
    ui->setupUi(this);
}

Affichage::~Affichage()
{
    delete ui;
}
