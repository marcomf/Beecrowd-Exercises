//Notas
#include<iostream>

using namespace std;

int main()
{	
    int N, i, j, contador=0, contador1=0, A=0, B=0;
    cin >> N;
    int vetor[N];
    
    for (i=0; N>i; i++)
    {
        cin >> vetor[i];
    }
    for (i=0; N>i; i++)
    {
        for (j=0; N>j; j++)
        {
            if  (vetor[i]==vetor[j])
            {
                contador=contador+1;
                A = vetor[i];
            }
        }
        if  (contador>contador1)
        {
            contador1=contador;
            B = vetor[i];
        }
        else
        {
            if (contador==contador1)
            {
                if  (A>B)
                    B = A;
            }
        }
        contador = 0;
    }
    cout << B << endl;
}