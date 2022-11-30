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
    void getXPositionOfStartPeak();
//    QVector <double> & getVectorX(); //getter do dostepu do vectorX i poniezej vectorY
//    QVector <double> & getVectorY();
    void setNewVectorForAnalysis();
    void areaUnderTheCurve();
    double getValueAreaUTC();

private slots:
    void on_startDrawing_clicked();
    void on_clearCurve_clicked();
    void on_analysisButton_clicked();

private:
    Ui::MainWindow *ui;
    QVector<double> vectorX,vectorY;//vectors to loading data inside mainwindow class

    double start , end ; // value for start and end peak, for choose proper vector
    int stIndex = 0, enIndex = 0;
    int sIndex = 0, fIndex = 0; // for index new vector, for analysis
    double valueAreaUnderTheCurve = 0;
    double sPeak = 0; //for analysis
    double fPeak = 0; //for analysis
    double areaUTC = 0; //for analysis area under the curve


};
#endif // MAINWINDOW_H
