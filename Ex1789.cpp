//A Corrida de Lesmas
#include<iostream>

using namespace std;

int main()
{
    int testes, maior=0;

    while (cin >> testes)
    {
        int vet[testes];

        for (int i=0; testes>i; i++)
        {
            cin >> vet[i];
            if  (vet[i] > maior)
                maior = vet[i];
        }

        if  (maior<10)
            printf("1\n");
        else
        {
            if  (maior<20)
                printf("2\n");
            else
                printf("3\n");
        }
        maior = 0;
    }
}