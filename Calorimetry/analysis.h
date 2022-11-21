#ifndef ANALYSIS_H
#define ANALYSIS_H

#include "mainwindow.h"

class Analysis: public MainWindow
{
private:
    QVector <double> vectorX;
    QVector <double> vectorY;
    QVector <double> copyVectorY;
    int start = 0, end = 0;
    double valueAreaUnderTheCurve = 0;

public:
    Analysis();
    ~Analysis();
    void setNewVectorForAnalysis();
    void copyThePartOfCurve();
    void areaUnderTheCurve();
    double getValueAreaUTC();
};

#endif // ANALYSIS_H
