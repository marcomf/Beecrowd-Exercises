//Fibonacci em Vetor
#include<stdio.h>

int main()
{
   long long int vet[60];
   int i, testes, j=0, A;
   vet[0] = 0, vet[1] = 1;
   
   scanf("%d",&testes);
   while (testes!=j)
   {
        j++;
        scanf("%d",&A);
        for (i=2; A>=i && A!=1 && A!=0; i++)
            vet[i] = vet[i-1] + vet[i-2];
        printf("Fib(%d) = %lld\n",A,vet[A]);
   }
   return 0;
}