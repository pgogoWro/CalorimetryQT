#include "dataofdppc.h"

DataOfDPPC::DataOfDPPC()
{

}

QVector<double> &DataOfDPPC::getX()
{
    return dppcX;
}

QVector<double> &DataOfDPPC::getY()
{
    int index = QRandomGenerator::global()->bounded(8);

    if (index == 0){
        return dppcY1;
    }else if (index == 1){
        return dppcY2;
    }else if (index == 2){
        return dppcY3;
    }else if (index == 3){
        return dppcY4;
    }else if (index == 4){
        return dppcY5;
    }else if (index == 5){
        return dppcY6;
    }else if (index == 6){
        return dppcY7;
    }else if (index == 7){
        return dppcY8;
    }else if (index == 8){
        return dppcY9;
    }
}
