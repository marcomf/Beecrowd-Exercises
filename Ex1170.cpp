//Blobs
#include<iostream>

using namespace std;

int main()
{
    int N, resultado, i;
    double valor;

    cin >> N;
    for (i=0; N>i; i++)
    {
        cin >> valor;
        while (valor>1)
        {
            valor = valor/2;
            resultado++;
        }
        cout << resultado << " dias" << endl;
        resultado = 0;
    }
}