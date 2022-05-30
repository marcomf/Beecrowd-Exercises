#include<stdio.h>

int main()
{
    int I, F, total;

    scanf("%d%d",&I,&F);
    if  (I<F)
    {
        total = I-F;
        total = abs(total);
    }
    else
        total = 24-I + F;
    printf("O JOGO DUROU %d HORA(S)\n",total);

    return 0;
}