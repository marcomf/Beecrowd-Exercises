//Substituição em Vetor I
#include<stdio.h>

int main()
{
    int vet[10], i;

    for (i=0; 10>i; i++)
    {
        scanf("%d",&vet[i]);
        if (vet[i] < 1)
            vet[i] = 1;
    }
    
    for (i=0; 10>i; i++)
        printf("X[%d] = %d\n",i,vet[i]);

    return 0;
}