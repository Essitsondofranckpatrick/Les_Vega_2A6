#ifndef AFFICHAGE_CH_H
#define AFFICHAGE_CH_H

#include <QDialog>

namespace Ui {
class Affichage_ch;
}

class Affichage_ch : public QDialog
{
    Q_OBJECT

public:
    explicit Affichage_ch(QWidget *parent = nullptr);
    ~Affichage_ch();

private:
    Ui::Affichage_ch *ui;
};

#endif // AFFICHAGE_CH_H
