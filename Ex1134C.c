#include<stdio.h>

int main()
{
    int opcao,alcool=0,gasolina=0,diesel=0;

    scanf("%d",&opcao);
    while  (opcao!=4)
    {
        if  (opcao==1)
            alcool++;
        else
        {
            if(opcao==2)
                gasolina++;
            else
            {
                if  (opcao==3)
                    diesel++;
            }
        }
        scanf("%d",&opcao);
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel);

    return 0;
}