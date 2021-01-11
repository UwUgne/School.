/*Keturzengliu skaiciu vertimas*/

#include <iostream>

using namespace std;

int main()
{
    int k;
    int a, b, c, d, e;
    int np{};
    

    cout << "iveskite keturzeknkli skaiciu k:";
    cin >> k;
  a =  k /10000;
  b = k /1000 % 10;
  c = k /100 % 10;
  d = k /10 % 10;
  e = k % 10;
    
    np = b * 10000 + a * 1000 + e * 100 + a * 10 + c;
    cout << "penkezeklis skaicius " << "=" << np;
    
    return 0;

}
