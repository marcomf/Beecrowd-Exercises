//Positivos e Média
#include<stdio.h>

int main()
{
    double A, media;
    int i, positivos=0;

    for  (i=0; 6>i; i++)
    {
        scanf("%lf",&A);
        if  (A>0)
        {
            positivos++;
            media = media + A;
        }
    }
    printf("%d valores positivos\n",positivos);
    printf("%.1lf\n",media/positivos);

    return 0;
}