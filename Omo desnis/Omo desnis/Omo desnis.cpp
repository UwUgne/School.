// Omo desnis.cpp 
#include <fstream>
#include <iostream>

int main(void)
{
   
    int n, I, R, U;

    std::ifstream file("owo.txt");
    std::ofstream output("atsakymas.txt");

    output << "Bandymu rezultatai" << std::endl;
    output << "- - - - - - - - - - - - - - - - - - -" << std::endl;
    
    output << "I" << " " << "U" << " " << "R" << std::endl;

    output << "- - - - - - - - - - - - - - - - - - -" << std::endl;

    file >> n;

    for (int i = 0; i < n; i++) 
    {
            file >> I;
            file >> U;
            file >> R;
             
            if (I == 0) 
            {
                I = U / R;
            }

            if (R == 0)
            {
                R = U / I;
            }
            
            if (U == 0)
            {
                U = R * I;
            }

            output << I << " " << U << " " << R << std::endl;
    }

     output << "- - - - - - - - - - - - - - - - - - -" << std::endl;
   
    return 0;
}