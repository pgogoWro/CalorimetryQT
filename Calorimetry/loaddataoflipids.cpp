#include "loaddataoflipids.h"

LoadDataOfLipids::LoadDataOfLipids()
{

}

void LoadDataOfLipids::loadX()
{
    QFile file("data.txt");
    file.open(QIODevice::ReadOnly);

        QDataStream in(&file);

        double tmp;

        in  >> tmp;
        x.push_back(tmp);

    file.close();
}

void LoadDataOfLipids::loadY()
{
    QFile file("data2.txt");
    file.open(QIODevice::ReadOnly);

        QDataStream in(&file);

        double tmp;

        in >> tmp;
        y.push_back(tmp);

    file.close();
}

QVector<double> &LoadDataOfLipids::getX()
{
 return x;
}

QVector<double> &LoadDataOfLipids::getY()
{
 return y;
}
