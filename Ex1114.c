//Senha Fixa
#include<stdio.h>

int main()
{
    int Senha, A=1;

    scanf("%d",&Senha);

    while  (A==1)
    {
        if  (Senha != 2002)
        {
            printf("Senha Invalida\n");
            scanf("%d",&Senha);
        }
        else
        {
            printf("Acesso Permitido\n");
            A=0;
        }
    }  
    return 0;
}