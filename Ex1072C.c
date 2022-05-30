#include<stdio.h>

int main()
{
    int testes, num, i, in=0, out=0;

    scanf("%d",&testes);
    for  (i=0; testes>i; i++)
    {
        scanf("%d",&num);
        if  (num>=10 && num<=20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n",in,out);
    
    return 0;
}