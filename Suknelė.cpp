/*Suknelė
Rinkdamasi audinį išleistuvių suknelei Toma galvoja, kad jai geriausiai tiktų melsvos, rusvos ar žalsvos spalvos suknelė. Parduotuvėje ji apžiūrinėja audinius
(m1 = 1, tai melsvos spalvos audinio yra, m1 = 0 – melsvos spalvos audinio parduotuvėje nėra; m2 = 1, tai rusvos spalvos audinio yra, m2 = 0 – rusvos spalvos audinio
parduotuvėje nėra; m3 = 1, tai žalsvos spalvos audinio yra, m3 = 0 – žalsvos spalvos audinio parduotuvėje nėra).
Parašykite programą, kuri kompiuterio ekrane parodytų pranešimą, ar pavyks Tomai parduotuvėje įsigyti audinio išleistuvių suknelei.
Toma medžiagą suknelei įsigis, jei parduotuvėje bus bent vienos iš pageidaujamų spalvų medžiaga. Tokiu atveju sąlygos jungiamos logine operacija arba.
Pasitikrinkite: kai m1 = 1, m2= 1, m3= 1,  tuomet kompiuterio ekrane turi būti rodoma: Toma audinio suknelei įsigis. Kai m1 = 1, m2 = 0, m3 = 0, 
tuomet kompiuterio ekrane turi būti rodoma: Toma medžiagą suknelei įsigis. Kai m1 = 0, m 2 = 0, m3 = 0,  tuomet kompiuterio ekrane turi būti rodoma:
Toma audinio suknelei neįsigis.
*/
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int m1, m2, m3;
	std::cout << "kiek melynos spalvos sukneliu yra parduotuvėje m1: ";
	std::cin >> m1;
	std::cout << "kiek rusvos spalvos sukneliu yra parduotuvėje m2: ";
	std::cin >> m2;
	std::cout << "kiek zalsvos spalvos sukneliu yra parduotuvėje m3: ";
	std::cin >> m3;

	if (m1 > 0 || m2 > 0 || m3 > 0) std::cout << "Toma sukneliai audinio nusipirks";

	else std::cout << "Toma sukneliai audinio nenusipirks";

}