#include "pinigų_skaičiavimas.h"
#include <iostream> 
using namespace std;
int main()
{
    int  p, j, a;
    int  s;
    std::cout << "iveskite prano sumoketus pinigus";
    std::cin >> p;
    std::cout << "iveskite jono sumoketus pinigus ";
    std::cin >> j;
    std::cout << "iveskite antano sumoketus pinigus ";

    s = p + j + a;

    std::cout << s;
    return 0;
}
