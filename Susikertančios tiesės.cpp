/*
Parenkite programą, kuri nustatytų, kokiame sveikųjų skaičių intervalo [x1; x2] taške susikerta tiesės y1 = 2x + 2 ir y2 = 3x + 1. 
Pasitikrinkite: Kai x1 = 0, x2 = 10, 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main ()
{
 
 int x2, y1, y2;
 std::cout << "ivesktite x2: ";
 std::cin >> x2;

  for (int i = 0; i <= x2; i++)
    {
     y1 = 2 * i + 2;
     y2 = 3 * i + 1;

      if (y1 == y2) 
      {
      std::cout << y1 <<"  "<< y2 << " susikerta\n";  
      }
      else std::cout <<  y1 <<"  "<< y2 << " *** \n";
    }
  return 0;
}
