//Cédulas
#include<stdio.h>

int main()
{
    int valor, i, cedula=100, n;
    
    scanf("%d",&valor);
    printf("%d\n",valor);
    while  (cedula!=0)
    {
        n = valor/cedula;
        valor = valor%cedula;
        printf("%d nota(s) de R$ %d,00\n",n,cedula);
        if  (cedula==50)
            cedula = 20;
        else
        {
            if   (cedula==5)
                cedula = 2;
            else
                cedula /= 2;
        }
    }
    return 0;
}