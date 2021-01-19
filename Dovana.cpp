/*⦁	Dovana.
Kęstutis ruošiasi į Justo gimtadienį. Justas labai mėgsta žaisti futbolą, todėl Kęstutis nupirko futbolo kamuolį, kurio skersmuo d centimetrų ir nusprendė jį
įdėti į gražią stačiakampio gretasienio formos dėžutę, kurios aukštis yra a, ilgis – b, o plotis – c centimetrų. Parašykite programą, kuri ekrane parodytų pranešimą
„Kamuolys į dėžutę tilps“, jei kamuolys į dėžutę tilps, arba „Kamuolys į dėžutę netilps“, jei kamuolys į dėžutę netilps. Duomenys sveikieji skaičiai.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int d, a, b, c;
    std::cout << "iveskite koks kamuolio skersmuo d: ";
    std::cin >> d;
    std::cout << "iveskite koks dezutes aukstis a: ";
    std::cin >> a;
    std::cout << "iveskite dezutes ilgis b: ";
    std::cin >> b;
    std::cout << "iveskite koks kamuolio plotas c: ";
    std::cin >> c;

    if (d <= a && d <= b && d <= c) std::cout << "kamuolys tilps i dezute :3";
    else std::cout << "kamuolys i dezute netilps";

    return 0;
}
