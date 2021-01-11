
//Taupykle 
#include <iostream> 
#include <iomanip> 
#include <cmath> 
#include <fstream> 
using namespace std; 
int main () 
{ 
int k, a, e;
double kk, ek, ak;
double z;

cout << "kiek karosu k pagavo zvejis:";
 cin >> k;
 cout << "vieno karoso svoris kk:";
 cin >> kk;
 cout << "kiek vvidutinio dydzio eseriu pagavo e:";
 cin >> e;
 cout << "vieno eserio svoris ek:";
 cin >> ek; 
 cout << "kiek ausliu pagavo a:";
 cin >> a;
 cout << " vienos auksles svoris ak:";
 cin >> ak;
 
 z = k * kk + e * ek + a * ak;
 cout << " pagautos zuvies kilogramai:" << z << "eurai"; 
return 0;
 }
