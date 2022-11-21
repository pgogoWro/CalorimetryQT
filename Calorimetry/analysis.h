#ifndef ANALYSIS_H
#define ANALYSIS_H


#include <QVector>

class Analysis
{

private:
    QVector <double> vectorX;
    QVector <double> vectorY;
    QVector <double> copyVectorY;
    double start = 0, end = 0; // value for start and end peak, for choose proper vector
    int stIndex = 0, enIndex = 0;
    int sIndex = 0, fIndex = 0; // for index new vector, for analysis
    double valueAreaUnderTheCurve = 0;

public:
    Analysis();
    ~Analysis();
    void setNewVectorForAnalysis(const double start, const double end);
    void areaUnderTheCurve(const double start, const double end);
    double getValueAreaUTC(const double start, const double end);
};

#endif // ANALYSIS_H
