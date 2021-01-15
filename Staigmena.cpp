/*Mokinys per pusmetį gavo 5 programavimo pradmenų modulio pažymius.Mokytoja nusprendė padaryti vaikams staigmeną : mokiniai, kurių pažymių vidurkis yra didesnis už 9,
gaus tris saldainius, o mokiniams, kurių vidurkis yra tarp 7 ir 9, įskaitant intervalo galus, bus apdovanoti dviem saldainiais.Visi likusieji gaus po vieną saldainį.
Parašykite programą, kuri pagal įvestus mokinio pažymius apskaičiuotų, kiek saldainių jis gaus.
Pasitikrinkite :
	Kokius pažymius gavo mokinys ? 8 9 6 5 10	Mokinys gaus du saldainius
	Kokius pažymius gavo mokinys ? 10 10 8 9 10	Mokinys gaus tris saldainius
	Kokius pažymius gavo mokinys ? 5 5 4 5 5	Mokinys gaus vieną saldainį */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int p1, p2, p3, p4, p5;
	double v;

	std::cout << "Iveskite mokinio pazymius nuo p iki p5: ";
	std::cin >> p1 >> p2 >> p3 >> p4 >> p5;

	v = (p1 + p2 + p3 + p4 + p5) / 5;

	if (v >= 9) std::cout << "mokinys gaus tris saldainius";

	else if (v > 7) std::cout << "mokinys gaus du saldainius";

	else std::cout << "mokinys gaus viena saldaini";

	return 0;
}