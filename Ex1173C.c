#include<stdio.h>

int main()
{
    int vet[10], i, N;

    scanf("%d",&N);
    for (i=0; 10>i; i++)
    {
        vet[i]=N;
        N*=2;
    }
    
    for (i=0; 10>i; i++)
        printf("N[%d] = %d\n",i,vet[i]);

    return 0;
}