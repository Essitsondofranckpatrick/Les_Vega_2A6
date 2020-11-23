#include "affichage_ch.h"
#include "ui_affichage_ch.h"

Affichage_ch::Affichage_ch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Affichage_ch)
{
    ui->setupUi(this);
}

Affichage_ch::~Affichage_ch()
{
    delete ui;
}
