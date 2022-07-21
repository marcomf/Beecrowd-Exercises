//A Resposta de Theon
#include<iostream>

using namespace std;

int main()
{
    int pessoas, menor = 10000, posicao;

    cin >> pessoas;
    int vet[pessoas];

    for (int i=0; pessoas>i; i++)
    {
        cin >> vet[i];
        if  (vet[i]<menor)
        {
            menor = vet[i];
            posicao = i+1;
        }
    }
    cout << posicao << endl;
}