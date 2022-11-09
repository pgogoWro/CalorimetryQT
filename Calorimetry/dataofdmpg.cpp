#include "dataofdmpg.h"

DataOfDMPG::DataOfDMPG()
{

}

QVector<double> &DataOfDMPG::getX()
{
    return dmpgX;
}

QVector<double> &DataOfDMPG::getY()
{
    int index = QRandomGenerator::global()->bounded(8);

    if (index == 0){
        return dmpgY1;
    }else if (index == 1){
        return dmpgY2;
    }else if (index == 2){
        return dmpgY3;
    }else if (index == 3){
        return dmpgY4;
    }else if (index == 4){
        return dmpgY5;
    }else if (index == 5){
        return dmpgY6;
    }else if (index == 6){
        return dmpgY7;
    }else if (index == 7){
        return dmpgY8;
    }
}
