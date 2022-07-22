//Fatorial Simples
#include<stdio.h>

int main()
{
    int A, i ,total=1;
    
    scanf("%d",&A);
    while  (A!=1)
    {
        total = total*A;
        A--;
    }
    printf("%d\n",total);

    return 0;
}