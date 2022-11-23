#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "dataofdmpc.h"
#include "dataofdmpg.h"
#include "dataofdppc.h"
#include <QMessageBox>
#include <QDebug>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void drawingCurve();
    void clearDataCurve();
    void addDataVector();
    void setStartPeak();
    void setEndPeak();
    QVector <double> & getVectorX(); //getter do dostepu do vectorX i poniezej vectorY
    QVector <double> & getVectorY();
    double &getStartPeak(); //for get acces to the point of start peak (choose by student)
    double &getEndPeak(); // for get acces to the point of end peak (choose by student)


private slots:
    void on_startDrawing_clicked();
    void on_clearCurve_clicked();
    void on_analysisButton_clicked();

private:
    Ui::MainWindow *ui;
    QVector<double> vectorX,vectorY;//vectors to loading data inside mainwindow class
    double sPeak = 0;
    double fPeak = 0;
    double *swskPeak = &sPeak;
    double *fwskPeak = &fPeak;


    double areaUTC = 0; //for analysis area under the curve


};
#endif // MAINWINDOW_H
