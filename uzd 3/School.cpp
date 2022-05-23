#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std; 

int Skaityti(int taskai[], double ugis[], string vardai[], int dal);
string Spausdinti(int dal, string vardai[], double ugis[], int taskai[], int k, int p);

ifstream owo("Kandidatai.txt");
ofstream uwu("Rezultatai.txt");

int main()
{
	int dal, k;
	string vardai[5];
	double ugis[5];
	int taskai[5], p;

	owo >> dal;

	 uwu << "___________________________________________________________________________" << "\n";
	 uwu << "Vardai" << "    " << "Ugis" << "    " << "Taskai" << "\n";
	 uwu << "___________________________________________________________________________" << "\n";
	 Skaityti(taskai, ugis, vardai, dal);
	 owo >> p >> k;
	 Spausdinti(dal, vardai, ugis, taskai, k, p);
	 uwu << "___________________________________________________________________________" << "\n";
}

int Skaityti(int taskai[], double ugis[], string vardai[], int dal)
{
	for (int i = 0; i < dal - 1; i++)
		owo >> vardai[i] >> ugis[i] >> taskai[i];
}

string Spausdinti(int dal, string vardai[], double ugis [], int taskai[], int k, int p)
{
	int j = 0;
	while (j <= dal - 1)
	{
		if (ugis[j] >= p)
		{
			p = ugis[j];
			uwu << vardai[j] << "    " << ugis[j] << "    " << taskai[j] << "\n";
		}

		else if (k <= taskai[j])
		{
			k = taskai[j];
			uwu << vardai[j] << "    " << ugis[j] << "    " << taskai[j] << "\n";
		}
		j++;
	}
}