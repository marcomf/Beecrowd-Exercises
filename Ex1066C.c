#include<stdio.h>

int main()
{
    int i, A, pares=0, impares=0, positivos=0, negativos=0;
    
    for  (i=0; 5>i; i++)
    {
        scanf("%d",&A);
        if  (A%2==0)
            pares++;
        else
            impares++;
        if  (A>0)
            positivos++;
        else
        {
            if  (A!=0)
                negativos++;
        }
    }
    printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",impares);
    printf("%d valor(es) positivo(s)\n",positivos);
    printf("%d valor(es) negativo(s)\n",negativos);

    return 0;
}