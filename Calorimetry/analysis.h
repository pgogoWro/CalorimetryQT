#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <QVector>

class Analysis
{

private:
    QVector <double> vecX;
    QVector <double> vecY;
    double start , end ; // value for start and end peak, for choose proper vector
    int stIndex = 0, enIndex = 0;
    int sIndex = 0, fIndex = 0; // for index new vector, for analysis
    double valueAreaUnderTheCurve = 0;

public:
    Analysis();
    ~Analysis();
    void setNewVectorForAnalysis();
    void areaUnderTheCurve();
    double getValueAreaUTC();
};

#endif // ANALYSIS_H
