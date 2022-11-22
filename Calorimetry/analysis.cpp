#include "analysis.h"
#include "mainwindow.h"

Analysis::Analysis()
{

}

Analysis::~Analysis()
{
    
}


void Analysis::setNewVectorForAnalysis()//not working
{
    MainWindow peak;
    vecX = peak.getVectorX(); //not working pobieranie vectorX za pomoca gettera, nie dziala
    vecY = peak.getVectorY(); //not working pobieranie vectorY za pomoca gettera, nie dziala
    start = peak.getStartPeak(); //working
    end = peak.getEndPeak(); //working
    for (int i=0; i < vecX.size(); i++) {
        if (vecX[i] != start) {
            stIndex++;
        }else{
            sIndex = stIndex;
            break;
        }
    }
    for (int i=0; i < vecX.size(); i++){
        if (vecX[i] != end){
            enIndex++;
        }else{
            fIndex = enIndex;
            break;
        }
    }
    qDebug()<<"wektorX z gettera"<<peak.getVectorX(); // wyswietlalem wartosci na konsoli tu brak
    qDebug()<<"WektorY z gettera"<<peak.getVectorY(); // tu brak vectora
    qDebug()<<"poczatek piku wartosc"<<start; // poprawna wpisana wybrana przez studenta
    qDebug()<<"koniec piku wartosc"<<end; // poprawna wpisana wybrana przez studenta
    qDebug()<<"wektorX w analizie"<<vecX; // tu brak vectora
    qDebug()<<"WektorY w analizie"<<vecY; // tu brak vectora
    qDebug()<<"poczatek piku indeks"<<stIndex; // tu brak
    qDebug()<<"koniec piku indeks"<<fIndex; // tu brak
}



void Analysis::areaUnderTheCurve() //didnt check
{
        setNewVectorForAnalysis();

        for(int i=sIndex;i<fIndex; i++){
            valueAreaUnderTheCurve+=(vecY[i]*0.015);
        }
}

double Analysis::getValueAreaUTC() //didint check
{
    areaUnderTheCurve();
    return valueAreaUnderTheCurve;
}


