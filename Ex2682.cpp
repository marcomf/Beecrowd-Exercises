//Detector de Falhas
#include<iostream>

using namespace std;

int main()
{
    int p=0, numero, numero1=0, resultado;

    while (cin >> numero)
    {
        if  (p==0)
        {
            if  (numero>numero1)
                numero1=numero;
            else
            {
                resultado=numero1+1;
                p=1;
            }
        }
    }
    if  (p==1)
        cout << resultado << endl;
    else
        cout << numero+1 << endl;
}