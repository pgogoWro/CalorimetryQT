#include "loaddataoflipids.h"

QVector <double> x;

LoadDataOfLipids::LoadDataOfLipids()
{

}

void LoadDataOfLipids::loadX()
{
//    QFile file("data.txt");
//    file.open(QFile::ReadOnly | QFile::Text);
//    QTextStream in(&file);
//    QString value = in.readLine();
//    x.push_back(value);

//    if (!file.open(QFile::ReadOnly | QFile::Text){
//            QMessageBox::warning(this, "title", "No data file");
//    }

//    QTextStream in(&file);
//    QString value = in.readLine();
//            while(!line.isNull()){
//            fileContent.append(line);
//            line  = in.readLine();
//            tmp = line;
//            x.push_back(tmp);
  //  }



}

void LoadDataOfLipids::loadY()
{

}

QVector<double> &LoadDataOfLipids::getX()
{
 return x;
}

QVector<double> &LoadDataOfLipids::getY()
{
 return y;
}
