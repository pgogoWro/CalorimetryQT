#ifndef LOADDATAOFLIPIDS_H
#define LOADDATAOFLIPIDS_H
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

class LoadDataOfLipids //class for load a point to vector, loading from txt file
{
private:
    std::vector<double> x;
    std::vector<double> y;
public:
    LoadDataOfLipids();

    void loadX();//methods to loading from file
    void loadY();

    std::vector<double>& getX();//methods for getting vectors
    std::vector<double>& getY();
};

#endif // LOADDATAOFLIPIDS_H
