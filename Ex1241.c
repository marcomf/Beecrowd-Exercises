//Encaixa ou Não II
#include<stdio.h>
#include<string.h>

int main()
{
    int testes, i, A, B, j, k, verificador=0;
    char valor[1001], valorT[1001], lixo[10000];
    
    scanf("%d",&testes);
    for (i=0; testes>i; i++)
    {
        strcpy(lixo,valorT);
        strcpy(lixo,valor);
        scanf("%*c%s %s",valorT,valor);

        A = strlen(valorT);
        B = strlen(valor);

        for (j=A-B,k=0;  A>=j; k++,j++)
        {
            if  (valorT[j]==valor[k])
               verificador++;
        }

        if  (verificador-1 == B)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
        verificador = 0;
    }
    return 0;
}