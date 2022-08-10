//Figurinhas Repetidas
#include<iostream>

using namespace std;

int main()
{
    int N, igual=0, diferente=0, parada, i, j; 
    cin >> N;
    int vet[N];
    
    for (i=0; N>i; i++) //lê todas as figurinhas
    {
        cin >> vet[i];
    }
    
    for (i=0; N>i; i++)
    {
        parada = 0;
        for (j=0; N>j; j++)
        {
            if  (vet[i]==vet[j]&& vet[i]!=0 && i!=j)
            {
                igual = igual+1;
                vet[j] = 0;
                parada = 1;
            }
        }
        if  (parada==0 || vet[i]!=0)
        {
            diferente = diferente+1;
        }
    }
    cout << diferente-igual << endl;
    cout << igual << endl;
}