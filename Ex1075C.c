#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d",&N);
    for  (i=1; 10000>=i; i++)
    {
        if  (i%N==2)
            printf("%d\n",i);
    }
    return 0;
}