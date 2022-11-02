#include "dataoflipids.h"

DataOfLipids::DataOfLipids()
{

}

QVector<double> &DataOfLipids::getX()
{
    return dmpcX;
}

QVector<double> &DataOfLipids::getY()
{
    return dmpcY1;
}
