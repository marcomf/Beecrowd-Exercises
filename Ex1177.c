//Preenchimento de Vetor II
#include<stdio.h>

int main()
{
    int i, j, A, vet[1000];

    scanf("%d",&A);
    for (i=0,j=0; 1000>i; i++)
    {
        if (A>j)
        {
            vet[i]=j;
            j++;    
        }
        else
        {
            j=0;
            vet[i]=j;
            j++;
        }
    }

    for (i=0; 1000>i; i++)
        printf("N[%d] = %d\n",i,vet[i]);

    return 0;
}