//Soma de Pares Consecutivos
#include<stdio.h>

int main()
{
    int N, i, total=0;

    scanf("%d",&N);
    while (N!=0)
    {
        for (i=0; 5>i; N++)
        {
            if  (N%2==0)
            {
                total = total+N;
                i++;
            }
        }
        printf("%d\n",total);
        total=0;
        scanf("%d",&N);
    }
    return 0;
}