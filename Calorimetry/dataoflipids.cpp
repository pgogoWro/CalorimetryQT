#include "dataoflipids.h"

DataOfLipids::DataOfLipids()
{

}

QVector<double> &DataOfLipids::getX()
{
    return dmpcX;
}

//QVector<double> &DataOfLipids::getY() //i will try to takes random name from array to return, but doesnt work
//{
//    int index;
//    std::string tmp;
//    QRandomGenerator num = QRandomGenerator();
//    index = num.bounded(0,6);
//    QList <std::string> dmpc =  {"dmpcY1", "dmpcY2", "dmpcY3", "dmpcY4", "dmpcY5", "dmpcY6", "dmpcY7"};
//    tmp = dmpc[index];
//    return tmp;
//}


QVector<double> &DataOfLipids::getY()
{
    int index = QRandomGenerator::global()->bounded(6);

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
    }
}
