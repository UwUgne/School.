//pirma uzduotis
#include <iostream>

using namespace std;
int main ()
{
  int long x, y;
   int long s, m;
   std::cout << "iveskite x reiksme";
   std::cin >> x;
   std::cout << "iveskite y reiksme";
   std::cin >> y;
   m = x * 60 + y;
   s = m * 60;
   std::cout << m;
   std::cout << s;
}