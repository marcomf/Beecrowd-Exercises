//Montanha Russa
#include<iostream>

using namespace std;

int main()
{	
    int Casos, AlturaMin, AlturaMax, Altura, p=0;
    
    while (cin >> Casos >> AlturaMin >> AlturaMax)
    {
        for (int i=1; Casos>=i; i++)
        {
            cin >> Altura;
            if  (Altura>=AlturaMin && Altura<=AlturaMax)
                p++;
        }
    cout << p << endl;
    p=0;
    }
}