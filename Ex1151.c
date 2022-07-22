//Fibonacci Fácil
#include<stdio.h>

int main()
{
   int A, B=1, total=0, aux, i;

    scanf("%d",&A);
    for  (i=0; A>i; i++)
    {
        if (i==A-1)
            printf("%d",total);
        else
            printf("%d ",total);
        aux = total;
        total = total+B;
        B = aux;
    }
    printf("\n");

    return 0;
}