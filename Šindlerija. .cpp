/*⦁	Šindlerija. 
Šindlerija yra pati mažiausia pasaulio žuvis. Ji sveria 2 miligramus. Mokslininkai nori ištirti k gramų šių žuvelių. Kiekviename akvariume telpa n šindlerijų. 
Kiek pilnų akvariumų a bus tiriama ir kiek šindlerijų p bus paskutiniame akvariume (paskutinis akvariumas gali būti nepilnas). Parašykite programą šiam uždaviniui spręsti.
Pradiniai duomenys ir rezultatai – sveikieji skaičiai. 
*/
#include <iostream>

using namespace std;

int main()
{
    int k, n, a, p;

   std::cout << "akvariumo talpa n:";
    std::cin >> n;
    std::cout << "kiek gramu zuveliu mokslinikai nori istirti k:";
    std::cin >> k;
    

    a = k * 1000 / 2 / n;
    round (p = k * 1000 / 2 % n);

    std::cout << " paskutinio akvariumo zuveliu skaicius " << a;
    std::cout << " pilni akvariumai " << p;

    return 0;
     
}
