#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <QDialog>

namespace Ui {
class Affichage;
}

class Affichage : public QDialog
{
    Q_OBJECT

public:
    explicit Affichage(QWidget *parent = nullptr);
    ~Affichage();

private:
    Ui::Affichage *ui;
};

#endif // AFFICHAGE_H
