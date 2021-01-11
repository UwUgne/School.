// Keturženglis skačius

#include <iostream>

using namespace std;

int main()
{
    int k;
    int a, b, c, d, s; 
    
   std::cout << "iveskite keturzeknkli skaiciu k:";
    std::cin >> k;
    // takes 4 digit number and returns each number as single digit
   a = k / 1000;
   b = k / 100 % 10;
   c = k / 10 % 10;
   d = k % 10;

    s = a + b + c + d;
    std::cout << "skaitmenu suma " << s;
    
    return 0;

}
