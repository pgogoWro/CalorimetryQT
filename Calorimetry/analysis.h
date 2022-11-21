#ifndef ANALYSIS_H
#define ANALYSIS_H

#include "mainwindow.h"

class Analysis: public MainWindow
{
private:
    QVector <double> vectorX;
    QVector <double> vectorY;
    QVector <double> copyVectorY;
    double start = 0, end = 0; // value for start and end peak, for choose proper vector
    int stIndex = 0, enIndex = 0; // for index new vector, for analysis
    double valueAreaUnderTheCurve = 0;

public:
    Analysis();
    ~Analysis();
    void setNewVectorForAnalysis();
    void areaUnderTheCurve();
    double getValueAreaUTC();
};

#endif // ANALYSIS_H
