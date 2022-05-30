#include<stdio.h>

int main()
{
    int i, num, maior=-1, posicao;

    for  (i=1; 100>=i; i++)
    {
        scanf("%d",&num);
        if  (num> maior)
        {
            posicao = i;
            maior = num;
        }
    }
    printf("%d\n%d\n",maior,posicao);

    return 0;
}