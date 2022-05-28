#include<stdio.h>

int main()
{
    int horas, velocidade;
    double litros;
    
    scanf("%d%d",&horas,&velocidade);
    litros = (horas*velocidade)/12.0;
    printf("%.3lf\n",litros);

    return 0;
}