//Falha do Motor
#include<iostream>

using namespace std;

int main()
{	
    int N, i, Resultado, p=0, aux;
    cin >> N;
    int vet[N];
    
    for (i=0; N>i; i++)
        cin >> vet[i];
    for (i=0; N>i && p!=1; i++)
    {
        if  (vet[i]>vet[i+1])
            p=1;
    }
    if  (p==0)
        cout << "0" << endl;
    else
        cout << i+1 << endl;
}