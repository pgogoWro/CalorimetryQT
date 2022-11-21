#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "dataofdmpc.h"
#include "dataofdmpg.h"
#include "dataofdppc.h"
#include <QMessageBox>
//#include "analysis.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //void setNewVectorForAnalysis();
    //void copyThePartOfCurve();
    void drawingCurve();
    void clearDataCurve();
    void addDataVector();
    double getStartPik(); //for get acces to the point of start peak (choose by student)
    double getEndPik(); // for get acces to the point of end peak (choose by student)
    QVector<double> vectorX,vectorY;//vectors to loading data inside mainwindow class
    //QVector <double> copyVectorY; //vector for analysis

private slots:
    void on_startDrawing_clicked();
    void on_clearCurve_clicked();
    void on_analysisButton_clicked();

private:
    Ui::MainWindow *ui;
    double areaUTC = 0; //for analysis area under the curve

};
#endif // MAINWINDOW_H
