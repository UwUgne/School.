#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

const char CDfv[] = "Batai.txt";
const char CRfv[] = "Rezultatai9.txt";
const int CMax = 100;

void Skaityti(const char fv[], char A[], int B[], int& n);
void Spausdinti(const char fv[], char A[], int B[], int n);
int IeskotiBatu(char A[], int B[], int n, char tp, int dd);
void SalintiBatus(char A[], int B[], int& n, int ind);

int main()
{
    char T[CMax]; // batu tipai (m – moteriski, v – vyriski)
    int D[CMax]; // batu dydziai
    int n; // batu skaicius
    int bind;
    ofstream fr;
    Skaityti(CDfv, T, D, n);
    fr.open(CRfv);
    fr.close();
    Spausdinti(CRfv, T, D, n);
    fr.open(CRfv, ios::app);
    bind = IeskotiBatu(T, D, n, 'v', 43);
    if (bind >= 0) { 
        fr << "Mykolo 43-io dydþio batø indeksas masyve " << bind << endl;
        SalintiBatus(T, D, n, bind);
    }
    else // batø nerasta
        fr << "Parduotuvëje Mykolo 43-io dydþio batø nebuvo" << endl;
    bind = IeskotiBatu(T, D, n, 'm', 38);
    if (bind >= 0) { 
        fr << "Marytës 38-o dydþio batø indeksas masyve " << bind << endl;
        SalintiBatus(T, D, n, bind);
    }
    else // batø nerasta
        fr << "Parduotuvëje Marytës 38-o dydþio batø nebuvo" << endl;
    Spausdinti(CRfv, T, D, n);
    fr.close(); 
    return 0;
}

void Skaityti(const char fv[], char A[], int B[], int& n)
{
    ifstream fd(fv);
    fd >> n; 
    for (int i = 0; i < n; i++)
        fd >> A[i] >> B[i];
        fd.close(); 
}

void Spausdinti(const char fv[], char A[], int B[], int n)
{
    ofstream fr(fv, ios::app);
    fr << " Batu sarasas " << endl;
    fr << "--------------" << endl;
    fr << " Tipas Dydis " << endl;
    fr << "--------------" << endl;
    for (int i = 0; i < n; i++)
        fr << setw(4) << A[i] << " " << setw(2) << B[i] << endl;
    fr << "--------------" << endl;
    fr.close(); 
}

// Masyvuose A(n) ir B(n) iesko reiksmiu, atitinkamai lygiu tp (tipas) ir dd (dydis);
// jeigu reiksmes suranda, gràzina masyvu reikšmiu elementu indeksà,
// jeigu tokiu reiksmiu masyvuose nëra, gràzina -1

int IeskotiBatu(char A[], int B[], int n, char tp, int dd)
{
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        if ((A[i] == tp) && (B[i] == dd))
            ind = i;
    }

    return ind;
}

// Pasalina is masyvu A(n) ir B(n) elementu, kuriu indeksas yra ind, reiksmes

void SalintiBatus(char A[], int B[], int& n, int ind)
{
    for (int i = ind; i < n - 1; i++) 
    {
        A[i] = A[i + 1];
            B[i] = B[i + 1];
    }
    n--;
}



