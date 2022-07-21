//Menor e Posição
#include<stdio.h>

int main()
{
    int N, i, A, menor=1001, pos;
    scanf("%d",&N);
    int vet[N];

    for (i=0; N>i; i++)
    {
        scanf("%d",&A);
        if (A<menor)
        {
            menor = A;
            pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",menor,pos);

    return 0;
}