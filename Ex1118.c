//Várias Notas Com Validação
#include<stdio.h>

int main()
{
    int N=0, new=1;
    double A, media=0;

    while  (new==1)
    {
        while  (N!=2)
        {
            scanf("%lf",&A);
            if  (A>=0 && A<=10)
            {
                media = media+A;
                N++;
            }
            else
                printf("nota invalida\n");
        }
        media = media/2;
        printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n",media);
        scanf("%d",&new);
        
        while (new!=1 && new!=2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&new);
        }
        media=0, N=0;
    }
    return 0;
}