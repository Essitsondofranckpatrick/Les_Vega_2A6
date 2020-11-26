#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "principale.h"
#include "dialog.h"

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
    void on_connecter_clicked();

    void on_modepasseoublie_clicked();

private:
    Ui::MainWindow *ui;
    principale *principale;
    Dialog *Dialog;
};
#endif // MAINWINDOW_H
