#ifndef LOADDATAOFLIPIDS_H
#define LOADDATAOFLIPIDS_H
#include <iostream>
#include <fstream>
#include <QVector>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QIODevice>
#include <QString>

//Its not working at the moment

class LoadDataOfLipids //class for load a point to vector, loading from txt file
{
private:
    QVector<double> x;
    QVector<double> y;
public:
    LoadDataOfLipids();

    void loadX();//methods to loading from file
    void loadY();

    QVector<double>& getX();//methods for getting vectors
    QVector<double>& getY();
};

#endif // LOADDATAOFLIPIDS_H
