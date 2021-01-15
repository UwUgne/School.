
/*8.	Kvadratinė lygtis. 
Reikia rasti kvadratinės lygties ax2 + bx + c = 0 sprendinius; čia a, b, c – sveikieji skaičiai, nelygūs nuliui.
Sprendimo žodinis aprašymas: 
1.	Aprašykite sveikojo tipo int kintamuosius a,b,c. 
2.	Aprašykite realiojo tipo double kintamuosius D, x1, x2
3.	Skaičiuojamas diskriminantas D = b2 – 4ac
4.	Tikrinama, ar lygtis turi sprendinių:
	jei D < 0, kvadratinė lygtis neturi realių sprendinių;
	jei D = 0, tuomet kvadratinė lygtis turi vieną sprendinį
	jei D > 0, tuomet kvadratinė lygtis turi du sprendinius:
*/
#include <cmath>
#include <iostream>
#include <iomanip>

int main()
{
	int a, b, c;
	double D, x1, x2;
	std::cout << "iveskite a reiksme: ";
	std::cin >> a;
	std::cout << "iveskite b reiksme: ";
	std::cin >> b;
	std::cout << "iveskite c reiksme: ";
	std::cin >> c;

	D = b * b - 4 * a * c;

	if (D > 0) {
		std::cout << "kvadratine lygtis turi du sprendinius" << '\n';
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		std::cout <<std::fixed<< std::setprecision(2) << x1 << '\n';
		std::cout <<std::fixed <<std::setprecision(2) << x2;
	}
	else if (D == 0)
	{
		std::cout << "kvadratine lygtis turi vieną sprendini" << '\n';
		x1 = (-b + sqrt(D)) / (2 * a);
		std::cout << std::fixed <<std::setprecision(2) << x1;
	}
	else 
		std::cout << "kvadratine lygtis neturi realiu sprendiniu";

    return 0;
}
