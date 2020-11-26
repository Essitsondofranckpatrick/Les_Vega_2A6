#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "connection.h"
#include "patient.h"
#include "rendezvous.h"
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
    void on_tableWidget_cellActivated(int row, int column);

    void on_pushButton_clicked();

    void on_bouttonajouter_clicked();

    void on_bouttonajouter_clicked(bool checked);

    void on_tabpatient_cellActivated(int row, int column);

    void on_pushButton_3_clicked();

    void on_aff_clicked();

    void on_pushButton_6_clicked();

    void on_tablepatient_activated(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_supprimer_clicked();

    void on_supprimerrdv_clicked();

private:
    Ui::MainWindow *ui;
    patient tmppatient ;
    rendezvous tmprendezvous ;
};
#endif // MAINWINDOW_H
