#include "loaddataoflipids.h"

LoadDataOfLipids::LoadDataOfLipids()
{

}

void LoadDataOfLipids::loadX()
{
    double column1, column2;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        x.push_back(column1);
    }
    plik.close();
}

void LoadDataOfLipids::loadY()
{
    double column1, column2;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        y.push_back(column2);
    }
    plik.close();
}

std::vector<double> &LoadDataOfLipids::getX()
{
 return x;
}

std::vector<double> &LoadDataOfLipids::getY()
{
 return y;
}
