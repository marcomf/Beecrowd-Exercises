//Preenchimento de Vetor III
#include<stdio.h>

int main()
{
    double vet[100], N;
    int i;

    scanf("%lf",&N);
    for (i=0; 100>i; i++, N/=2)
        vet[i] = N;

    for (i=0; 100>i; i++)
        printf("N[%d] = %.4lf\n",i,vet[i]);

    return 0;
}