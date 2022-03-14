#include <fstream>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, arb[4] = {}, vid = 0, diff[4] = {}, x;
	ifstream Arbuzai("Arbuzai.txt");


	Arbuzai >> n;

	for (int i = 0; i < n; i++) 
	
	{
		Arbuzai >> arb[i];
		vid += arb[i];
	}

	int vidurkis = vid / n;
	cout << vidurkis;

	for (int j = 0; j < n; j++) 
	{
		if (arb[j] > vidurkis)
		{
			x = arb[j] - vidurkis;
			diff[j] = x;
		}
		
		else
		{
			x = vidurkis - arb[j];
			diff[j] = x;
		}
		
	}

	ofstream Atsakymas("atsakymas.txt");
	Atsakymas << *min_element (diff, diff + n);
	
	return 0;
}
