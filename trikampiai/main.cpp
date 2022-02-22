#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double Plotai(double ac, double ab, double bc, double ad, double bd, double cd);
double Krastines(double A[2], double B[2], double C[2], double xt, double yt);

int main()
{
    ifstream Skaiciai ("Skaiciai.txt");

    double xt, yt, A[2], B[2], C[2];

    Skaiciai >> xt;
    Skaiciai >> yt;
    Skaiciai >> A[1] >> A[2];
    Skaiciai >> B[1] >> B[2];
    Skaiciai >> C[1] >> C[2];

    Krastines(A, B, C, xt, yt);

    return 0;
}

double Plotai(double ac, double ab, double bc, double ad, double bd, double cd)
{
    ofstream Atsakymas("Atsakymas.txt");

    double p1 = round((ac + ab + bc) / 2); //abc
    double p2 = round((ad + ab + bd) / 2); // abd
    double p3 = round((bd + cd + bc) / 2); // bcd
    double p4 = round((ad + ac + cd) / 2); // acd

    double ABC = round(sqrt(p1 * (p1 - ac) * (p1 - ab) * (p1 - bc)));
    double ABD = round(sqrt(p2 * (p2 - ad) * (p2 - ab) * (p2 - bd)));
    double BCD = round(sqrt(p3 * (p3 - bd) * (p3 - cd) * (p3 - bc)));
    double ACD = round(sqrt(p4 * (p4 - ad) * (p4 - ac) * (p4 - cd)));

    double plotas = ABD + BCD + ACD;

    if (ABC >= plotas)
    {
     Atsakymas << "Taskas yra trikampio viduje";
    }

    else Atsakymas << "Taskas yra trikampio isoreje";

    return 0;
}

double Krastines(double A[2], double B[2], double C[2], double xt, double yt)
{
    double ad = round(sqrt((A[0] - xt) * (A[0] - xt) + (A[1] - yt) * (A[1] - yt)));

    double bd = round(sqrt((B[0] - xt) * (B[0] - xt) + (B[1] - yt) * (B[1] - yt)));

    double cd = round(sqrt((C[0] - xt) * (C[0] - xt) + (C[1] - yt) * (C[1] - yt)));

    double ac = round(sqrt((A[0] - C[0]) * (A[0] - C[0]) + (A[1] - C[1]) * (A[1] - C[1])));

    double ab = round(sqrt((A[0] - B[0]) * (A[0] - B[0]) + (A[1] - B[1]) * (A[1] - B[1])));

    double bc = round(sqrt((B[0] - C[0]) * (B[0] - C[0]) + (B[1] - C[1]) * (B[1] - C[1])));

    Plotai(ac, ab, bc, ad, bd, cd);

    return 0;
}
