//Preenchimento de Vetor IV
#include<stdio.h>

int main()
{
    int par[5], impar[5], i, x, P=0, I=0, j;

    for  (i=0; 15>i; i++)
    {
        scanf("%d",&x);
        if (x%2==0)
        {
            par[P] = x;
            P++;
        }
        else
        {
            impar[I] = x;
            I++;
        }
        //printar o vetor par cheio
        if (P==5)
        {
            for (j=0; 5>j; j++)
                printf("par[%d] = %d\n",j,par[j]);
            P=0;
        }
        //printar o vetor impar cheio
        if (I==5)
        {
            for (j=0; 5>j; j++)
                printf("impar[%d] = %d\n",j,impar[j]);
            I=0;
        }
    }
    
    for (i=0; I>i; i++)
        printf("impar[%d] = %d\n",i,impar[i]);

    for (i=0; P>i; i++)
        printf("par[%d] = %d\n",i,par[i]);
    
    return 0;
}