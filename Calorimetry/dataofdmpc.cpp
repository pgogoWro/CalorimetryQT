#include "dataofdmpc.h"

DataOfDMPC::DataOfDMPC()
{

}

QVector<double> &DataOfDMPC::getX()
{
    return dmpcX;
}

QVector<double> &DataOfDMPC::getY()
{
    int index = QRandomGenerator::global()->bounded(19);

    if (index == 0){
        return dmpcY1;
    }else if (index == 1){
        return dmpcY2;
    }else if (index == 2){
        return dmpcY3;
    }else if (index == 3){
        return dmpcY4;
    }else if (index == 4){
        return dmpcY5;
    }else if (index == 5){
        return dmpcY6;
    }else if (index == 6){
        return dmpcY7;
    }else if (index == 7){
        return dmpcY8;
    }else if (index == 8){
        return dmpcY9;
    }else if (index == 9){
        return dmpcY10;
    }else if (index == 10){
        return dmpcY11;
    }else if (index == 11){
        return dmpcY12;
    }else if (index == 12){
        return dmpcY13;
    }else if (index == 13){
        return dmpcY14;
    }else if (index == 14){
        return dmpcY15;
    }else if (index == 15){
        return dmpcY16;
    }else if (index == 16){
        return dmpcY17;
    }else if (index == 17){
        return dmpcY18;
    }else if (index == 18){
        return dmpcY19;
    }else if (index == 19){
        return dmpcY20;
    }
}

