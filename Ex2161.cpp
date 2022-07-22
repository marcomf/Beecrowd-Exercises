//Raiz Quadrada de 10
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{	
    int N;
    double Resto=0, Total=10/3;

    cout << fixed << setprecision(10);
    cin >> N;
    for  (int i=0; N>i; i++)
    {	
        Resto = 6+Resto;
        Resto = 1./Resto;
    }
    cout << Total+Resto << endl;
}