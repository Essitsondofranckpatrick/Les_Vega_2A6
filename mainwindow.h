#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "admin.h"
#include "facture.h"


#include <QMainWindow>
#include <QtCharts/QtCharts>
//#include <QChartView/QchartView>
//#include <QLineSeries>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots :


      void on_pushButton_clicked();

      void on_pushButton_3_clicked();

      void on_pushButton_2_clicked();

      void on_pushButton_4_clicked();

      void on_pushButton_6_clicked();

      void on_radioButton_clicked();

      void on_pushButton_7_clicked();

      void on_pushButton_8_clicked();

      void on_pushButton_sup_clicked();

      void on_pushButton_modifier_clicked();

      void on_radioButton_date_clicked();

      void on_radioButton_montant_clicked();

      void on_pushButton_9_clicked();

      void on_pushButton_10_clicked();

      void on_pushButton_11_clicked();

      void on_lineEdit_cin_2_editingFinished();

      void on_lineEdit_cin_2_cursorPositionChanged(int arg1, int arg2);

      void on_lineEdit_cin_2_textEdited(const QString &arg1);

      void on_lineEdit_cin_2_inputRejected();

      void on_LOAD_clicked();

private:
     Ui::MainWindow *ui;
     admin tempadmin;
     facture tempfacutre;
     facture tfact ;


};
#endif // MAINWINDOW_H
