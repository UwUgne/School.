/*Apskritimo ilgis.
Parašykite programą, skaičiuojančią žinomo spindulio r(realusis skaičius) apskritimo ilgį C.π reikšmę aprašykite kaip konstantą.Laikykite, kad π = 3.141592.
Rezultatą išveskite dviejų skaitmenų po kablelio tikslumu. */

#include <iostream>
#include <iomanip> 
#include <cmath> 
#include <fstream>

int main()
{
    const double n = 3.141592;
    double r, C;


    std::cout << "Irasykite spinduli r:";
    std::cin >> r;

    C = (r * 2) * n;

    std::cout << std::fixed << std::setprecision(2) << C;

    return 0;
    
}

