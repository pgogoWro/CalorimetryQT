#include "analysis.h"
#include "ui_mainwindow.h"

Analysis::Analysis()
{
    start = getStartPik();
    end = getEndPik();
}

Analysis::~Analysis()
{
    
}


void Analysis::setNewVectorForAnalysis()
{
    for (int i=0; i < vectorX.size(); i++) {
        if (vectorX[i] != start) {
            start++;
        }else{
            break;
        }
    }
    for (int i=0; i < vectorX.size(); i++){
        if (vectorX[i] != end){
            end++;
        }else{
            break;
        }
    }
}

void Analysis::copyThePartOfCurve()
{
    QVector <double> copyVectorY(vectorY[start], vectorY[end]);
}

void Analysis::areaUnderTheCurve()
{
        setNewVectorForAnalysis();
        copyThePartOfCurve();
        for(int i=0;i<=copyVectorY.size(); i++){
            valueAreaUnderTheCurve+=copyVectorY[i]*0.015;
        }
}

double Analysis::getValueAreaUTC()
{
    return valueAreaUnderTheCurve;
}


