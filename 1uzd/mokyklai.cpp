#include <iostream>
# include <fstream>

using namespace std;

int main()
{
    int N, L, C, num = 0, kainaKirpimo = 0;

    ifstream  pl("TskPasymatimas.txt");
    ofstream  tx("TresPasymatimas.txt");

    pl >> N >> L;
    pl >> C;

    int Li[N];

    if (pl.is_open())
    {
        for (int i = 0; i < N; ++i)
        {
            pl >> Li[i];
           
            kainaKirpimo += Li[i] - L;
            
        }

      if (C > kainaKirpimo) { tx << kainaKirpimo << "\n" << "Kirpkis"; }

      else if (C < kainaKirpimo) {tx << kainaKirpimo <<"\n" << "Auto"; }
        
      else if (C==kainaKirpimo) {tx << "Gali rinktis bet kuri varianta"; }

    }
    return 0;
}
