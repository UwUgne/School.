
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
Pasitikrinkite
 
Išspręskite kvadratines lygtis:
o	x2 + 14x + 49 = 0; (-7)
o	x2- 12x + 36 = 0; (6)
o	x2– 8x – 9 = 0; (-1; 9)
o	x2– 5x + 6 = 0; (2; 3)
o	x2 – x + 2 = 0; ()
o	–x2 + 4x + 1 = 0; (4,24; -0,24)
*/
#include <cmath>
#include <iostream>
int main()
{
	int a, b, c, D, x1, x2;
	std::cout << "iveskite a reiksme: ";
	std::cin >> a;
	std::cout << "iveskite b reiksme: ";
	std::cin >> b;
	std::cout << "iveskite c reiksme: ";
	std::cin >> c;
	
	D = b*2 - 4*a*c;

	if (D > 0) {
		std::cout << "kvadratine lygtis turi du sprendinius" << '\n';
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		std::cout << x1 << '\n';
		std::cout << x2 << '\n';
	}
	else if (D == 0)
	{
		std::cout << "kvadratine lygtis turi vieną sprendini" << '\n';
		x1 = (-b + sqrt(D)) / (2 * a);
		std::cout << x1;
	}
	else {
		std::cout << "kvadratine lygtis neturi realiu sprendiniu";
	
	}
	return 0;
}