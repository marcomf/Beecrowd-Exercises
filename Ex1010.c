//Cálculo Simples
#include<stdio.h>

int main()
{
    int cod, unidades, i;
    double preco, total=0;
    
    for  (i=0; 2>i; i++)
    {
        scanf("%d%d%lf",&cod,&unidades,&preco);
        total = total + unidades*preco;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    
    return 0;
}