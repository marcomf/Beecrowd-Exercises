#include<stdio.h>

int main()
{
    double vet[100];
    int i;

    for (i=0; 100>i; i++)
        scanf("%lf",&vet[i]);
        
    for (i=0; 100>i; i++)
    {
        if (vet[i]<=10)
            printf("A[%d] = %.1lf\n",i,vet[i]);
    }
    return 0;
}