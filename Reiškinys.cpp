/*

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main ()
{
 
  double y, result;

  for (int i = -5; i <= 5; i++)
    {
      y = i * i + 3 * i + 5;

      result = sqrt (y);
      std::cout << std::setprecision (3) << result << "\n";
      
    }
  return 0;
}
