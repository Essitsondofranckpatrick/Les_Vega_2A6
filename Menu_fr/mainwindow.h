#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "evenement.h"
#include "chambre.h"
#include <QMessageBox>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Ajouter_clicked();

    void on_Ajouter_ch_clicked();

    void on_Afficher_ch_clicked();

    void on_Afficher_clicked();

    void on_Supprimer_ch_clicked();

    void on_Supprimer_clicked();

private:
    Ui::MainWindow *ui;
    Chambre Ctmp;
    Evenement Etmp;
};
#endif // MAINWINDOW_H
