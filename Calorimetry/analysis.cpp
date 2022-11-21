#include "analysis.h"
#include "mainwindow.h"

Analysis::Analysis()
{

}

Analysis::~Analysis()
{
    
}


void Analysis::setNewVectorForAnalysis()
{
    MainWindow peak;
    vectorX = peak.vectorX;
    vectorY = peak.vectorY;
    start = peak.getStartPeak();
    end = peak.getEndPeak();
    for (int i=0; i < vectorX.size(); i++) {
        if (vectorX[i] != start) {
            stIndex++;
        }else{
            sIndex = stIndex;
            break;
        }
    }
    for (int i=0; i < vectorX.size(); i++){
        if (vectorX[i] != end){
            enIndex++;
        }else{
            fIndex = enIndex;
            break;
        }
    }
}



void Analysis::areaUnderTheCurve()
{
        setNewVectorForAnalysis();

        for(int i=sIndex;i<fIndex; i++){
            valueAreaUnderTheCurve+=vectorY[i]*0.015;
        }
}

double Analysis::getValueAreaUTC()
{
    areaUnderTheCurve();
    return valueAreaUnderTheCurve;
}


