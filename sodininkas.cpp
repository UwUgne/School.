/*⦁	Sodininkas. 
Sodininkas kiekvieną dieną prirenka n dėžių obuolių. Į turgų jis kiekvieną dieną nuveža m dėžių obuolių. Sodininkas į turgų važiavo d dienų. 
Likusius neparduotus obuolius sodininkas nusprendė supakuoti į didesnes dėžes, kurių kiekvienoje telpa po t mažesnių dėžučių. Parašykite programą,
kiek pilnų didesnių dėžių k bus supakuota ir kiek mažesnių dėžučių a liko nesupakuota. 
**/

#include <iostream>

using namespace std;

int main()
{
 int n, d, t, m, k, a;
    

    std::cout << "irasykite kiek dezuciu n surenka:";
    std::cin >> n;
    std::cout << "irasykite kiek dezuciu nusveze i turgu m:";
    std::cin >> m;
    std::cout << "irasykite kiek dienu vaziavo i turgu d: ";
    std::cin >> d;
    std::cout << "irasykite kiek mazu dezuciu telpa i didesne t: ";
    std::cin >> t;

    k = (n * d - m * d) / t; 
    a = (n * d - m * d) % t;

    std::cout << "Supakuotu deziu kiekis "  << k << \n;
    std::cout << " Likusios nesupakuotos dezes " << a;

    return 0;

}
