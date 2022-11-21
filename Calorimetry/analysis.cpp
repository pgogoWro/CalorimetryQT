#include "analysis.h"
#include "mainwindow.h"

Analysis::Analysis()
{

}

Analysis::~Analysis()
{
    
}


void Analysis::setNewVectorForAnalysis(const double start, const double end)
{
    MainWindow peak;
    vectorX = peak.vectorX;
    vectorY = peak.vectorY;
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



void Analysis::areaUnderTheCurve(const double start, const double end)
{
        setNewVectorForAnalysis(start, end);

        for(int i=sIndex;i<fIndex; i++){
            valueAreaUnderTheCurve+=vectorY[i]*0.015;
        }
}

double Analysis::getValueAreaUTC(const double start, const double end)
{
    areaUnderTheCurve(start, end);
    return valueAreaUnderTheCurve;
}


