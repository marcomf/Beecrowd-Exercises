#include<stdio.h>

int main()
{
    int vet[20], i, aux;

    for (i=0; 20>i; i++)
        scanf("%d",&vet[i]);

    for (i=0; 10>i; i++)
    {
        aux = vet[i];
        vet[i] = vet[19-i];
        vet[19-i] = aux;
    }

    for (i=0; 20>i; i++)
        printf("N[%d] = %d\n",i,vet[i]);

    return 0;
}