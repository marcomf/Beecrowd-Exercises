//Somando Inteiros Consecutivos
#include<stdio.h>

int main()
{
    int A, n, total, i;

    scanf("%d %d",&A,&n);
    while(n<1)
        scanf("%d",&n);

    total=0;
    for  (i=0; n>i; i++)
        total = A + total + i;
        
    printf("%d\n",total);
    
    return 0;
}