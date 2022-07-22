//Soma de Impares Consecutivos I
#include<stdio.h>

int main()
{
    int comeco, fim, aux, total=0;

    scanf("%d%d",&comeco,&fim);
    if  (comeco>fim)
    {
        aux = comeco;
        comeco = fim;
        fim = aux;
    }
    comeco++;
    for  (;fim>comeco; comeco++)
    {
        if  (comeco%2!=0)
            total  = total + comeco;
    }
    printf("%d\n",total);

    return 0;
}